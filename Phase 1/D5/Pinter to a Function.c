#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cube(int val)
{
	return (val * val * val);
}	
int main()
{
    int val;
    scanf("%d", &val);
    int *cube_pointer;
    cube_pointer=&val;
    int result = cube(*cube_pointer);
    printf("%d", result);
    return 0;
}