#include <iostream>

using namespace std;

void shell(int* arr, int len)
{
    int part = len / 2;

	while (part > 0)
	{
		for (size_t i = 0; i < len - part; i++)
		{
			int j = i;
			while (j >= 0 && arr[j] > arr[j + part])
			{
				int temp = arr[j];
				arr[j] = arr[j + part];
				arr[j + part] = temp;

				--j;
			}
		}
		part = part / 2;
	}
}

int arr[16] = { 1, 4, 5, 2, 5, 3, 11, 3, 5, 10, 11, 4, 15, 13, 11, 9 };

int main()
{
	/*Third task*/
	int len = sizeof(arr) / sizeof(arr[0]);
	shell(arr, len);
	int last = 0;
	int count = 1;
	int ans = 0;
	int maxCount = 1;
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] == last)
		{
			++count;
		}
		else
		{
			if (maxCount < count)
			{
				maxCount = count;
				ans = last;
			}
			last = arr[i];
			count = 1;
		}
	}
	if (maxCount < count)
	{
		maxCount = count;
		ans = last;
	}

	cout << ans << endl;
	

	return 0;
}