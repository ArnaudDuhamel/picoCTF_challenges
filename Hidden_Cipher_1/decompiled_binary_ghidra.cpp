#include "out.h"


undefined main;
pointer __dso_handle;
undefined1 completed.0;
undefined7 s.0;

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

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
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



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101203)
// WARNING: Removing unreachable block (ram,0x0010120f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101244)
// WARNING: Removing unreachable block (ram,0x00101250)

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



undefined7 * get_secret(void)

{
  s_0._0_1_ = 0x53;
  s_0._1_1_ = 0x33;
  s_0._2_1_ = 0x43;
  s_0._3_1_ = 0x72;
  s_0._4_1_ = 0x33;
  s_0._5_1_ = 0x74;
  s_0._6_1_ = 0;
  return &s_0;
}



undefined8 main(void)

{
  FILE *__stream;
  undefined8 uVar1;
  size_t __n;
  void *__ptr;
  long lVar2;
  int local_2c;
  
  __stream = fopen("flag.txt","rb");
  if (__stream == (FILE *)0x0) {
    perror("[!] Failed to open flag.txt");
    uVar1 = 1;
  }
  else {
    fseek(__stream,0,2);
    __n = ftell(__stream);
    rewind(__stream);
    __ptr = malloc(__n + 1);
    if (__ptr == (void *)0x0) {
      puts("[!] Memory allocation error.");
      fclose(__stream);
      uVar1 = 1;
    }
    else {
      fread(__ptr,1,__n,__stream);
      fclose(__stream);
      *(undefined1 *)((long)__ptr + __n) = 0;
      lVar2 = get_secret();
      puts("Here your encrypted flag:");
      for (local_2c = 0; (long)local_2c < (long)__n; local_2c = local_2c + 1) {
        printf("%02x",(ulong)(*(byte *)(lVar2 + local_2c % 6) ^
                             *(byte *)((long)__ptr + (long)local_2c)));
      }
      putchar(10);
      free(__ptr);
      uVar1 = 0;
    }
  }
  return uVar1;
}



void _fini(void)

{
  return;
}