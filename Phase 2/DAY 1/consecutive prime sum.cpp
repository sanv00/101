#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int s = 2,count=0;
    for(int i=3;i<n;i++){
        if(isPrime(i)){
            s += i;
            if(isPrime(s)){
                if(s<=n){//cout<<s<<" ";
                    count++;}
                else
                    break;
            }
        }
    }
    cout<<count;
    return 0;
}



/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime( int num )
{
    if( num >= 1 && num <= 3 )
        return true;
    if( num % 2 == 0 )
        return false;
    for( int i = 3 ; i < num/2 ; i=i+2 )
    {
        if( num%i==0 )
            return false;
    }
    return true;
}


int main() {
    long long int n,i,j,a[100],k=0;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(isPrime(i))
        {
            a[k++]=i;
        }
        
    }
    long long int sum=0,count=0;
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
        if(sum<=n)
        {
            count++;
            
        }
    }            
    cout<<count;
    return 0;
}
*/