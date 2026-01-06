/*
Input Format

There is one line of text, .

Sample Input 0

Welcome to C programming.
Sample Output 0

Hello, World!
Welcome to C programming.
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]", s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("Hello, World!\n");
    printf("%s",s);
      
    return 0;
}

