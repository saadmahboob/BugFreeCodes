//http://www.practice.geeksforgeeks.org/problem-page.php?pid=525
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n-1;i++){
	        if(a[i]>a[i+1])cout<<a[i+1]<<" ";
	        else cout<<"-1 ";
	    }
	    cout<<"-1 \n";
	}
	return 0;
}
