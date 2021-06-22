#include <iostream>
#include "a3.h"
using namespace std;
// TODO function to print a vector

void testQ1()
{
	int a1[3] = {2, 2, 1};
	int s1 = 3;
	int q1 = cartesianProduct(a1, s1);
	cout << "Q1(n=3): " << to_string(q1) << endl;
}

void testQ2()
{
	int x2 = 5;
	int q2 = triangle(x2);
	cout << "Q2(x=5): " << to_string(q2) << endl;
}

void testQ3()
{
	int a3_worse[5] = {1, 2, 3, 4, 5};
	int s3 = 5;
	int q3_worse;
	vector<int> v3_worse = removeDuplicates(a3_worse, s3, q3_worse);
	cout << "Q3_Worse(n=5): " << to_string(q3_worse) << endl;
	// Check resulting vector

	int a3_best[5] = {1, 1, 1, 1, 1};
	int q3_best;
	vector<int> v3_best = removeDuplicates(a3_best, s3, q3_best);
	cout << "Q3_Best(n=5): " << to_string(q3_best) << endl;
	// Check resulting vector
}

void testQ4()
{
	int a4[9] = {1,2,3,0,1,0,1,0,1};
	int r4 = 3;
}

void testQ5()
{

}

void testQ6()
{

}

int main()
{





	return 0;
}
