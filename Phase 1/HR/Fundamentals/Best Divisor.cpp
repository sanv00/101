#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long int n,max=0,res=0;
    cin>>n;
    for(long int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
             int sum=0,num=i;
             while(num!=0)
             { 
                 sum=sum+num%10;
                 num=num/10;
             }
             if(sum>max)
             {
                 max=sum;
                 res=i;
             }
             
        }
    }
    cout<<res;
    return 0;
}