section .text
global _ft_strcmp

_ft_strcmp:
	xor rax, rax

.loop:
	mov al, byte [rdi]
	mov dl, byte [rsi]
	sub rax, rdx
	jnz .end
	cmp dl, 0
	je	.end
	inc rdi
	inc rsi
	jmp .loop

.end:
	ret
