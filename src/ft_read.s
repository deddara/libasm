section .text
global _ft_read
extern ___error

_ft_read:
	xor rax, rax

.read:
	mov rax, 0x2000003
	syscall
	jc .err
	ret
.err:
	push rax
	call ___error
	pop rdx
	mov [rax], edx
	mov rax, -1
	ret