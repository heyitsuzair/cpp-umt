// 13. Index divide or not

#include <iostream>
using namespace std;
int main()
{
	int divisor;
	cout << "Enter divisor" << endl;
	cin >> divisor;

	int arr[5] = {55, 64, 75, 95, 123};
	int copied[5];

	for (int i = 0; i < 5; i++)
	{
		// Purpose: check whether each element of array is divisible by divisor or not, if true, copy the element of array to another array (copied array)
		if (arr[i] % divisor == 0)
		{
			copied[i] = arr[i];
		}
	}

	cout << "Elements that are divisible by " << divisor << endl;

	for (int j = 0; j < 5; j++)
	{
		// Purpose: Ignore those elements that are not divisible, hence they are 0 by default if they are not found divisible
		if (copied[j] != 0)
		{
			cout << copied[j] << " ";
		}
	}

	system("pause");
	return 0;
}
