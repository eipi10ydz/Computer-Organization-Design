#Implementation of mips-like single-cycle cpu.

###First implement a single-cycle mips-like cpu

###Then use the cpu to compute the first 20 components of Fibonacci sequence begins with 3, 3.

MIPS assembly language program is listed as follows

<pre>
		lw   $t5, 14($t6)	;8CC50014
		lw   $t3, 15($t6) 	;8CC30015
		lw   $t4, 16($t6) 	;8CC40016
		sw   $t3, 0($t6)  	;ACC30000
		sw   $t4, 1($t6)  	;ACC40001
		addi $t1, $t5, -2 	;20A1FFFE
loop:	lw   $t3, 0($t6) 	;8CC30000
	 	lw   $t4, 1($t6) 	;8CC40001
	 	add  $t2, $t3, $t4 	;00641020
	  	sw   $t2, 2($t6) 	;ACC20002
	 	addi $t6, $t6, 1 	;20C60001
	 	addi $t1, $t1, -1 	;2021FFFF
	 	bgtz $t1, loop 		;1C20FFFD
out:	j out 				;08000006
</pre>