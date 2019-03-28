#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long n,k,q;
    cin>>q;

    while(q--)
    {
        cin>>n>>k;
            if(n<=4*k)
            {
                cout<<n-1<<endl;
                continue;
            }        
            double a=(n-sqrt(n*n-4*n*k))/2;
            double b=(n+sqrt(n*n-4*n*k))/2;
            long long count=floor(a)+n-ceil(b);
            cout<<count<<endl;
    }
    return 0;
}

