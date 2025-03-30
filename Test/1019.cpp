#include<iostream>

int main()
{
	int pages = 0, tendigit = 0, temp = 0, temp2 = 0;
	int arr[]{1,2,3,4,5,6,7,8,9};

	std::cin >> pages;

	for (int i = 1; i < pages; i *= 10)
	{
		temp = pages % (i * 10) / i;
		temp2 = pages % (i * 10);

		for (int j = 0; j <= temp; j++)
		{

			for (int k = 0; k <= 8; k++)
			{
				if (temp == k && 1 <= 8)
				{
					if (k < 8)
						arr[k + 1] += 1;
				}


				if (k > 8)
					arr[k] += 1;
				else
				{
					//arr[9] += i / 10;
				}
			}
		}

	}

	for (auto ar : arr)
		std::cout << ar << " ";
}