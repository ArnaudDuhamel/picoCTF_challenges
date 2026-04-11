#include "out.h"


undefined __libc_csu_fini;
undefined main;
undefined __libc_csu_init;
undefined1 completed.8061;
pointer __dso_handle;
undefined DAT_00102070;
undefined8 stdout;
pointer __frame_dummy_init_array_entry;

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

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
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

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
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

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
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
  if (completed_8061 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_8061 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 is_valid_hex(long param_1)

{
  ushort **ppuVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(char *)(param_1 + local_c) == '\0') {
      return 1;
    }
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_1 + local_c)] & 0x1000) == 0) break;
    local_c = local_c + 1;
  }
  return 0;
}



undefined8 is_valid_decimal(long param_1)

{
  ushort **ppuVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(char *)(param_1 + local_c) == '\0') {
      return 1;
    }
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_1 + local_c)] & 0x800) == 0) break;
    local_c = local_c + 1;
  }
  return 0;
}



void reveal_flag(void)

{
  FILE *__stream;
  size_t __n;
  void *__ptr;
  uint local_24;
  
  __stream = fopen("/flag.txt","r");
  if (__stream == (FILE *)0x0) {
    puts("Flag file not found.");
  }
  else {
    fseek(__stream,0,2);
    __n = ftell(__stream);
    rewind(__stream);
    __ptr = malloc(__n + 1);
    if (__ptr != (void *)0x0) {
      fread(__ptr,1,__n,__stream);
      *(undefined1 *)((long)__ptr + __n) = 0;
      fclose(__stream);
      printf("Access granted: ");
      local_24 = (uint)__n;
      while (local_24 = local_24 - 1, -1 < (int)local_24) {
        putchar((int)*(char *)((long)__ptr + (long)(int)local_24));
        if ((local_24 & 3) == 0) {
          printf("");
        }
      }
      putchar(10);
      free(__ptr);
    }
  }
  return;
}



undefined8 main(void)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_40;
  char local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter a numeric code (must be > 999 ): ");
  fflush(stdout);
  __isoc99_scanf(&DAT_00102070,local_38);
  sVar2 = strlen(local_38);
  iVar1 = is_valid_decimal(local_38);
  if (iVar1 == 0) {
    iVar1 = is_valid_hex(local_38);
    if (iVar1 == 0) {
      puts("Invalid input.");
      uVar4 = 1;
      goto LAB_00101698;
    }
    lVar3 = strtol(local_38,(char **)0x0,0x10);
    local_40 = (int)lVar3;
  }
  else {
    local_40 = atoi(local_38);
  }
  if (local_40 < 1000) {
    puts("Too small.");
  }
  else if (local_40 < 10000) {
    if ((int)sVar2 == 3) {
      reveal_flag();
    }
    else {
      puts("Access Denied.");
    }
  }
  else {
    puts("Too high.");
  }
  uVar4 = 0;
LAB_00101698:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}