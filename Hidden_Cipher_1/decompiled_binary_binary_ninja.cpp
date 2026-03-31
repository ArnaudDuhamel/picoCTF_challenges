int64_t (* const)() _init()
{
    if (!__gmon_start__)
        return __gmon_start__;
    
    return __gmon_start__();
}

int64_t sub_401020()
{
    int64_t var_8 = 0;
    /* jump -> nullptr */
}

int64_t sub_401030()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401040()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401050()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401060()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401070()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401080()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401090()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_401020();
}

int64_t sub_4010a0()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_401020();
}

int64_t sub_4010b0()
{
    int64_t var_8 = 8;
    /* tailcall */
    return sub_401020();
}

int64_t sub_4010c0()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_401020();
}

int64_t sub_4010d0()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_401020();
}

int64_t sub_4010e0()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_401020();
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

void free(void* mem)
{
    /* tailcall */
    return free(mem);
}

int32_t putchar(int32_t c)
{
    /* tailcall */
    return putchar(c);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

uint64_t fread(void* buf, uint64_t size, uint64_t count, FILE* fp)
{
    /* tailcall */
    return fread(buf, size, count, fp);
}

int32_t fclose(FILE* fp)
{
    /* tailcall */
    return fclose(fp);
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf(format);
}

void rewind(FILE* fp)
{
    /* tailcall */
    return rewind(fp);
}

int64_t ftell(FILE* fp)
{
    /* tailcall */
    return ftell(fp);
}

int64_t malloc(uint64_t bytes)
{
    /* tailcall */
    return malloc(bytes);
}

int32_t fseek(FILE* fp, int64_t offset, int32_t whence)
{
    /* tailcall */
    return fseek(fp, offset, whence);
}

FILE* fopen(char const* filename, char const* mode)
{
    /* tailcall */
    return fopen(filename, mode);
}

void perror(char const* s)
{
    /* tailcall */
    return perror(s);
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    void ubp_av;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg3, &stack_end);
    /* no return */
}

char* deregister_tm_clones()
{
    return &__TMC_END__;
}

int64_t (* const)() register_tm_clones()
{
    return nullptr;
}

void __do_global_dtors_aux()
{
    if (__TMC_END__)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    __TMC_END__ = 1;
}

int64_t (* const)() frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int64_t get_secret()
{
    *s.0 = 0x53;
    *(s.0 + 1) = 0x33;
    *(s.0 + 2) = 0x43;
    *(s.0 + 3) = 0x72;
    *(s.0 + 4) = 0x33;
    *(s.0 + 5) = 0x74;
    *(s.0 + 6) = 0;
    return &s.0;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    FILE* fp = fopen("flag.txt", "rb");
    
    if (!fp)
    {
        perror("[!] Failed to open flag.txt");
        return 1;
    }
    
    fseek(fp, 0, 2);
    uint64_t count = ftell(fp);
    rewind(fp);
    void* buf = malloc(count + 1);
    
    if (!buf)
    {
        puts("[!] Memory allocation error.");
        fclose(fp);
        return 1;
    }
    
    fread(buf, 1, count, fp);
    fclose(fp);
    *(buf + count) = 0;
    get_secret();
    puts("Here your encrypted flag:");
    int32_t var_2c_1 = 0;
    
    while (count > var_2c_1)
    {
        printf("%02x", *(&s.0 + var_2c_1 % 6) ^ *(buf + var_2c_1), "%02x");
        var_2c_1 += 1;
    }
    
    putchar(0xa);
    free(buf);
    return 0;
}

int64_t _fini() __pure
{
    return;
}