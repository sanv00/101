#include <cmath>
#include <cstdio>
#include <fstream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() 
{
    double l,s1,s2;
    cin>>l>>s1>>s2;
    int num;
    cin>>num;
    while(num--)
    {
        double n;
        cin>>n;
        cout<<fixed<<setprecision(10)<<(l-sqrt(n))/(abs(s1-s2)/(sqrt(2)))<<endl;
    }
    return 0;
}