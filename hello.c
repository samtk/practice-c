#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

#define USERSIZE 10

void readCommand()
{
   static char str[100];
   printf("\nEnter a value: ");
   fgets(str,100,stdin);
   printf("\nYou entered: ");
   puts(str);
}

char *loadMap(char *map_file_name)
{
   size_t size = 0;
   char *map = NULL;
   FILE *fp;
   fp = fopen(map_file_name,"r");

   if(fp == NULL)
   {
      perror("Error opening file.\n");
      exit(EXIT_FAILURE);
   }
   
   char ch;
   int index = 0;
   while((ch = fgetc(fp)) != EOF)
   {
      size += sizeof(char);
      map = realloc(map,size); 
      map[index] = ch;
      index++;
   }

   
   fclose(fp);

   return map;
}

void drawMap()
{
   
}

int main()
{
   /*	
   char map_file_name[] = "maps/startArea";

   readCommand();
   char *map;
   map = loadMap(map_file_name);
  
   for(int i = 0; map[i] != '\0'; i++)
   {
       printf("%C",map[i]);
   }
   */

   initscr();
   printw("Hello world");
   printw("gosh");
   move(50,50);
   refresh();
   getch();
   endwin();
   return 0;
}


