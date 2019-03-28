#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,r=1;
        cin>>a;
        int b;
        for(int i=0;i<a-1;i++)
        {
            cin>>b;
            r=(r*b)%1234567;
        }
        cout<<r<<endl;
    }
    return 0;
}

