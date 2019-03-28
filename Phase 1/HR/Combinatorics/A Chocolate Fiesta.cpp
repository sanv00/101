#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int mod=1e9+7;
    int n,lul=1;
    cin>>n;
    int a,eve=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
        {   eve++;   }
        else
        {   odd++;  }
    }
    if(odd==0) {    n++;    }
    for(int i=1; i<n; i++) 
    {
        lul<<=1;   // lul=pow(2,1)*lul;;
        lul=lul%mod;
    }
    cout<<lul-1;
    return 0;
}