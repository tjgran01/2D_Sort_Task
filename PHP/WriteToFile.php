<?php
	header('Access-Control-Allow-Credentials: true');
	header('Access-Control-Allow-Methods: GET, POST, PUT, OPTIONS');
	header('Access-Control-Allow-Headers: Accept, Content-Type, X-Access-Token, X-Application-Name, X-Request-Sent-Time');
	header('Access-Control-Allow-Origin: *');

	
	$path = $_POST["path"];
	$data = $_POST["data"];

	if($data != "")
	{
		$dirname = dirname($path);
		if(!is_dir($dirname))
		{
			mkdir($dirname, 0777, true);
		}

		$file = fopen($path, "w");
		fwrite($file, $data);
		fclose($file);
	}
	else
	{
		echo("Message delivery failed...");
	}

?>