#include <stdio.h>
#include <stdlib.h>


void readCommand()
{
   static char str[100];
   printf("\nEnter a value: ");
   fgets(str,100,stdin);
   printf("\nYou entered: ");
   puts(str);
}

void loadMap(char *map_file_name)
{
   FILE *fp;
   fp = fopen(map_file_name,"r");

   if(fp == NULL)
   {
      perror("Error opening file.\n");
      exit(EXIT_FAILURE);
   }
   
   char ch;
   while((ch = fgetc(fp)) != EOF)
   {
      printf("%c",ch);
   }

   fclose(fp);
}

void drawMap()
{
   
}

int main()
{
   char map_file_name[] = "maps/startArea";

   readCommand();
   loadMap(map_file_name);
   return 0;
}


