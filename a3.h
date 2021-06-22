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
//		cout << "Before inner loop: " << to_string(cnt_op) << endl;
		while (cnt_op++, (iResult < (int)result.size() && !duplicate)) { // line 80
			if ((cnt_op++,arr[i] == result[iResult])) { // line 81
				duplicate = true;
				cnt_op++; // line 82
			}

			iResult++;
			cnt_op++; // line 86
		}
//		cout << "After inner loop: " << to_string(cnt_op) << endl;
		if ((cnt_op++, !duplicate)) { // line 90
			result.push_back(arr[i]); //note 4
			cnt_op++; // line 91
		}

		i++;
		cnt_op++; // line 95
	}
	return result;
}
//
////Question 4
////This function returns an array in dynamic memory that represents the matrix that is the result of multiplying the matrix (array) parameter by itself.
//// PRE: m represents a square matrix of size rows * rows
//// PARAM: rows represents the number of both rows and columns
//// POST: Returns a pointer to an array (matrix) of the same size as m
//// NOTE: values are indexed r0c0,r0c1,…,r0cn-1,r1c0,…
//int* matrixSelfMultiply(int* m, int rows)
//{
//	// Create result array
//	int columns = rows;
//	int* result = new int[rows * columns];
//	int r = 0;
//
//	while (r < rows) {
//		int c = 0;
//		while (c < columns) { //columns = rows
//			int next = 0;
//			int iNext = 0;
//
//			while (iNext < rows) {
//				next += m[rcIndex(r, iNext, columns)] * m[rcIndex(iNext, c, columns)];
//				iNext++;
//			}
//
//			result[rcIndex(r, c, columns)] = next;
//			c++;
//		}
//		r++;
//	}
//	return result;
//}
//// Returns the index of a 1d array representing a matrix
//// given row (r) and column (c) values
//int rcIndex(int r, int c, int columns)
//{
//	return r * columns + c;
//}