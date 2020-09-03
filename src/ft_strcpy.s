section .text
global _ft_strcpy

_ft_strcpy:
	mov rax, rdi

.loop:
	mov dl, byte [rsi]
	mov byte [rax], dl
	test rax, rax
	je .end
	inc rax
	inc rsi
	jmp .loop

.end:
	ret