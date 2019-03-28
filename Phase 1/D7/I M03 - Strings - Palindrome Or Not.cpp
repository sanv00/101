#include <cmath>
#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    char str[100];
    cin>>str;
    int len=strlen(str)-1;
    int j=len;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[j--])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}
