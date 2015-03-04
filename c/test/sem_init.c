#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>


union semun {
   int val;
   struct semid_ds * buf;
   unsigned short int * array;
   struct seminfo * __buf;
};

/* Initialize a binary semaphore with a value of 1. */

int binary_semaphore_initialize(int semid)
{
   union semun argument;
   unsigned short value[1];
   value[0] = 1;
   argument.array = value;
   return semctl (semid, 0, SETALL, argument);
}
