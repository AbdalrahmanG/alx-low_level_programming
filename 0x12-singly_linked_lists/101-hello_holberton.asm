section		.text
	extern 	printf
	global	main

main:
	mov	edi, amg
	mov	eax, 0
	call	printf

section		.data
	amg db 'Hello, Holberton', 0xa, 0
