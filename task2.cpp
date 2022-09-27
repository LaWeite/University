#include <iostream>

using namespace std;

bool binsearch(int* arr, int x, int n)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int q = (left + right) / 2;
		if (arr[q] == x)
		{
			return true;

		}
		else if (arr[q] > x)
		{
			right = q - 1;
		}
		else if (arr[q] < x)
		{
			left = q + 1;
		}
	}
	return false;
}

int main()
{
	/*Second task*/
	int* arr1;
	int* arr2;
	int n = 0;
	int k = 0;
	cin >> n >> k;
	arr1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr1[i] = rand();
	}

	arr2 = new int[k];
	for (int i = 0; i < k; i++)
	{
		arr2[i] = rand();
	}

	for (size_t i = 0; i < k; i++)
	{
		binsearch(arr1, arr2[i], n);
	}

	return 0;
}