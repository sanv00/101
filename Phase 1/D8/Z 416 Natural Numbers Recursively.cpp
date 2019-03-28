#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void nat_num(int lol,int num)
{
    if(lol>num)
        return;
    cout<<lol<<" ";
    nat_num(lol+1,num);
}


int main() {
    int n;
    cin>>n;
    nat_num(1,n);
    return 0;
}
