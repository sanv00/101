#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int ai,pi,min=999999,sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>ai>>pi;
        min=min>pi?pi:min;
        sum=sum+ai*min;
        
    }
    cout<<sum;
    return 0;
}
