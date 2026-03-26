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

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
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

void __assert_fail(char const* assertion, char const* file, uint32_t line, char const* function) __noreturn
{
    /* tailcall */
    return __assert_fail(assertion, file, line, function);
}

char* fgets(char* buf, int32_t n, FILE* fp)
{
    /* tailcall */
    return fgets(buf, n, fp);
}

int64_t calloc(uint64_t n, uint64_t elem_size)
{
    /* tailcall */
    return calloc(n, elem_size);
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

uint64_t strtoul(char const* nptr, char** endptr, int32_t base)
{
    /* tailcall */
    return strtoul(nptr, endptr, base);
}

int32_t atoi(char const* nptr)
{
    /* tailcall */
    return atoi(nptr);
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

int64_t hash(char* arg1)
{
    char* var_20 = arg1;
    int64_t result = 0x1505;
    
    while (true)
    {
        char* rax_7 = var_20;
        var_20 = &rax_7[1];
        uint32_t rax_9 = *rax_7;
        
        if (!rax_9)
            break;
        
        result = rax_9 + result * 0x21;
    }
    
    return result;
}

int64_t make_secret(char* arg1)
{
    void* var_10 = nullptr;
    
    while (*(var_10 + &obf_bytes))
    {
        *(var_10 + arg1) = *(var_10 + &obf_bytes) ^ 0xaa;
        var_10 += 1;
    }
    
    arg1[0xc] = 0;
    return hash(arg1);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    char* rax_2 = calloc(0x5a, 1);
    
    for (int64_t i = 0; i <= 0xc; i += 1)
        rax_2[i + 0x3c] = *(i + &obf_bytes) ^ 0xaa;
    
    puts("Please set a password for your account:");
    char var_b8[0x40];
    
    if (fgets(&var_b8, 0x32, __TMC_END__))
    {
        strcpy(rax_2, &var_b8);
        puts("How many bytes in length is your password?");
        char var_d8[0x20];
        
        if (fgets(&var_d8, 0x14, __TMC_END__))
        {
            int32_t rax_13 = atoi(&var_d8);
            printf("You entered: %d\n", rax_13);
            puts("Your successfully stored password:");
            
            for (int32_t i_1 = 0; rax_13 >= i_1; i_1 += 1)
            {
                if (i_1 > 0x59)
                    break;
                
                printf("%d ", rax_2[i_1]);
            }
            
            putchar(0xa);
        }
    }
    
    puts("Enter your hash to access your account!");
    int32_t result;
    
    if (!fgets(&var_b8, 0x32, __TMC_END__))
    {
        free(rax_2);
        result = 0;
    }
    else
    {
        uint64_t rax_24 = strlen(&var_b8);
        
        if (rax_24 && var_b8[rax_24 - 1] == 0xa)
            var_b8[rax_24 - 1] = 0;
        
        char* endptr;
        uint64_t rax_30 = strtoul(&var_b8, &endptr, 0xa);
        
        if (endptr == &var_b8)
        {
            printf("No digits were found");
            __assert_fail("1 == 0", "heartbleed.c", 0x45, "main");
            /* no return */
        }
        
        void var_e5;
        
        if (make_secret(&var_e5) != rax_30)
        {
            free(rax_2);
            result = 0;
        }
        else
        {
            FILE* fp = fopen("flag.txt", "r");
            
            if (fp)
            {
                char buf[0x68];
                
                if (!fgets(&buf, 0x64, fp))
                    puts("Failed to read the flag");
                else
                    printf("%s", &buf);
                
                fclose(fp);
                free(rax_2);
                result = 0;
            }
            else
            {
                perror("Could not open flag.txt");
                result = 1;
            }
        }
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