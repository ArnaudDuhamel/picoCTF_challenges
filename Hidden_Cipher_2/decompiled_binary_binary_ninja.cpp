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

void srand(uint32_t x)
{
    /* tailcall */
    return srand(x);
}

int64_t __isoc23_scanf()
{
    /* tailcall */
    return __isoc23_scanf();
}

int64_t ftell(FILE* fp)
{
    /* tailcall */
    return ftell(fp);
}

time_t time(time_t* arg1)
{
    /* tailcall */
    return time(arg1);
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

void perror(char const* s)
{
    /* tailcall */
    return perror(s);
}

int32_t rand()
{
    /* tailcall */
    return rand();
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    void ubp_av;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg3, &stack_end);
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
    if (completed.0)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    completed.0 = 1;
}

int64_t (* const)() frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

uint64_t generate_math_question(char* arg1, int32_t* arg2, int32_t* arg3)
{
    *arg2 = rand() % 0xa + 1;
    *arg3 = rand() % 0xb;
    int32_t rdx_10 = rand() % 3;
    
    if (!rdx_10)
    {
        *arg1 = 0x2b;
        return *arg3 + *arg2;
    }
    
    if (rdx_10 != 1)
    {
        *arg1 = 0x2a;
        return *arg3 * *arg2;
    }
    
    *arg1 = 0x2d;
    
    if (*arg2 < *arg3)
    {
        int32_t rax_41 = *arg2;
        *arg2 = *arg3;
        *arg3 = rax_41;
    }
    
    return *arg2 - *arg3;
}

int64_t encode_flag(void* arg1, int32_t arg2)
{
    puts("Encoded flag values:");
    int32_t var_c = 0;
    
    while (*(arg1 + var_c))
    {
        printf("%d", *(arg1 + var_c) * arg2, &data_40201d);
        
        if (*(arg1 + var_c + 1))
            printf(", ");
        
        var_c += 1;
    }
    
    return putchar(0xa);
}

int64_t read_flag_file(char* arg1)
{
    FILE* fp = fopen(arg1, "r");
    
    if (!fp)
    {
        perror("Could not open flag file");
        return 0;
    }
    
    fseek(fp, 0, 2);
    uint64_t count = ftell(fp);
    rewind(fp);
    int64_t buf = malloc(count + 1);
    
    if (!buf)
    {
        perror("Memory error");
        fclose(fp);
        return 0;
    }
    
    fread(buf, 1, count, fp);
    *(buf + count) = 0;
    fclose(fp);
    return buf;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    srand(time(nullptr));
    char var_29;
    int32_t var_28;
    int32_t var_24;
    int32_t rax_3 = generate_math_question(&var_29, &var_28, &var_24);
    printf("What is %d %c %d? ", var_28, var_29, var_24);
    fflush(__TMC_END__);
    int32_t var_20;
    int32_t result;
    
    if (__isoc23_scanf(&data_40201d, &var_20, &data_40201d) != 1)
    {
        puts("Invalid input. Exiting.");
        result = 1;
    }
    else if (rax_3 == var_20)
    {
        void* rax_10 = read_flag_file("flag.txt");
        
        if (rax_10)
        {
            encode_flag(rax_10, rax_3);
            free(rax_10);
            result = 0;
        }
        else
            result = 1;
    }
    else
    {
        puts("Wrong answer! No flag for you.");
        result = 1;
    }
    
    *(fsbase + 0x28);
    
    if (rax == *(fsbase + 0x28))
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t _fini() __pure
{
    return;
}