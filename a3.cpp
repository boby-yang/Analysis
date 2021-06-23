#include <iostream>
#include "a3.h"
using namespace std;
// TODO function to print a vector
void printIntArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}


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
	cout << "Resulting vector: " << endl;
	vector<int>::iterator it;
	for(it = v3_worse.begin(); it != v3_worse.end(); it++)
		cout<< *it << " ";
	cout << endl;

	int a3_best[5] = {1, 1, 1, 1, 1};
	int q3_best;
	vector<int> v3_best = removeDuplicates(a3_best, s3, q3_best);
	cout << "Q3_Best(n=5): " << to_string(q3_best) << endl;
	cout << "Resulting vector: " << endl;
	for(it = v3_best.begin(); it != v3_best.end(); it++)
		cout<< *it << " ";
	cout << endl;
}

void testQ4()
{
	int a4[9] = {1,2,3,0,1,0,1,0,1};
	int r4 = 3;
	int q4_cnt;
	int *out = matrixSelfMultiply(a4, r4, q4_cnt);
	cout << "Q4 Input: ";
	printIntArray(a4, 9);
	cout << "Q4 Output: ";
	printIntArray(out, 9);
	cout << "Q4 Op Cnt: " << to_string(q4_cnt) << endl;
}

void testQ5()
{
	int a5_best[5] ={1,2,3,4,5};
	int s5_best = 5;
	int q5_best;

	cout << "Best case\nInitial arr: ";
	printIntArray(a5_best, s5_best);
	q5_best = ssort(a5_best, s5_best, 0);
	cout << "Output arr: ";
	printIntArray(a5_best, s5_best);
	cout << "Q5 Op Cnt: " << to_string(q5_best) << endl;
}

void testQ6()
{
	int n6 = 4;
	int q6 = pattern(n6,0);
	cout << "Q6(x=4): " << to_string(q6) << endl;
}

int main()
{
//	testQ1();
//	testQ2();
//	testQ3();
//	testQ4();
//	testQ5();
	testQ6(); //4: 86; 8: 202



	return 0;
}
