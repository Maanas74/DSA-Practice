// Que Link:- https://www.codechef.com/problems/VOWELTB

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char c;
	cin>>c;
	
	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	{
	    cout<<"Vowel"<<endl;
	}else{
	    cout<<"Consonant"<<endl;
	}
	
	return 0;
}
