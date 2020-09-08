#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int min=0,prev=0;
	for(int i=0;i<n;i++){
		
		int exit=0,enter=0;
		cin>>exit>>enter;
		
		min=min-exit+enter;
		if(prev<min){
			prev=min;
		}
	}
	cout<<prev;
}
