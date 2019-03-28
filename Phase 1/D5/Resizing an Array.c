#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr = (int*) malloc(sizeof(int) * 3);
	int i, N;
    
    //input N and then use realloc to change size of array arr.
	
    scanf("%d",&N);
    
    realloc(arr, sizeof(int) * N);
    
    for(int i=N;i>0;i--)
    {
        printf("%d ",i);
    }
	return 0;
}