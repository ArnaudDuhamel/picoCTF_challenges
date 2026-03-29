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

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
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

uint64_t strcspn(char const* arg1, char const* arg2)
{
    /* tailcall */
    return strcspn(arg1, arg2);
}

char* fgets(char* buf, int32_t n, FILE* fp)
{
    /* tailcall */
    return fgets(buf, n, fp);
}

int32_t strcmp(char const* arg1, char const* arg2)
{
    /* tailcall */
    return strcmp(arg1, arg2);
}

int32_t fflush(FILE* fp)
{
    /* tailcall */
    return fflush(fp);
}

int32_t isalpha(int32_t c)
{
    /* tailcall */
    return isalpha(c);
}

FILE* fopen(char const* filename, char const* mode)
{
    /* tailcall */
    return fopen(filename, mode);
}

uint32_t sleep(uint32_t seconds)
{
    /* tailcall */
    return sleep(seconds);
}

int32_t usleep(useconds_t useconds)
{
    /* tailcall */
    return usleep(useconds);
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

uint64_t type_out(char const* msg, useconds_t delay)
{
    int i = 0;
    uint64_t result;
    
    while (true)
    {
        result = msg[i];
        
        if (!result)
            break;
        
        putchar(msg[i]);
        fflush(__TMC_END__);
        usleep(delay);
        i += 1;
    }
    
    return result;
}

int64_t decode_password(char* out)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    unsigned char enc[0xb];
    __builtin_memcpy(&enc, "\xf9\xdf\xda\xcf\xd8\xf9\xcf\xc9\xdf\xd8\xcf", 0xb);
    int i = 0;
    
    while (i <= 0xa)
    {
        out[i] = enc[i] ^ 0xaa;
        i += 1;
    }
    
    out[0xb] = 0;
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

char* sanitize(char const* input, char* output)
{
    int j = 0;
    int i = 0;
    
    while (input[i])
    {
        if (isalpha(input[i]))
        {
            int j_1 = j;
            j = j_1 + 1;
            output[j_1] = input[i];
        }
        
        i += 1;
    }
    
    char* result = &output[j];
    *result = 0;
    return result;
}

int64_t auth_sequence()
{
    printf("\n\x1b[0;36mAuthenticating\x1b[0m");
    fflush(__TMC_END__);
    
    for (int i = 0; i <= 2; i += 1)
    {
        sleep(1);
        putchar(0x2e);
        fflush(__TMC_END__);
    }
    
    return putchar(0xa);
}

int64_t intro_sequence()
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    puts("\n\n");
    char const* ascii_title[0x6];
    ascii_title[0] = &data_402028;
    ascii_title[1] = &data_402138;
    ascii_title[2] = &data_402258;
    ascii_title[3] = &data_402358;
    ascii_title[4] = &data_402450;
    ascii_title[5] = &data_402560;
    printf("\x1b[1;35m");
    
    for (int i = 0; i <= 5; i += 1)
        printf("%*s%s\n", 0xa, &data_40266a, ascii_title[i]);
    
    puts("\x1b[0m");
    sleep(1);
    type_out("\x1b[1;34m Initializing secure modules...\n\x1b[0m", 0x7530);
    sleep(1);
    type_out("\x1b[1;34m Running memory diagnostics...\n\x1b[0m", 0x7530);
    sleep(1);
    type_out("\x1b[1;34m All systems online...\n\x1b[0m", 0x7530);
    sleep(1);
    printf("\n\x1b[1;31m Access to this terminal is restricted.\n\x1b[0m");
    printf("\x1b[1;33m Please authenticate below.\n\x1b[0m");
    printf("\x1b[1;32m----------------------------------------\n\n\x1b[0m");
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int32_t main()
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    int attempts = 3;
    char password[0x80];
    decode_password(&password);
    intro_sequence();
    int32_t result;
    
    while (true)
    {
        int attempts_1 = attempts;
        attempts = attempts_1 - 1;
        attempts_1 = attempts_1;
        
        if (!attempts_1)
        {
            puts("\nAll attempts used. Try harder!");
            result = 1;
            break;
        }
        
        printf("\n[%d tries left] Enter password: ", attempts + 1);
        fflush(__TMC_END__);
        char buf[0x80];
        fgets(&buf, 0x80, stdin);
        buf[strcspn(&buf, "\n")] = 0;
        char sanitized[0x80];
        sanitize(&buf, &sanitized);
        printf("\nRaw Input:      [%s]\n", &buf);
        printf("Sanitized Input:[%s]\n", &sanitized);
        puts("Hint: Input must match something special...");
        
        if (!strcmp(&buf, &password))
        {
            auth_sequence();
            FILE* fp = fopen("../../root/flag.txt", "r");
            
            if (!fp)
                puts("Flag file not found.");
            else
            {
                char flag[0x80];
                char* rax_8;
                rax_8 = fgets(&flag, 0x80, fp);
                
                if (!rax_8)
                    puts("Error reading flag.");
                else
                    printf(&data_402832, &flag);
                
                fclose(fp);
            }
            
            result = 0;
            break;
        }
        
        puts("Access Denied ");
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