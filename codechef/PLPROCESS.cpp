// Que Link:- https://www.codechef.com/LTIME105C/problems/PLPROCESS

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int T;
	cin>>T;
	while(T--)
	{
	    long long int n;
	    cin>>n;
	    
	    vector<long long int> a;
	    
	    for(long long int i=0;i<n;i++)
	    {
	        long long int b;
	        cin>>b;
	        a.push_back(b);
	    }
	    
	    
	    if(a.size()==1)
	    {
	        cout<<a[0]<<endl;   
	    }else{
	    long long int sum1=0,sum2=0,i=0,j=a.size()-1;
	    
	    while(i<=j)
        {
            if(sum1>sum2)
            {
                sum2+=a[j];
                j--;
            }else{
                sum1+=a[i];
                i++;
            }
        }
        
        if(sum1>sum2){
            cout<<sum1<<endl;
        }else{
            cout<<sum2<<endl;
        }
	    }
	}
	
	return 0;
}
