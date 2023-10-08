// C++ program to check if given array is has
// any even number
#include <iostream>
using namespace std;

bool checkIfAnyEven(int arr[], int n)
{
	bool flag = false;
	for (int i=0; i<n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

int main()
{
int arr[] = {1, 3, 9, 5, 11, 7};
int n = sizeof(arr)/sizeof(arr[0]);

if (checkIfAnyEven(arr, n))
	cout << "Yes";
else
	cout << "No";
}
