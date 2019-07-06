_start:
	jmp ender

starter:
	xor %eax, %eax
	xor %ebx, %ebx
	xor %ecx, %ecx
	xor %edx, %edx

	mov $0x4, %al
	mov $0x1, %bl
	popl %ecx
	mov $10, %dl
	int $0x80

	mov $0x1, %al
	int $0x80

ender:
	call starter
	.ascii "HelloKitty"
