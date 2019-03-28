#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bases(int n,int base)
{
    int arr[1000];
    int i=0;
    while(n>0)
    {
        arr[i]=n%base;
        n=n/base;
        i++;
    }
    /*for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }cout<<endl;*/
 
    if(arr[0]==0)
        return 0;
    else
        return 1;
}

int main() {
    int n,count=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(bases(n,i)==0)
            count++;
    }
    cout<<count;
    return 0;
}
