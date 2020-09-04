section .text
global _ft_strcpy

_ft_strcpy:
	mov rax, rdi

.loop:
	mov dl, byte [rsi]
	mov byte [rdi], dl
	cmp dl, 0
	je .end
	inc rdi
	inc rsi
	jmp .loop

.end:
	ret