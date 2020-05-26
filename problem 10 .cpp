#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long
int main() 
{
    ll n=2,j=3,flag=0;
	while(j<2000000)
	{
	    flag=0;
	    for(ll i=2;i<=sqrt(j);i++)
	    {
	        if(j%i==0)
	        {
	            j++;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        n+=j;
	        j++;
	    }
	}
	cout<<n;
	
	return 0;
}
