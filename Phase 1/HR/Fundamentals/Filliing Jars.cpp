#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,m;
    cin>>m>>n;
    long long tot=0,a,b,k;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>k;
        tot=tot+(b-a+1)*k;
    }
    cout<<tot/m;
    return 0;
}