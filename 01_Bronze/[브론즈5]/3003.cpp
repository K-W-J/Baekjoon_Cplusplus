#include<iostream>

int main()
{
	int inputChessArr[6]{0};
	int baseChessArr[]{1,1,2,2,2,8};

	for (int i = 0; i < 6; i++)
	{
		std::cin >> inputChessArr[i];

		if (inputChessArr[i] != baseChessArr[i])
		{
				inputChessArr[i] = (inputChessArr[i] - baseChessArr[i]) * -1;
		}
		else
		{
			inputChessArr[i] = 0;
		}
	}


	for (auto a : inputChessArr)
	{
		std::cout << a << " ";
	}
}