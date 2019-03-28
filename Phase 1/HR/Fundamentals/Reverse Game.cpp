#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(2*m<n-1) 
            cout << 2*m+1 << endl; 
        else 
            cout << 2*(n-m-1) << endl;
    }

    return 0;
}