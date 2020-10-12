	.file	"test.c"
	.option nopic
	.text
	.globl	a
	.data
	.align	3
	.type	a, @object
	.size	a, 12
a:
	.word	1
	.word	2
	.word	3
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-16
	sd	ra,8(sp)
	sd	s0,0(sp)
	addi	s0,sp,16
	lui	a5,%hi(a)
	addi	a0,a5,%lo(a)
	call	puts
	lui	a5,%hi(a)
	addi	a5,a5,%lo(a)
	lw	a5,8(a5)
	mv	a0,a5
	ld	ra,8(sp)
	ld	s0,0(sp)
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.ident	"GCC: (GNU) 10.2.0"
	.section	.note.GNU-stack,"",@progbits
