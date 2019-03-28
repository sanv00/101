#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    int m1=0,m2=0;
    
    if(x2-x1!=0)
        m1=(y2-y1)/(x2-x1);
    else
        m1=-200;
    
    if(x4-x3!=0)        
        m2=(y4-y3)/(x4-x3);
    else
        m2=-200;
    
    if(m1==m2)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
