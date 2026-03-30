int64_t (* const)() _init()
{
    if (!__gmon_start__)
        return __gmon_start__;
    
    return __gmon_start__();
}

int64_t sub_401020()
{
    int64_t var_8 = data_403ff0;
    /* jump -> data_403ff8 */
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_401036()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_401020();
}

int32_t __isoc99_scanf(char const* format, ...)
{
    /* tailcall */
    return __isoc99_scanf(format);
}

int64_t sub_401046()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_401020();
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    void ubp_av;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg3, &stack_end);
    /* no return */
}

int64_t _dl_relocate_static_pie() __pure
{
    return;
}

int64_t deregister_tm_clones()
{
    return 0x404018;
}

int64_t register_tm_clones()
{
    return 0;
}

void __do_global_dtors_aux()
{
    if (__bss_start)
        return;
    
    deregister_tm_clones();
    __bss_start = 1;
}

int64_t frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t var_c = 0xbef343c9;
    int32_t var_10 = 0;
    puts("What's the secret?");
    __isoc99_scanf("%u", &var_10);
    
    if (var_c != var_10)
        puts("Nice try :(");
    else
        puts("Correct!");
    
    return 0;
}

int64_t _fini() __pure
{
    return;
}