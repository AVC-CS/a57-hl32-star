#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;
	// Reading inputs : first two values, then total count N
	cin >> n1 >> n2;
	cin >> N;

	// Step 2 : Print the first two numbers as they are
	cout << n1 << " " << n2 << " ";

	/* Step 3* Loop to calculate the rest.
		Since we already printed 2 numbers, wwe only need N - 2 more.
	*/
	for (int i = 0; i < N - 2; i++)
	{ 
		sum = n1 + n2; // The next number is the sum of the previous two 
		cout << sum << " ";
		
		// "Shift" the values forawrd for the next iteration
		n1 = n2;                       // The old n2 becomes the ne n1
		n2 = sum;					// the new sum becomes the ne n2
	}

	cout << endl;
	return 0;
}
