#include <iostream>
#include <vector>
using namespace std;

int cartesianProduct(int arr[], int n)
{
	int cnt_op = 0;
	int i = 0;
	cnt_op ++;
	while ((cnt_op++, i < n)) {
		int j = 0;
		cnt_op++;
		while ((cnt_op++, j < n)) {
			cout << "{" << arr[i] << "," << arr[j] << "}";
			j++;
			cout << " ";
			cnt_op += 3;
		}
		cout << endl;
		i++;
		cnt_op += 2;
	}
	return cnt_op;
}

int triangle(int x)
{
	int cnt_op = 0;
	int i = 0;
	cnt_op++;
	while ((cnt_op++, i < x)) {
		int j = 0;
		cnt_op++;
		while ((cnt_op++, j <= i)) {
			cout << j << " ";
			j++;
			cnt_op += 2;
		}
		cout << endl;
		i++;
		cnt_op += 2;
	}

	while ((cnt_op++, i > 0)) {
		i--;
		int j = 0;
		cnt_op += 2;
		while ((cnt_op++, j <= i)) {
			cout << j << " ";
			j++;
			cnt_op += 2;
		}
		cout << endl;
		cnt_op++;
	}
	return cnt_op;
}

vector<int> removeDuplicates(int arr[], int n, int &cnt_op)
{
	cnt_op = 0;
	vector<int> result;
	int i = 0;
	cnt_op += 2;
	while ((cnt_op++, i < n)) {
		int iResult = 0;
		bool duplicate = false;
		cnt_op += 2;
		while (cnt_op++, (iResult < (int)result.size() && !duplicate)) {
			if ((cnt_op++,arr[i] == result[iResult])) {
				duplicate = true;
				cnt_op++;
			}
			iResult++;
			cnt_op++;
		}
		if ((cnt_op++, !duplicate)) {
			result.push_back(arr[i]); //note 4
			cnt_op++;
		}
		i++;
		cnt_op++;
	}
	return result;
}

int rcIndex(int r, int c, int columns)
{
	return r * columns + c;
}

int* matrixSelfMultiply(int* m, int rows, int &cnt_op)
{
	cnt_op = 0;
	int columns = rows;
	int* result = new int[rows * columns];
	int r = 0;
	cnt_op += 3;

	while ((cnt_op++, r < rows)) {
		int c = 0;
		cnt_op++;
		while ((cnt_op++, c < columns)) { //columns = rows
			int next = 0;
			int iNext = 0;
			cnt_op += 2;

			while ((cnt_op++, iNext < rows)) {
				next += m[rcIndex(r, iNext, columns)] * m[rcIndex(iNext, c, columns)];
				iNext++;
				cnt_op += 2;
			}

			result[rcIndex(r, c, columns)] = next;
			c++;
			cnt_op += 2;
		}
		r++;
		cnt_op++;
	}
	return result;
}

