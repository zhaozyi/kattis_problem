#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	long long result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num, exp, curr;
		cin >> num;
		exp = num % 10;	    // this is the exp number
		curr = num / 10;	// this is the base
		result += pow(curr, exp);   // update the result
	}
	cout << result << endl;
}