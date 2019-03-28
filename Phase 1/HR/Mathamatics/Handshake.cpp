#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}