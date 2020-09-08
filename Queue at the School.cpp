#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int size=0,time=0;
	cin>>size>>time;
	cin>>s;
	while(time--){
		
		for(int i=0;i<s.size();i++){
			
			if(s[i]=='B' && s[i+1]=='G'){
//				s[i]='G';
//				s[i+1]='B';
				swap(s[i],s[i+1]);
				i++;
			}
		}
		
	}
	cout<<s;
	return 0;
	
	
}
