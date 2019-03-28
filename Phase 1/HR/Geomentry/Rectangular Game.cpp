#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long int N,a=1e6,b=1e6;
    long int i;
    cin>>N;

    for(i=0;i<N;i++)
    {
        long int x,y;
        cin>>x>>y;
        a=min(a,x);
        b=min(b,y);
    }
    cout<<a*b;
    return 0;
}