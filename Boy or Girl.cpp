#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	set<char> s;
	cin>>st;
	for(int i=0;i<st.size();i++){
		s.insert(st[i]);//input string into set cause set dosent allow repeating element
	}
	if(s.size()%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
}
