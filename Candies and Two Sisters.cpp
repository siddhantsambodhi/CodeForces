#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	int no;
	cin>>no;
	 for(int i=0;i<no;i++){
	 	
	
	int a;
	cin>>a;
	if(a%2==0){
		a=a-1;
	}
	
	if(a==2){
		a=1;
	}
	int res=a/2;
	cout<<res<<endl;
	 	
	 }
	
	return 0;
	
	
}
