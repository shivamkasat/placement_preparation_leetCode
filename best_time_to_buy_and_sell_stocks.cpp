#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector < int > &prices)
{
	if (prices.size() < 2) {
		return 0;
	}
	
	int minPrice, maxPrice;
	minPrice = maxPrice = prices[0];
	bool boughtStock = false;

	for (int i = 0; i < prices.size(); i++) {
		minPrice = prices[i] < minPrice ? prices[i] : minPrice;
		maxPrice = prices[i] > maxPrice ? prices[i] : maxPrice;
	}

	//swap the minPrice with maxPrice
	int temp;
	temp = minPrice;
	minPrice = maxPrice;
	maxPrice = temp;

	for (int i = 1; i < prices.size(); i++) {
		if (prices[i - 1] < prices[i]) {
			if (prices[i - 1] < minPrice) {
				boughtStock = true;
				minPrice = prices[i - 1];
			}
		}

		if (boughtStock == true && prices[i - 1] > prices[i]) {
			if (prices[i - 1] > maxPrice) {
				maxPrice = prices[i - 1];
			}
		}
	}

	if (boughtStock == false) {
		return 0;
	}

	if (maxPrice < prices[prices.size() - 1]) {
		maxPrice = prices[prices.size() - 1];
	}

	return (maxPrice - minPrice);

}

int main()
{
	int test;
	cin>>test;
	while (test > 0) {
		int n;
		cin>>n;
		vector < int > prices(n, 0);

		for (int i = 0; i < prices.size(); i++) {
			cin>>prices[i];
		}

		int profit = maxProfit(prices);
		cout<<profit<<endl;
		test--;
	}

	return 0;
}
