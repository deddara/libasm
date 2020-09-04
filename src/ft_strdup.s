section .text
global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

_ft_strdup:
	xor rax, rax
.count:
	push rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi
	call _malloc
	cmp rax, 0
	je .end
	pop rsi
	mov rdi, rax
	call _ft_strcpy
	ret
.end:
	ret
