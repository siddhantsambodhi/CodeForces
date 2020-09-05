#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int pass=0;
	
	for(int i=0;i<num;i++){
		
		int val=0,count=0;
		for(int j=0;j<3;j++){ 
		cin>>val;
			if (val==1){
				count++;
			}
		}
		
		if (count>=2){
			pass++;
		}
	}
	cout<<pass;
}
