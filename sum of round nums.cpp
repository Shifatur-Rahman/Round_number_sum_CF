#include <bits/stdc++.h>
using namespace std;

int main(){

int t,i;
cin>>t;



while(t--){
    vector <int> num;
    int n,x=1;
    cin>>n;
    while(n){
	x *= 10;
	int p = n % x;
	if(p) num.push_back(p);
	n-=p;
   }

    cout<<num.size()<<endl;
    for(i=0; i<num.size(); i++){
	cout<<num[i]<<" ";
   }

	puts(" ");
}

}
