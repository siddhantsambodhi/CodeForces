#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	int width=0;
	for(int i=0;i<n;i++){
		int p=0;
		cin>>p;
		if(p<=h){
			width++;
		}
		if(p>h){
			width+=2;
		}
	}
	cout<<width;
}
