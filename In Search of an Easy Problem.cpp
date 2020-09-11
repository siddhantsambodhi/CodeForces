#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,val;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){cin>>val; v.push_back(val);
	}
	
	if(accumulate(v.begin(),v.end(),0)==0){
		cout<<"EASY";
	}
	else{
		cout<<"HARD";
	}
	return 0;
}
