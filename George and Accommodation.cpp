#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<n+1;i++){
		int p=0,q=0;
		cin>>p>>q;
		if(q>=2 && abs(p-q)>=2){
				ans++;
			
		}
	}
	cout<<ans;
}
