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
	;push rdx
	mov rax,0x2000004
	syscall
	;cmp rax,0x9
	;je bad_fd
	ret

;bad_fd:
	;pop rdx
	;cmp rax,rdx
	;je end
	;xor rax,rax
	;mov rax,0x1
	;neg rax
	ret

;end:
;	ret
