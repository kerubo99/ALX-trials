#include <stdio.h>
#include <stdlib.h>


int main(void)
{
 int n;
 int s;
 char *ar;
 
 n = 30;
 s = 5;
 ar = malloc(s *sizeof(char));
 
 ar[0] = 'J';
 ar[1] = 'o';
 ar[2] = 'h';
 ar[3] = 'n';
 ar[4] = '\0';
 

 printf(" Name: %s, Age: %d ", ar , n );
 return(0);
}


