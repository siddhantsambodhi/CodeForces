#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int up=0,low=0;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
			up++;
		}
		else{
			low++;
		}
	}
	
	if(up>low){
//		for(int i=0;i<s.size();i++){
//			s[i]=toupper(s[i]);
//		}
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout<<s;
		return 0;
	}
	else{
//		for(int i=0;i<s.size();i++){
//			s[i]=tolower(s[i]);
//		}
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout<<s;
		return 0;
	}
}
