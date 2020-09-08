#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	cin>>st;
	if(!isupper(st[0])){
		st[0]=toupper(st[0]);
		cout<<st;
	}
	else{
		cout<<st;
	}
	return 0;
}
