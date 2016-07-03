loop1:  sll  $13, $5, 3
	srl  $14, $24, 2
	addi $1, $1, -1
	sllv $15, $2, $3
	srlv $16, $24, $2
	bgtz $1, loop1
	addi $1, $1, 1
loop2:  sra  $17, $2, 3
	srav $18, $24, $2
	addi $1, $1, -1
	sltu $19, $5, $2
	slt  $20, $5, $2
	bgez $1, loop2
	addi $1, $1, 1
loop3:	sub  $3, $2, $1
	subu $4, $2, $1
	beq  $1, $1, test
loop4:	addi $1, $1, 2
	andi $10, $10, 0
test:	bne  $1, $1, loop4
	and  $6, $5, $10
	or   $7, $5, $10
loop5:	andi $1, $1, 0
	xor  $8, $2, $1
	nor  $9, $4, $3
	bltz $1, loop5
	andi $1, $1, 0
loop6:	add  $11, $2, $1
	addu $12, $2, $5
	addi $1, $1, 1
	ori  $19, $18, 10
	xori $16, $17, 10
	blez $11, loop6
	slti $3, $5, 233
	sltiu $1, $1, 10
	andi $4, $5, 10
	lui  $6, 233
	j    test