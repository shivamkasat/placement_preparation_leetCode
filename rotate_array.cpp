#include <bits/stdc++.h>

using namespace std;

void rotateArray(vector < int > &nums, int k) {
	int count, i, elem, temp;
	count = nums.size();
	i = 0;
	elem = nums[0];
	k = k % nums.size();
	while ( count != 0) {
		temp = nums[(i + k) % nums.size()];
		nums[(i + k) % nums.size()] = elem;
		elem = temp;
		i = (i + k) % nums.size();
		count--;
	}

	for (int i = 0; i < nums.size(); i++) {
		printf("%d ", nums[i]); 
	}
}

int main()
{
	int n, k;
	cin>>n;
	cin>>k;
	vector < int > nums(n, 0);
	for (int i = 0; i < nums.size(); i++) {
		cin>>nums[i];
	}

	rotateArray(nums, k);
	return 0;
}
