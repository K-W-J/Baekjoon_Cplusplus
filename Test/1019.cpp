#include<iostream>

int main()
{
	long pages = 0, temp = 0, temp2 = 1, temp3 = 0;
	long arr[10]{0};

	std::cin >> pages;

	for (long i = pages; i > 0; i = i / 10) // 223
	{
		temp = i % 10; // 3 2 2


		if (pages != i) //���� �ڸ����� �ƴ϶��
			temp2 *= 10;

		temp3 = pages % temp2;


		for (int j = 0; j <= temp; j++)
		{
			for (int k = 0; k < 10; k++)
			{	
				if (j == 0 && j == k) //���� �ڸ����̰� 0 �������� ���´ϱ� ����
					break;

				if (j == k && temp2 < 10) //���� �ڸ��� ���� ����
				{
					arr[k] += 1;
					break;
				}

				if(temp2 >= 10)
				{
					arr[k] += temp + temp2 / 10;
				}

				if(temp2 >= 10 && temp3 >= k)
					arr[j] += temp + temp2 / 10; // 23���� 10 11 ~ 18 19���� 1�� ����


				//std::cout << "E";

			}
		}

		//if(temp2 >= 10)
			//arr[temp] += temp3;
	}

	for (auto ar : arr)
		std::cout << ar << " ";


	//for (int i = 1; i < pages; i *= 10)
	//{
	//	temp = pages % (i * 10) / i;
	//	temp2 = pages % i;

	//	
	//	for (int j = 1; j <= temp; j++) // temp�� �ڸ��� ��ŭ �ݺ�
	//	{
	//		if (temp2 == 0) //���� �ڸ����� (���� �ڸ���)�� �ݺ�
	//		{
	//			arr[j] += 1;
	//			continue;
	//		}
	//		else //�ƴϸ� ���� �ڸ��� ���� (���� �ڸ����� �� ĭ �� �ڸ��� + 1) �ݺ�
	//		{
	//			if(temp == arr[j])
	//				arr[j] += temp2 + 1; // 32���� 30 31 32 �̹Ƿ� 2 + 1
	//			else
	//				arr[j] += i; // 32���� 10, 11 ~ 18, 19 �̹Ƿ� 10
	//		} 

	//		for (int k = 1; k <= 9; k++) // 1~9 ������ ���� ����
	//		{
	//			arr[k] += 1;
	//		}
	//	}
	//	arr[0] += temp * i / 10; // 0�� �ڸ� �� ���
	//}

}