// problem link:https://practice.geeksforgeeks.org/problems/reverse-an-array/0

#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int new_arr[n];
	    for(int i=0;i<n;i++){
	    new_arr[i]=arr[n-1-i];}
	    for(int i=0;i<n;i++){
	    cout<<new_arr[i]<<" ";}
	    cout<<endl;
	    
	}
	return 0;
}