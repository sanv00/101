#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printit(int num){
        cout << "min(int, ";
        while(num>=2){
            if(num==2){
             cout << "int)";
                break;
            }
            printit(num-1);
            
            cout << ")";
            break;
        }
}

int main() {
    
    int n;
    cin >> n;
    
    printit(n);
    return 0;
}
