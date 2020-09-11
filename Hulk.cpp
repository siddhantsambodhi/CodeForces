#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int tht=0,flag=0;
	for(int i=1;i<=n;i++){
		
		if(tht==1){
			cout<<"that ";
		}
		
		if(flag==0){
			cout<<"I hate ";
			flag=1;
			tht=1;
		}
		else{
			cout<<"I love ";
			flag=0;
			tht=1;
		}
	}
	cout<<"it ";
}
