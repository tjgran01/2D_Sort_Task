<?php
	$path = $_POST["path"];
	
	$file = fopen($path, "r");
	echo fread($file, filesize($path));
	fclose($file);
	
?>