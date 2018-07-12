#include <stdio.h>

void readCommand()
{
   static char str[100];
   printf("\nEnter a value: ");
   fgets(str,100,stdin);
   printf("\nYou entered: ");
   puts(str);

	  
}

int main()
{
   printf("\nhello world");
   readCommand();
   return 0;
}


