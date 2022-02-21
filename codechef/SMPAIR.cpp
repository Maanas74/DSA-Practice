// Que Link:- https://www.codechef.com/problems/SMPAIR

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n],min1=INT_MAX,j;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(min1>a[i])
            {
                min1=a[i];
                j=i;
            }
        }
        
        int min2=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(i!=j)
            {
                if(min2>a[i])
                {
                    min2=a[i];
                }
            }
        }
        
        cout<<min1+min2<<endl;
        
    }
    
	return 0;
}
