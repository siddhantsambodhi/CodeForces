#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sub;
	cin>>n>>sub;
	for(int i=0;i<sub;i++){
		
		if(n%10==0){
			n=n/10;//remove last element
		}
		else{
			n--;
		}
	}
	cout<<n;
}
