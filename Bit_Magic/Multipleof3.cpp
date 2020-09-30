#include<bits/stdc++.h>
#define ll long long int 
#define mod 1000000007
using namespace std;
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	    {
	        string s;
	        cin>>s;
	        ll l=s.length();
	        ll i,even=0,odd=0,oe=-1;
	        for(i=l-1;i>=0;i--){
	            if(oe==-1){
	                
	                if(s[i]=='1')odd+=1;
	            }
	            else {
	                if(s[i]=='1')even+=1;
	                
	            }
	            oe=oe*-1;
	        }
	        if(abs(even-odd)%3==0)cout<<1<<endl;
	        else cout<<0<<endl;
	    }
    return 0;
}
