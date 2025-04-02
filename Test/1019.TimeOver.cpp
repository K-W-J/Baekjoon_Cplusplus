#include<iostream>
#include<string>

int main()
{
	long pages = 0, temp = 0, temp2 = 1, temp3 = 0;
	long arr[10]{ 0 };

	std::cin >> pages;

	for (long i = 1; i <= pages; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			std::string add = std::to_string(i);

			for (auto a : add)
			{
				if (a - '0' == j)
					arr[j] += 1;
			}
		}
	}

	for (auto ar : arr)
		std::cout << ar << " ";
}