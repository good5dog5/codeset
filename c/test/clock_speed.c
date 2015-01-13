#include<stdio.h>
#include<string.h>

/*Returns the clock speed of the system's cpu in MHZ, as reported by /proc/cpuinfo. 
 * On a multiprocessor machine, return the first CPU. On error returns zero.*/

float get_cpu_clock_speed()
{
   FILE * fp;
   char buffer[5024];
   size_t bytes_read;
   char * match;
   float clock_speed;

   fp = fopen("/proc/cpuinfo", "r");
   bytes_read = fread(buffer, 1, sizeof(buffer), fp);
   fclose (fp);

   if (bytes_read == 0 || bytes_read == sizeof(buffer)) {
      printf("err1\n");
      return 0;
   }

   buffer[bytes_read] = '\0';

   match = strstr(buffer, "cpu MHz");
   
   if (match == NULL) {
      printf("err2\n");
      return 0;
   }

   sscanf (match, "cpu MHz : %f", &clock_speed);
   //printf("%s\n", buffer);
   return clock_speed;
}
int main(void)
{
   printf("CPU clock speed: %4.0f MHZ\n", get_cpu_clock_speed());
   return 0;
}
