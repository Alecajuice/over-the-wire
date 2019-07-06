char shellcode[] = "\xEB\x15\x31\xC0\x31\xDB\x31\xC9\x31\xD2\xB0\x04\xB3\x01\x59\xB2\x0A\xCD\x80\xB0\x01\xCD\x80\xE8\xE6\xFF\xFF\xFF\x48\x65\x6C\x6C\x6F\x4B\x69\x74\x74\x79";
int main (int argc, char **argv) {
        int (*ret)();              /* ret is a function pointer */
        ret = (int(*)())shellcode; /* ret points to our shellcode */
                                   /* shellcode is type casted as a function */
        (int)(*ret)();             /* execute as function shellcode[] */
        /*exit(0);*/                   /* exit() */
}
