section .text
global _ft_list_size

_ft_list_size:
	xor rax, rax

.loop:
	cmp rdi, 0
	je .end
	inc rax
	mov rdi, qword[rdi + 8]
	jmp .loop

.end:
	ret