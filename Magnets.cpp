#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp=0;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		
		if(m!=temp){
			count++;
		}
		temp=m;
	}
	cout<<count;
}
