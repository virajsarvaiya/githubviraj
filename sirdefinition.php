<html>
<head>
<title>sir definition</title>
</head>
<body>
	<?php
		/* WAP to change the value of associative array his key */
		
		$a=array("a"=>"this","b"=>"IS","c"=>"test","d"=>"of","e"=>"ds");
		
		//foreach($a['e']=="ds")
		foreach($a as $b =>$c)
		{
			if($a['e']=="ds")
			{
				$a['e']="php & html";
			}
		}
		print_r($a);
	?>
</body>
</html>
		