//reversal algorithm
#include <bits/std++.h>

using namespace std;

void rotateArray(vector < int > &nums, int k) {
	reverse(nums.begin(), nums.end());
	reverse(nums.begin(), nums.begin() + k);
	reverse(nums.begin() + k, nums.end());

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
