#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	cin>>str1>>str2;
	
	for(int i=0;i<str1.size();i++){
		str1[i]=toupper(str1[i]);
		str2[i]=toupper(str2[i]);
	}
	if(str1==str2){
		cout<<'0';
	}
	else{
		for(int i=0;i<str1.size();i++){
			if(str1[i]>str2[i]){
				cout<<"1";
				break;
			}
			else if(str2[i]>str1[i]){
				cout<<"-1";
				break;
			}
			
		}
	}
	
	
	return 0;
	
}
