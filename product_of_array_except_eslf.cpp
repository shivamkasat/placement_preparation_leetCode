#include <bits/stdc++.h>

using namespace std;

vector < int > productExceptSelf(vector < int > &nums) 
{
	vector < int > output(nums.size(), 1);
	for (int i = nums.size() - 1; i > 0; i--) {
		output[i - 1] = output[i] * nums[i];
	}

	int prod = 1;
	for (int i = 1; i < nums.size(); i++) {
		prod *= nums[i -1];
		output[i] *= prod;
	}

	return output;
}

int main()
{
	int test;
	cin>>test;
	while (test > 0) {
		int n;
		cin>>n;
		vector < int > nums(n, 0);

		for (int i = 0; i < nums.size(); i++) {
			cin>>nums[i];
		}
		
		vector < int > result;
		result = productExceptSelf(nums);

		cout<<"final Output"<<endl;
		for (auto x : result) {
			cout<<x<<" ";
		}
		cout<<endl;
		test--;
	}
}
