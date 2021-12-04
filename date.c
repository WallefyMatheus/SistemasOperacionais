#include "types.h"
#include "user.h"
#include "date.h"
 
int stdout = 1;
int stderr = 2;
 
int
main(int argc, char *argv[])
{
    int tempo = uptime();
    int segundos = tempo/100;
    int mili = tempo%100;

    printf(stderr, "[Segundos] -> %d [Mili] -> %d \n", segundos, mili*10);
 
  // Imprima a data aqui
 
  exit();
}
