ori $10,$0,0x93
ori $2,$0,0xae
addu $3,$10,$2
subu $4,$10,$2
sw $4,16($0)
lw $5,16($0)
l3:beq $4,$5,l1
lui $8,0x1234
j end
l1:addu $5,$4,$10
lui $7,0x1314
j l3
end:
