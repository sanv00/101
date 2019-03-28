#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    char a[200];
    cin>>a;
    float len=strlen(a),vowels=0,cons=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]=='a' || a[i]=='e' ||a[i]=='i' || a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U')
        {
            vowels++;
        }
    }
    float ans=(vowels/len)*100;
    printf("%.4f",ans);
        
    return 0;
}
