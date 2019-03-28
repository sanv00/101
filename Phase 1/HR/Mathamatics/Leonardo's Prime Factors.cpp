#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i,n;
    unsigned long long int a;
    cin>>n;
    
    while(n>0)
    {
        
        cin>>a;
        if(a<2)
            cout<<0<<endl;
        else
        {
            unsigned long long int lol=prime[0];
            for( i=1;i<25;i++)
            {
                lol=lol*prime[i];
                if(a<lol)
                break;
            }
            cout<<i<<endl;

        }
        n--;
    }
    return 0;
}





























/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isPrime(int a)
{
    long long int ctr=0,tot=,count=0;
    for(long long int i=1;i<=a;i++)
    {
        for(long long int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                    ctr++;
            }
            if(ctr==0&&i!=1)
            { 
                tot=tot*i;
                if(tot>a)
                    break;
                ctr=0;
                count++;
            }
            ctr=0;
    }

        cout<<count<<endl;
    return 0;
}


int main() 
{
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int a;
        cin>>a;
        isPrime(a);

        
    }
    return 0;
}
*/