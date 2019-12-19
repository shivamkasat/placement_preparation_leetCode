#include <bits/stdc++.h>

using namespace std;

void swap (int &n1, int &n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void rotate(vector < vector < int > > &mat)
{
	int n = mat.size();
	for (int i = 0; i < n;i++) {
		for (int j = i + 1; j < n; j++) {
			swap(mat[i][j], mat[j][i]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 2; j++) {
			swap(mat[i][j], mat[i][n - 1 -j]);
		}
	}

}

int main()
{
	int test;
	cin>>test;
	while (test > 0) {
		int n;
		cin>>n;
		vector < vector < int > > mat(n, vector < int >(n, 0));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin>>mat[i][j];
			}
		}

		rotate(mat);
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%3d", mat[i][j]);
			}
			printf("\n");
		}
		

	}
	return 0;
}
