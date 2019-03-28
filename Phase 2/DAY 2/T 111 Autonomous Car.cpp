#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
        {
            
            int f,b,t,d;
            cin>>f>>b>>t>>d;
            long long ans=0;
            int count=0,dist=0;
            while(true)
                {
                    if(dist+b<d)
                    dist+=b;
                    
                    else
                        {
                            ans+=(d-dist)*t;
                            break;
                        }
                        
                    dist-=f;
                    
                    count++;
                    
                }
            ans+=(count*t)*(f+b);
            
            cout<<ans<<endl;
            
        }
    
    return 0;
}