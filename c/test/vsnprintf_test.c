#include<stdio.h>
#include<stdarg.h>
char fmtl[] = "%s  %s  %s\n";
void vout(char *string, char * fmt,...)
{
   va_list arg_ptr;

   va_start(arg_ptr, fmt);
   printf("%s\n", *arg_ptr);
   vsnprintf(string,8, fmt, arg_ptr);
   printf("%s\n", string);
   va_end(arg_ptr);
}

int main(void)
{
   char string[100];
   
   vout(string, fmtl, "Sat", "Sun", "Mon");
   printf("The string is: %s\n", string);

   return 0;
}
