//02x00 Maximum Element in the Stack

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<int> s;
    stack<int> cpy;
    s.push(-1);
    cpy.push(-1);
    int n;
    cin>>n;
    int q;
    while(n--){
        cin>>q;
        if(q==1){
            int x;
            cin>>x;
            s.push(x);
            if(x>cpy.top())
                cpy.push(x);
            else
                cpy.push(cpy.top());
        }
        else if(q==2){
            s.pop();
            cpy.pop();
        }
        else{
            cout<<cpy.top()<<endl;
        }
    }
    return 0;
}

