#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(unsigned long long int num){
    if(num==2 || num==3)
        return 1;
    if(num==1 || num%2==0 || num%3==0)
        return 0;
    unsigned long long int j=5;
    while(j*j<=num){
        if(num%j==0 || num%(j+2)==0){
            return 0;
        }
        j=j+6;
    }
    return 1;
}

int main() {
 
    unsigned long long int a,b;
    scanf("%llu %llu",&a,&b);
    
    unsigned long long int i;
    unsigned long long int count=0;
    for(i=a;i<=b;i++){
        if(isPrime(i)){
            count = count + 1;
        }
    }
    printf("%llu",count);
     
    return 0;
}
