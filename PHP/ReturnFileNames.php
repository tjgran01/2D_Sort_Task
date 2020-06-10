<?php
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