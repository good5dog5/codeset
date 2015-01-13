#include<stdio.h>
#include<tiffio.h>

int main(int argc, char ** argv)
{
   TIFF * tiff;
   tiff = TIFFOpen (argv[1], "r");
   printf("%s\n", argv[1]);

   TIFFClose(tiff);
   return 0;
}
