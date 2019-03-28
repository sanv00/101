#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    char s[100],key[]={"hello"};
    cin>>s;
    int len=strlen(s);
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==key[j])
        {
            j++;
            
        }   
    }
    if(j==strlen(key))
                cout<<"YES";
            else
                cout<<"NO";
    return 0;
}
