#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char string[100];
    char sentence[100];
    
    scanf("%c",&ch);
    scanf("%s",string);
    scanf("\n");
    scanf("%[^\n]%*c",sentence);
    
    printf("%c",ch);
    printf("\n%s",string);
    printf("\n%s",sentence);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;

}
