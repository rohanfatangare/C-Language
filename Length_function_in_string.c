#include<stdio.h>
#include<string.h>
int main() 
{    
    char str[]="welcome";
    int s,l;
    s=sizeof(str);
    l=strlen(str);
    printf("\nsize: %d",s);
    printf("\nlength: %d",l);
    return 0; 
}