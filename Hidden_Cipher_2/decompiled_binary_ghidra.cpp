#include "out.h"


undefined main;
pointer __dso_handle;
undefined1 completed.0;
undefined DAT_0010201d;
undefined8 stdout;

int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)
{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int putchar(int __c)
{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)
{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)
{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



void __stack_chk_fail(void)
{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)
{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void rewind(FILE *__stream)
{
  rewind(__stream);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void srand(uint __seed)
{
  srand(__seed);
  return;
}



void __isoc23_scanf(void)
{
  __isoc23_scanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long ftell(FILE *__stream)
{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)
{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)
{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)
{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)
{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)
{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)
{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rand(void)
{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x001012c3)
// WARNING: Removing unreachable block (ram,0x001012cf)

void deregister_tm_clones(void)
{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101304)
// WARNING: Removing unreachable block (ram,0x00101310)

void register_tm_clones(void)
{
  return;
}



void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)
{
  register_tm_clones();
  return;
}



int generate_math_question(undefined1 *param_1,int *param_2,int *param_3)
{
  int iVar1;
  
  iVar1 = rand();
  *param_2 = iVar1 % 10 + 1;
  iVar1 = rand();
  *param_3 = iVar1 % 0xb;
  iVar1 = rand();
  if (iVar1 % 3 == 0) {
    *param_1 = 0x2b;
    iVar1 = *param_3 + *param_2;
  }
  else if (iVar1 % 3 == 1) {
    *param_1 = 0x2d;
    if (*param_2 < *param_3) {
      iVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar1;
    }
    iVar1 = *param_2 - *param_3;
  }
  else {
    *param_1 = 0x2a;
    iVar1 = *param_3 * *param_2;
  }
  return iVar1;
}



void encode_flag(long param_1,int param_2)
{
  int local_c;
  
  puts("Encoded flag values:");
  for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
    printf("%d",(ulong)(uint)(*(char *)(param_1 + local_c) * param_2));
    if (*(char *)(param_1 + (long)local_c + 1) != '\0') {
      printf(", ");
    }
  }
  putchar(10);
  return;
}



void * read_flag_file(char *param_1)
{
  FILE *__stream;
  void *__ptr;
  size_t __n;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    perror("Could not open flag file");
    __ptr = (void *)0x0;
  }
  else {
    fseek(__stream,0,2);
    __n = ftell(__stream);
    rewind(__stream);
    __ptr = malloc(__n + 1);
    if (__ptr == (void *)0x0) {
      perror("Memory error");
      fclose(__stream);
      __ptr = (void *)0x0;
    }
    else {
      fread(__ptr,1,__n,__stream);
      *(undefined1 *)((long)__ptr + __n) = 0;
      fclose(__stream);
    }
  }
  return __ptr;
}



undefined8 main(void)
{
  int iVar1;
  time_t tVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_29;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  tVar2 = time((time_t *)0x0);
  srand((uint)tVar2);
  local_1c = generate_math_question(&local_29,&local_28,&local_24);
  printf("What is %d %c %d? ",(ulong)local_28,(ulong)(uint)(int)local_29,(ulong)local_24);
  fflush(stdout);
  iVar1 = __isoc23_scanf(&DAT_0010201d,&local_20);
  if (iVar1 == 1) {
    if (local_1c == local_20) {
      local_18 = (void *)read_flag_file("flag.txt");
      if (local_18 == (void *)0x0) {
        uVar3 = 1;
      }
      else {
        encode_flag(local_18,local_1c);
        free(local_18);
        uVar3 = 0;
      }
    }
    else {
      puts("Wrong answer! No flag for you.");
      uVar3 = 1;
    }
  }
  else {
    puts("Invalid input. Exiting.");
    uVar3 = 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



void _fini(void)
{
  return;
}