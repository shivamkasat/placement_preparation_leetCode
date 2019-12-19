#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector < int > &prices)
{
	int profit = 0;
	for (int i = 0; i < prices.size() -1; i++) {
		if (prices[i] < prices[i+1]) {
			profit += (prices[i+1] - prices[i]);
		}
	}

	return profit;
}

int main()
{
	int n;
	cin>>n;
	vector < int > nums(n, 0);

	for (int i = 0; i < nums.size(); i++) {
		cin>>nums[i];
	}

	int profit = maxProfit(nums);
	cout<<profit<<endl;
	return 0;
}
