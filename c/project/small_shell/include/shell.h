#include<unistd.h>
#include<sys/types.h>
#include<termios.h>
typedef struct process
{
   struct process * next;     /*Next process in pipeline*/
   char ** argv;              /*For exec*/
   pid_t pid;                 /*Process ID*/
   char completed;            /*True if process completed*/
   char stopped;              /*True if porcess stopped*/
   int status;                /*Reported status value*/
} process;

/*A job is a pipeline of process. */
typedef struct job
{
   struct job * next;         /*Next active job*/
   char * command;            /*command line, used for message*/
   process * first_process;   /*List of processes in this job*/
   pid_t pgid;                /*process group ID*/
   char notified;             /*True if user told about stopped job*/
   struct termios tmodes;     /*Saved terminal mode*/
   int stdin, stdout, stderr; /*Standard i/o channels*/
} job;

job * find_job(pid_t pgid, job * first_job);
int   job_is_stopped(job * j);
int   job_is_completed(job * j);

