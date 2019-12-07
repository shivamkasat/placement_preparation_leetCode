//juggling algorithm
#include <bits/stdc++.h>

using namespace std;

void rotateArray(vector < int > &nums, int k) {
	int i;
	int start, temp, count, elem;
	k = k % nums.size();
	count = nums.size();
	for (start = 0; count > 0; start++) {
		i= start;
		elem = nums[i];
		do {
			temp = nums[(i + k) % nums.size()];
			nums[(i + k) % nums.size()] = elem;
			elem = temp;
			i = (i + k) % nums.size();
			count--;
		} while (i != start);
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
