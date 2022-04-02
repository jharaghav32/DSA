// we have to find the minimum difference betweeen the sum of two subset
#include<bits/stdc++.h>
using namespace std;
int subsetsum(vector<int>&v, int n)
{
	// Calculate sum of all elements
	int sum = accumulate(v.begin(),v.end(),0);
	

	// Create an array to store results of subproblems
	bool dp[n + 1][sum + 1];

	// Initialize first column as true. 0 sum is possible
	// with all elements.
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;

	// Initialize top row, except dp[0][0], as false. With
	// 0 elements, no other sum except 0 is possible
	for (int i = 1; i <= sum; i++)
		dp[0][i] = false;

	// Fill the partition table in bottom up manner
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			// If i'th element is excluded
            if(j<v[i-1])   // if sum is less than element then dont take it
			dp[i][j] = dp[i - 1][j];

			// If i'th element is included
			if (v[i - 1] <= j)
				dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i-1][j];
		}
	}

	
	int diff ;

	
	for (int j = sum / 2; j >= 0; j--) {
		
		if (dp[n][j] == true) {
			diff = sum - 2 * j;
			break;
		}
	}
	return diff;
}

int main(){
vector<int> v={1,6,11,5};



cout<<subsetsum(v,v.size());



return 0;
}