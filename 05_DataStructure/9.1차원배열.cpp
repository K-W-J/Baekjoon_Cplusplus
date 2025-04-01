#include<iostream>

int main()
{
	int a, b;

	std::cin >> a;

	int* arr = new int[a];

	int arr2[2];


	for (int i = 0; i < a; i++)
	{
		std::cin >> *(arr + i);
	}

	for (int i = 0; i < a; i++)
	{
		if (i - 1 < 0)
			b = arr[1] - arr[0];

		if(b > arr[i] - arr[i - 1])
			b = arr[i] - arr[i - 1];
	}

	std::cout << b;

	delete arr;
}