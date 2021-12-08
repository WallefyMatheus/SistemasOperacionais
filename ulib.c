#include "types.h"
#include "stat.h"
#include "fcntl.h"
#include "user.h"
#include "x86.h"
#include "time.h"

int user_time = 0;

char*
strcpy(char *s, const char *t)
{
  int time_i,time_f;
  time_i = uptime();

  char *os;

  os = s;
  while((*s++ = *t++) != 0)
    ;
  
  time_f = uptime();
  user_time += time_f - time_i;

  return os;
}

int
strcmp(const char *p, const char *q)
{
  int time_i,time_f;
  time_i = uptime();

  while(*p && *p == *q)
    p++, q++;
  
  time_f = uptime();
  user_time += time_f - time_i;
  
  return (uchar)*p - (uchar)*q;
}

uint
strlen(const char *s)
{
  int time_i,time_f;
  time_i = uptime();

  int n;

  for(n = 0; s[n]; n++)
    ;

  time_f = uptime();
  user_time += time_f - time_i;

  return n;
}

void*
memset(void *dst, int c, uint n)
{
  int time_i,time_f;
  time_i = uptime();

  stosb(dst, c, n);

  time_f = uptime();
  user_time += time_f - time_i;

  return dst;
}

char*
strchr(const char *s, char c)
{
  int time_i,time_f;
  time_i = uptime();

  for(; *s; s++)
    if(*s == c) {
      time_f = uptime();
      user_time += time_f - time_i;
      return (char*)s;
    }

  time_f = uptime();
  user_time += time_f - time_i;

  return 0;
}

char*
gets(char *buf, int max)
{
  int time_i,time_f;
  time_i = uptime();

  int i, cc;
  char c;

  for(i=0; i+1 < max; ){
    cc = read(0, &c, 1);
    if(cc < 1)
      break;
    buf[i++] = c;
    if(c == '\n' || c == '\r')
      break;
  }
  buf[i] = '\0';

  time_f = uptime();
  user_time += time_f - time_i;

  return buf;
}

int
stat(const char *n, struct stat *st)
{
  int time_i,time_f;
  time_i = uptime();

  int fd;
  int r;

  fd = open(n, O_RDONLY);
  if(fd < 0){
    time_f = uptime();
    user_time += time_f - time_i;
    
    return -1;
  }
  r = fstat(fd, st);
  close(fd);

  time_f = uptime();
  user_time += time_f - time_i;

  return r;
}

int
atoi(const char *s)
{
  int time_i,time_f;
  time_i = uptime();

  int n;

  n = 0;
  while('0' <= *s && *s <= '9')
    n = n*10 + *s++ - '0';

  time_f = uptime();
  user_time += time_f - time_i;

  return n;
}

void*
memmove(void *vdst, const void *vsrc, int n)
{
  int time_i,time_f;
  time_i = uptime();

  char *dst;
  const char *src;

  dst = vdst;
  src = vsrc;
  while(n-- > 0)
    *dst++ = *src++;

  time_f = uptime();
  user_time += time_f - time_i;  
  
  return vdst;
}
