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

int64_t sub_4010f0()
{
    int64_t var_8 = 0xc;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401100()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401110()
{
    int64_t var_8 = 0xe;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401120()
{
    int64_t var_8 = 0xf;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401130()
{
    int64_t var_8 = 0x10;
    /* tailcall */
    return sub_401020();
}

int64_t sub_401140()
{
    int64_t var_8 = 0x11;
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

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
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

int64_t strtol(char const* nptr, char** endptr, int32_t base)
{
    /* tailcall */
    return strtol(nptr, endptr, base);
}

int64_t malloc(uint64_t bytes)
{
    /* tailcall */
    return malloc(bytes);
}

int32_t fflush(FILE* fp)
{
    /* tailcall */
    return fflush(fp);
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

int32_t atoi(char const* nptr)
{
    /* tailcall */
    return atoi(nptr);
}

int32_t __isoc99_scanf(char const* format, ...)
{
    /* tailcall */
    return __isoc99_scanf(format);
}

uint16_t** __ctype_b_loc()
{
    /* tailcall */
    return __ctype_b_loc();
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    void ubp_av;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg3, 
        &stack_end);
    /* no return */
}

uint64_t* const* deregister_tm_clones()
{
    return &__TMC_END__;
}

int64_t (* const)() register_tm_clones()
{
    return nullptr;
}

void __do_global_dtors_aux()
{
    if (completed.8061)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    completed.8061 = 1;
}

int64_t (* const)() frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int64_t is_valid_hex(void* arg1)
{
    int32_t var_c = 0;
    
    while (true)
    {
        if (!*(arg1 + var_c))
            return 1;
        
        if (!((*__ctype_b_loc())[*(arg1 + var_c)] & 0x1000))
            break;
        
        var_c += 1;
    }
    
    return 0;
}

int64_t is_valid_decimal(void* arg1)
{
    int32_t var_c = 0;
    
    while (true)
    {
        if (!*(arg1 + var_c))
            return 1;
        
        if (!((*__ctype_b_loc())[*(arg1 + var_c)] & 0x800))
            break;
        
        var_c += 1;
    }
    
    return 0;
}

void* reveal_flag()
{
    FILE* fp = fopen("/flag.txt", "r");
    
    if (!fp)
        return puts("Flag file not found.");
    
    fseek(fp, 0, 2);
    uint64_t count = ftell(fp);
    rewind(fp);
    void* buf = malloc(count + 1);
    
    if (!buf)
        return buf;
    
    fread(buf, 1, count, fp);
    *(buf + count) = 0;
    fclose(fp);
    printf("Access granted: ");
    
    for (int32_t i = count - 1; i >= 0; i -= 1)
    {
        putchar(*(buf + i));
        
        if (!(i & 3))
            printf("ftc_oc_ip");
    }
    
    putchar(0xa);
    return free(buf);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    printf("Enter a numeric code (must be > 999 ): ");
    fflush(__TMC_END__);
    char nptr[0x28];
    __isoc99_scanf("%31s", &nptr);
    int32_t var_40 = 0xffffffff;
    int32_t rax_3 = strlen(&nptr);
    int32_t result;
    int32_t var_40_1;
    
    if (!is_valid_decimal(&nptr))
    {
        if (is_valid_hex(&nptr))
        {
            var_40_1 = strtol(&nptr, nullptr, 0x10);
            goto label_40164e;
        }
        
        puts("Invalid input.");
        result = 1;
    }
    else
    {
        var_40_1 = atoi(&nptr);
    label_40164e:
        
        if (var_40_1 <= 0x3e7)
            puts("Too small.");
        else if (var_40_1 > 0x270f)
            puts("Too high.");
        else if (rax_3 != 3)
            puts("Access Denied.");
        else
            reveal_flag();
        
        result = 0;
    }
    
    if (rax == *(fsbase + 0x28))
        return result;
    
    __stack_chk_fail();
    /* no return */
}

void __libc_csu_init()
{
    _init();
    int64_t i = 0;
    
    do
    {
        int64_t entry_rdx;
        int64_t entry_rsi;
        int32_t entry_rdi;
        (&__frame_dummy_init_array_entry)[i](entry_rdi, entry_rsi, entry_rdx);
        i += 1;
    } while (1 != i);
}

void __libc_csu_fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}

