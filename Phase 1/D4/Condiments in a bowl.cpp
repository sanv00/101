#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c,t,taken,newc=0;
    cin>>c>>t;
    int lol=c;
    for(int i=0;i<t;i++)
    {
        cin>>taken;
        lol=lol-taken;
        
        if(lol<5)
        {
            if(i==t-1)
                break;
            int add=0;
            add=c-lol;
            newc=newc+add;
            lol=c;
           
        }
        
           
            
    }cout<<newc;
    return 0;
}
