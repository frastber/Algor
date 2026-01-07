#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int arr[]{ 4,3,6,2,5 };

	for (int i = 0; i < 4; ++i)
	{
		int smallest = i;
		for (int j = i + 1; j < 5; ++j)
		{
			if (arr[j] < arr[smallest])
				smallest = j;
		}
		int ch = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = ch;
	}

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << ' ';

	return 0;
}
