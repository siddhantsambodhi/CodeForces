#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,val;
	cin>>size;
	vector<int> v;
	for(int i=0;i<size;i++){
		cin>>val;v.push_back(val);
	}
	int search;
	cin>>search;
	vector<int>::iterator low=lower_bound(v.begin(),v.end(),search);
	cout<<low-v.begin();
	return 0;
	
}
