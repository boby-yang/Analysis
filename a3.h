#include <iostream>
#include <vector>
using namespace std;

int cartesianProduct(int arr[], int n)
{
	int cnt_op = 0; // ignored
	int i = 0;
	cnt_op++; // line 7
	while ((cnt_op++, i < n)) { // line 9
		int j = 0;
		cnt_op++; // line 10
		while ((cnt_op++, j < n)) { // line 12
			cout << "{" << arr[i] << "," << arr[j] << "}";
			cnt_op++; // line 13
			j++;
			cnt_op++; // line 15
			cout << " ";
			cnt_op++; // line 17
		}
		cout << endl;
		cnt_op++; // line 20
		i++;
		cnt_op++; // line 22
	}
	return cnt_op; // ignored
}

int triangle(int x)
{
	int cnt_op = 0; // ignored
	int i = 0;
	cnt_op++; // line 31
	while ((cnt_op++, i < x)) { // line 33
		int j = 0;
		cnt_op++; // line 34
		while ((cnt_op++, j <= i)) { // line 36
			cout << j << " ";
			cnt_op++; // line 37
			j++;
			cnt_op++; // line 39
		}

		cout << endl;
		cnt_op++; // line 43
		i++;
		cnt_op++; // line 45
	}

	while ((cnt_op++, i > 0)) { // line 49
		i--;
		cnt_op++; // line 50
		int j = 0;
		cnt_op++; // line 52
		while ((cnt_op++, j <= i)) { // line 54
			cout << j << " ";
			cnt_op++; // line 55
			j++;
			cnt_op++; // line 57
		}
		cout << endl;
		cnt_op++; // line 60
	}
	return cnt_op; // ignored
}

vector<int> removeDuplicates(int arr[], int n, int &cnt_op)
{
	cnt_op = 0; // ignored

	vector<int> result;
	cnt_op++; // line 70
	int i = 0;
	cnt_op++; // line 72
	while ((cnt_op++, i < n)) { // line 74
		int iResult = 0;
		cnt_op++; // line 75
		bool duplicate = false;
		cnt_op++; // line 77
		while (cnt_op++, (iResult < (int)result.size() && !duplicate)) { // line 80
			if ((cnt_op++,arr[i] == result[iResult])) { // line 81
				duplicate = true;
				cnt_op++; // line 82
			}

			iResult++;
			cnt_op++; // line 86
		}
		if ((cnt_op++, !duplicate)) { // line 89
			result.push_back(arr[i]); //note 4
			cnt_op++; // line 90
		}

		i++;
		cnt_op++; // line 94
	}
	return result;
}

int* matrixSelfMultiply(int* m, int rows, int &cnt_op)
{
	cnt_op = 0;
	int columns = rows;
	cnt_op++; // line 103
	int* result = new int[rows * columns];
	cnt_op++; // line 105
	int r = 0;
	cnt_op++; // line 107

	while ((cnt_op++, r < rows)) { // line 110
		int c = 0;
		cnt_op++; // line 111
		while ((cnt_op++, c < columns)) { //columns = rows  // line 113
			int next = 0;
			cnt_op++; // line 114
			int iNext = 0;
			cnt_op++; // line 116

			while ((cnt_op++, iNext < rows)) { // line 119
				next += m[rcIndex(r, iNext, columns)] * m[rcIndex(iNext, c, columns)];
				cnt_op++; // line 120
				iNext++;
				cnt_op++; // line 122
			}

			result[rcIndex(r, c, columns)] = next;
			cnt_op++; // line 126
			c++;
			cnt_op++; // line 128
		}
		r++;
		cnt_op++; // line 131
	}
	return result;
}

int rcIndex(int r, int c, int columns)
{
	return r * columns + c;
}