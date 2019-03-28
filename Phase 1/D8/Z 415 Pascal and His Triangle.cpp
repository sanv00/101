#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    long long int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i || j==0){
                a[i][j] =  1;
            }
            else{
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
