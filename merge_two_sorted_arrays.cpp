#include <bits/stdc++.h>

using namespace std;

void mergeArray(vector < int > &nums, int n, vector < int > &data,int m) 
{
	reverse(data.begin(), data.end());
	reverse(data.begin() + n, data.end());
	
	cout<<"inside mergeArray"<<endl;	
	cout<<"printing data array"<<endl;

	for (auto x : data) {
		cout<<x<<" ";
	}
	cout<<endl;
	
	cout<<"priting nums array"<<endl;
	
	for (auto x : nums) {
		cout<<x<<" ";
	}
	cout<<endl;
	

	int i = n;
	int j = 0;
	int k = 0;

	while (i < data.size() && j < nums.size()) {
		cout<<"{"<<data[i]<<", "<<nums[j]<<"}"<<endl;
		if (data[i] <= nums[j]) {
			data[k] = data[i];
			i++;
		} else {
			data[k] = nums[j];
			j++;
		}
		k++;
	}
	while (i < data.size()) {
		data[k] = data[i];
		k++;
		i++;
	}

	while (j < nums.size()) {
		data[k] = nums[j];
		k++;
		j++;
	}
	return;
	
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
		
		int m;
		cin>>m;
		vector < int > data(m + n, 0);

		for (int i = 0; i < data.size(); i++) {
			cin>>data[i];
		}

		vector < int > result;
		
		cout<<"printing data before sending"<<endl;
		for (auto x : data) {
			cout<<x<<" ";
		}
		
		mergeArray(nums, n, data, m + n);

		cout<<"printing final output"<<endl;
		for (auto x : data) {
			cout<<x<<" ";
		}
		cout<<endl;
		test--;
	}
	return 0;
}
