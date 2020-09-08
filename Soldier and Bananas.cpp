#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int count=0;
	for(int i=0;i<w+1;i++){
		count+=k*i;
	}
	if(count>=n){
		cout<<count-n;
	}
	else{
		cout<<"0";//he dont need to borrow money so answer is zero;
	}
}
