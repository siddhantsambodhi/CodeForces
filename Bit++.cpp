#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++){
		string st;
		st.clear();
		cin>>st;
		if(st[1]=='+'){
			count++;
		}
		else{
			count--;
		}
	}
	cout<<count;
}
