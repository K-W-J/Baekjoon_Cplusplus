#include<iostream>

int main()
{
	int pages = 0, temp = 0, temp2 = 1;
	int arr[10]{0};

	std::cin >> pages;

	for (int i = pages; i > 0; i = i / 10) // 223
	{
		temp = pages % 10; // 3 2 2

		if (pages != i) //일의 자리수가 아니라면
			temp2 *= 10;

		for (int j = 0; j <= temp; j++)
		{
			for (int k = 0; k < 10; k++)
			{	
				if(j == 0 && j == k) //일의 자리수라면
					arr[k + 1] += 1;
				else if (j == k)
					arr[k] += 1 + temp;
			}
		}
	}

	//for (int i = 1; i < pages; i *= 10)
	//{
	//	temp = pages % (i * 10) / i;
	//	temp2 = pages % i;

	//	
	//	for (int j = 1; j <= temp; j++) // temp의 자릿수 만큼 반복
	//	{
	//		if (temp2 == 0) //일의 자리수면 (일의 자리수)만 반복
	//		{
	//			arr[j] += 1;
	//			continue;
	//		}
	//		else //아니면 현재 자리수 동안 (현재 자리수의 한 칸 뒤 자리수 + 1) 반복
	//		{
	//			if(temp == arr[j])
	//				arr[j] += temp2 + 1; // 32에서 30 31 32 이므로 2 + 1
	//			else
	//				arr[j] += i; // 32에서 10, 11 ~ 18, 19 이므로 10
	//		} 

	//		for (int k = 1; k <= 9; k++) // 1~9 페이지 숫자 세기
	//		{
	//			arr[k] += 1;
	//		}
	//	}
	//	arr[0] += temp * i / 10; // 0의 자릿 수 계산
	//}

	for (auto ar : arr)
		std::cout << ar << " ";
}