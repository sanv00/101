#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b)
{
    return a==0?b:gcd(b%a,a);
}

int main() 
{
    int t,l,b;
    cin>>t;
    while(t--)
    {
        cin>>l>>b;
        int lol=gcd(l,b);
        cout<<(l/lol)*(b/lol)<<endl;
    }

    return 0;
}