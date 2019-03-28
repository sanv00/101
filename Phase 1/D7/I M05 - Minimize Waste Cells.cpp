#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    char s[1000];
    gets(s);
    int count=0,len=strlen(s),size=0,i=0;
    while(i*i<len)
    {
        size=i+1;
        i++;
    }
        
    for(int i=0;i<size*size;i++)
    {
        
        
        if(i<len)
        {
          cout<<s[i];
  
        }
        
        if(i>=len)
        {
            cout<<"?";
        }
        
        count++;
        if(count%size==0)
            cout<<endl;
    }
        
    return 0;
}
