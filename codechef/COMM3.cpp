// Que Link:- https://www.codechef.com/problems/COMM3

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    int a[3][2];
	    
	    for(int i=0;i<3;i++)
	    {
	        for(int j=0;j<2;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    
	    double d,b,c;
	    
	    d=pow(pow((a[0][0]-a[1][0]),2) + pow(a[0][1]-a[1][1],2),0.5);
	    b=pow(pow((a[0][0]-a[2][0]),2) + pow(a[0][1]-a[2][1],2),0.5);
	    c=pow(pow((a[1][0]-a[2][0]),2) + pow(a[1][1]-a[2][1],2),0.5);
	    
	    if(d<=n && b<=n)
	    {
	        cout<<"yes"<<endl;   
	    }else if(d<=n && c<=n){
	        cout<<"yes"<<endl; 
	    }else if(c<=n && b<=n){
	        cout<<"yes"<<endl; 
	    }else{
	        cout<<"no"<<endl; 
	    }
	    
	}
	
	return 0;
}
