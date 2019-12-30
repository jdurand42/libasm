; rdi
; rsi
; rdx
; rcx
; r8
; r9
; rax -> ret

section .text
	global _ft_write

_ft_write:
	mov rax,0x2000004
	syscall
	ret
	
