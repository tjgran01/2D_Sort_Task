<?php
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