#include <iostream>
#include "a3.h"
using namespace std;

int main()
{
	int a1[3] = {2, 2, 1};
	int s1 = 3;
	int q1 = cartesianProduct(a1, s1);
	cout << "Q1(n=3): " << to_string(q1) << endl;

	int x2 = 5;
	int q2 = triangle(x2);
	cout << "Q2(x=5): " << to_string(q2) << endl;

	int a3_worse[5] = {1, 2, 3, 4, 5};
	int s3 = 5;
	int q3_worse;
	removeDuplicates(a3_worse, s3, q3_worse);
	cout << "Q3_Worse(n=5): " << to_string(q3_worse) << endl;

	int a3_best[5] = {1, 1, 1, 1, 1};
	int q3_best;
	removeDuplicates(a3_best, s3, q3_best);
	cout << "Q3_Best(n=5): " << to_string(q3_best) << endl;
	return 0;
}
