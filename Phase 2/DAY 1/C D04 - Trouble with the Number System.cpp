//C D04 - Trouble with the Number System


#include <cmath>
#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,i,tot,product=1;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        long long int count=0;
        long long int num=a[i];
        while(num)
        {
            if(num%10==0)
            {
                count++;
            }
            else if(num%10==1 && num/10==0)
            {
                tot=tot+count;
            }
            else
            {
                count=0;
                product=product*a[i];
                break;
            }
            num=num/10;
        }
    }
    cout<<product;
    for(int i=0;i<tot;i++)
    {
        cout<<"0";
    }
    return 0;
}
--------------------

02x01 - Stacks Using an Array

//HEAD

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

//BODY

int stackArr[100005];
int top = -1;// - Stores the index of the topmost element on the stack
void push(int x);// - Insert an element onto the top of the stack
int peek();// - Returns the topmost element on the stack
void pop();// - Removes an element from the top of the stack
int empty();// - Returns 1 if the stack is empty and 0 otherwise
void push(int x){
    stackArr[++top]=x;
}
int peek(){
    return stackArr[top];
}
void pop(){
    top--;
}
int empty(){
    if(top==-1)
        return 1;
    return 0;
}
//TAIL

int main()
{
    int n;
    top = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, x;
        scanf("%d", &t);
        if (t == 1) {
            scanf("%d", &x);
            push(x);
        }
        else if (t == 2) {
            if (empty()) {
                printf("Invalid\n");
            }
            else {
                pop();
            }
        }
        else if (t == 3){
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            for (int j = top; j >= 0; j--) {
                printf("%d ", stackArr[j]);
            }printf("\n");
        }
        else {
            if (empty()) {
                printf("Invalid\n");
                continue;
            }
            printf("%d\n", peek());
        }
    }
    return 0;
}