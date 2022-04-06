<html>
<head>
	<title>operators</title>
</head>
<body>
	<?php
		$a=10;
		$b=2;
		$e=0;
		
		$e+=$a; //assignment operators.
		$a++; //increment operators.
		$c=$a>$b;
		$d=$a>=$b;
		
		$f=$a AND $b; //logical operators.
		//echo "assignment=".((bool)$a<=$b)."<br>";
		echo $e. "<br>";
		echo $c. "<br>";
		echo $d. "<br>";
		echo $f. "<br>";
	?>
</body>
</html>	