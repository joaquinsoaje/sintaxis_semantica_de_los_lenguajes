#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE* fichero;
   fichero = fopen("outputC.txt", "wt");
   fputs("Hello World =) ", fichero);
   fclose(fichero);
   printf("Archivo escrito");

   return EXIT_SUCCESS;
}