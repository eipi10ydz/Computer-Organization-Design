#Implementation of mips-like multi-cycle cpu.

###First implement a multi-cycle mips-like cpu

###Then use the cpu to compute the first 20 components of Fibonacci sequence begins with 3, 3.

MIPS assembly language program is listed as follows

<pre>
		lw   $t5, 23($t6) ;8CC50023   
		lw   $t3, 24($t6) ;8CC30024   
		lw   $t4, 25($t6) ;8CC40025   
		addi $t6, $t6, 15 ;20C6000F   
		sw   $t3, 0($t6)  ;ACC30000   
		sw   $t4, 1($t6)  ;ACC40001   
		addi $t1, $t5, -2 ;20A1FFFE 
loop:  	lw   $t3, 0($t6)  ;8CC30000    
		lw   $t4, 1($t6)  ;8CC40001    
		add  $t2, $t3, $t4;00641020     
		sw   $t2, 2($t6)  ;ACC20002    
		addi $t6, $t6, 1  ;20C60001    
		addi $t1, $t1, -1 ;2021FFFF    
		bgtz $t1, loop	  ;1C20FFF9 
out:  	j out   		  ;0800000E  
</pre>