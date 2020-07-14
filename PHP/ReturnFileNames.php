<?php
	header('Access-Control-Allow-Credentials: true');
	header('Access-Control-Allow-Methods: GET, POST, PUT, OPTIONS');
	header('Access-Control-Allow-Headers: Accept, Content-Type, X-Access-Token, X-Application-Name, X-Request-Sent-Time');
	header('Access-Control-Allow-Origin: *');

	
	$path = $_POST["path"];

	if ($handle = opendir($path)) 
	{
	    while (false !== ($entry = readdir($handle))) 
	    {
	        if ($entry != "." && $entry != "..") 
	        {
	            echo "$entry\n";
	        }
	    }
	    closedir($handle);
	}
?>