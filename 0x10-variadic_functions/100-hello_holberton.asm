section .data
	msg db 10d,13d,"Hello World "
	l equ $-msg
section .text
	global _start
_start:
	mov rax,1
	mov rdi,1
	mov rsi,msg
	mov rdx,l
	syscall

	mov rax,60
	mov rdi,0
	syscall	
end:
