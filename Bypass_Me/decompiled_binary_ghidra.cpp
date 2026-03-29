#include "out.h"

undefined __libc_csu_init;
undefined __libc_csu_fini;
undefined main;
undefined1 completed.8061;
pointer __dso_handle;
undefined8 stdout;
undefined DAT_00102028;
undefined DAT_00102138;
undefined DAT_00102258;
undefined DAT_00102358;
undefined DAT_00102450;
undefined DAT_00102560;
undefined DAT_0010266a;
undefined8 stdin;
undefined DAT_00102832;
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

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = strcspn(__s,__reject);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int isalpha(int param_1)

{
  int iVar1;
  
  iVar1 = isalpha(param_1);
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

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
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



// WARNING: Removing unreachable block (ram,0x00101223)
// WARNING: Removing unreachable block (ram,0x0010122f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101264)
// WARNING: Removing unreachable block (ram,0x00101270)

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



void type_out(char *msg,useconds_t delay)

{
  useconds_t delay_local;
  char *msg_local;
  int i;
  
  for (i = 0; msg[i] != '\0'; i = i + 1) {
    putchar((int)msg[i]);
    fflush(stdout);
    usleep(delay);
  }
  return;
}



void decode_password(char *out)

{
  long lVar1;
  long in_FS_OFFSET;
  char *out_local;
  int i;
  uchar enc [11];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  enc[0] = 0xf9;
  enc[1] = 0xdf;
  enc[2] = 0xda;
  enc[3] = 0xcf;
  enc[4] = 0xd8;
  enc[5] = 0xf9;
  enc[6] = 0xcf;
  enc[7] = 0xc9;
  enc[8] = 0xdf;
  enc[9] = 0xd8;
  enc[10] = 0xcf;
  for (i = 0; (uint)i < 0xb; i = i + 1) {
    out[i] = enc[i] ^ 0xaa;
  }
  out[0xb] = '\0';
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void sanitize(char *input,char *output)

{
  int iVar1;
  char *output_local;
  char *input_local;
  int j;
  int i;
  
  j = 0;
  for (i = 0; input[i] != '\0'; i = i + 1) {
    iVar1 = isalpha((int)input[i]);
    if (iVar1 != 0) {
      output[j] = input[i];
      j = j + 1;
    }
  }
  output[j] = '\0';
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void auth_sequence(void)

{
  int i;
  
  printf("\n\x1b[0;36mAuthenticating\x1b[0m");
  fflush(stdout);
  for (i = 0; i < 3; i = i + 1) {
    sleep(1);
    putchar(0x2e);
    fflush(stdout);
  }
  putchar(10);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void intro_sequence(void)

{
  long lVar1;
  long in_FS_OFFSET;
  int i;
  char *ascii_title [6];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts("\n\n");
  ascii_title[0] = &DAT_00102028;
  ascii_title[1] = &DAT_00102138;
  ascii_title[2] = &DAT_00102258;
  ascii_title[3] = &DAT_00102358;
  ascii_title[4] = &DAT_00102450;
  ascii_title[5] = &DAT_00102560;
  printf("\x1b[1;35m");
  for (i = 0; i < 6; i = i + 1) {
    printf("%*s%s\n",10,&DAT_0010266a,ascii_title[i]);
  }
  puts("\x1b[0m");
  sleep(1);
  type_out("\x1b[1;34m Initializing secure modules...\n\x1b[0m",30000);
  sleep(1);
  type_out("\x1b[1;34m Running memory diagnostics...\n\x1b[0m",30000);
  sleep(1);
  type_out("\x1b[1;34m All systems online...\n\x1b[0m",30000);
  sleep(1);
  printf("\n\x1b[1;31m Access to this terminal is restricted.\n\x1b[0m");
  printf("\x1b[1;33m Please authenticate below.\n\x1b[0m");
  printf("\x1b[1;32m----------------------------------------\n\n\x1b[0m");
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int main(void)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  FILE *__stream;
  char *pcVar4;
  long in_FS_OFFSET;
  int attempts;
  FILE *flag_file;
  char buf [128];
  char sanitized [128];
  char password [128];
  char flag [128];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  attempts = 3;
  decode_password(password);
  intro_sequence();
  do {
    if (attempts == 0) {
      puts("\nAll attempts used. Try harder!");
      iVar2 = 1;
LAB_00101823:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return iVar2;
    }
    printf("\n[%d tries left] Enter password: ",(ulong)(uint)attempts);
    fflush(stdout);
    fgets(buf,0x80,stdin);
    sVar3 = strcspn(buf,"\n");
    buf[sVar3] = '\0';
    sanitize(buf,sanitized);
    printf("\nRaw Input:      [%s]\n",buf);
    printf("Sanitized Input:[%s]\n",sanitized);
    puts("Hint: Input must match something special...");
    iVar2 = strcmp(buf,password);
    if (iVar2 == 0) {
      auth_sequence();
      __stream = fopen("../../root/flag.txt","r");
      if (__stream == (FILE *)0x0) {
        puts("Flag file not found.");
      }
      else {
        pcVar4 = fgets(flag,0x80,__stream);
        if (pcVar4 == (char *)0x0) {
          puts("Error reading flag.");
        }
        else {
          printf(&DAT_00102832,flag);
        }
        fclose(__stream);
      }
      iVar2 = 0;
      goto LAB_00101823;
    }
    puts("Access Denied ");
    attempts = attempts + -1;
  } while( true );
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