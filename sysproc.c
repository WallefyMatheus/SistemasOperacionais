#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include "time.h"

int
sys_fork(void)
{
  return fork();
}

int
sys_exit(void)
{
  exit();
  return 0;  // not reached
}

int
sys_wait(void)
{
  return wait();
}

int
sys_kill(void)
{
  int pid;

  if(argint(0, &pid) < 0)
    return -1;
  return kill(pid);
}

int
sys_getpid(void)
{
  return myproc()->pid;
}

int
sys_sbrk(void)
{
  int addr;
  int n;

  if(argint(0, &n) < 0)
    return -1;
  addr = myproc()->sz;
  if(growproc(n) < 0)
    return -1;
  return addr;
}

int
sys_sleep(void)
{
  int n;
  uint ticks0;

  if(argint(0, &n) < 0)
    return -1;
  acquire(&tickslock);
  ticks0 = ticks;
  while(ticks - ticks0 < n){
    if(myproc()->killed){
      release(&tickslock);
      return -1;
    }
    sleep(&ticks, &tickslock);
  }
  release(&tickslock);
  return 0;
}

// return how many clock tick interrupts have occurred
// since start.
int
sys_uptime(void)
{
  uint xticks;

  acquire(&tickslock);
  xticks = ticks;
  release(&tickslock);
  return xticks;
}

/*
*  Código do Passo 1 - função de data
*/
int
sys_date(void)
{
  char *ptr;
  argptr(0, &ptr, sizeof(struct rtcdate*));

  return 0;
}

/*
*  Código de time
*/
int time_system;
int
sys_time(void)
{ 
  return time_system;
}

// // Fetch the nth 32-bit system call argument.
// int argint(int n, int *ip);
 
// // Fetch the nth word-sized system call argument as a pointer
// // to a block of memory of size bytes.  Check that the pointer
// // lies within the process address space.
// int argptr(int n, char **pp, int size);
 
// // Fetch the nth word-sized system call argument as a string pointer.
// // Check that the pointer is valid and the string is nul-terminated.
// // (There is no shared writable memory, so the string can't change
// // between this check and being used by the kernel.)
// int argstr(int n, char **pp);

