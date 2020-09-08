#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,pass;
	cin>>n;
	
	pass=n/5;
	
	if(n%5>0){
		pass++;
	}
	cout<<pass;
	
}
