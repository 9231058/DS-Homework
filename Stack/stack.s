	.file	"stack.c"
	.local	S
	.comm	S,4096,32
	.local	head
	.comm	head,4,4
	.text
	.globl	push
	.type	push, @function
push:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	head(%rip), %eax
	cmpl	$1023, %eax
	jg	.L1
	movl	head(%rip), %eax
	cltq
	movl	-4(%rbp), %edx
	movl	%edx, S(,%rax,4)
	movl	head(%rip), %eax
	addl	$1, %eax
	movl	%eax, head(%rip)
.L1:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	push, .-push
	.globl	pop
	.type	pop, @function
pop:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	head(%rip), %eax
	testl	%eax, %eax
	jle	.L4
	movl	head(%rip), %eax
	subl	$1, %eax
	movl	%eax, head(%rip)
	movl	head(%rip), %eax
	cltq
	movl	S(,%rax,4), %eax
	jmp	.L3
.L4:
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	pop, .-pop
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
