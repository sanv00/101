#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long int t,num,sum=0;
    cin>>t;
    long int mod = 1e9+7;
    while(t--)
    {
        cin>>num;
        cout<<((num%mod)*(num%mod)%mod)<<endl;
    }

    return 0;
}