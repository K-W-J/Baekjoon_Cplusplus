#include<iostream>
#include<string>

using namespace std;

int main(){


	//17.문자열

	int a, sum = 0;

	cin >> a;

	int* b = new int[a];

	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		sum += b[i];
	}

	delete[] b;

	char temp = to_string(sum)[0];

	cout << to_string(sum).erase(0, 1) + temp;




	//18. 문자열

	//string a,b;
	//int cut = 0;

	//cin >> a;
	//cin >> b;

	//for (int i = 0; i < a.length(); i++)
	//{
	//	if (cut > a.length())
	//	{
	//		cut = -1;
	//		break;
	//	}
	//	else if (a[i] != b[i])
	//	{
	//		cut++;
	//		i = 0;

	//		char temp;
	//		temp = b.back();
	//		b.pop_back();
	//		b = temp + b;
	//	}
	//}

	//cout << cut;

	//19. 문자열

	//string a, b;
	//cin >> a >> b;
	//cout << (int)a[0] << " " << (char)stod(b);



}