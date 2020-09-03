section .text
global _ft_strlen

_ft_strlen:
	mov rax, rdi

.loop:
	cmp byte [rax], 0
	je .ret
	inc rax
	jmp .loop

.ret:
	sub rax, rdi
	ret