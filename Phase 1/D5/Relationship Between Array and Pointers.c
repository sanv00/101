#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strrev(char* str)
{
	char *str1 = (char*) malloc(sizeof(char) * 100);
    int len=strlen(str);
    int i,j=0;
    for(i=len-1;i>=0;i--)
    {
        str1[j++]=str[i];
    }
    return str1;
}
int main()
{
	char *str = (char*) malloc(sizeof(char) * 100);
	gets(str);
	str = strrev(str);
	puts(str);
	return 0;
}