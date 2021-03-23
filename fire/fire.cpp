#include<iostream>
using namespace std;

int main()
{
	int temp;
	int i;
	int list[] = { 1,2,3,4,5 };
	
	string temp1;
	
	cout << "온도=";
	cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4];

	//스프링쿨러 작동 시스템
	cout << "[스프링쿨러 작동 시스템]\n\n";
	for (i = 0; i < 5; i++)
	{
		temp = list[i];
		if (temp >= 40)
		{
			cout << i + 1 << "층에 화재가 났습니다. 스프링쿨러를 작동했습니다.\n";
			temp1 = "Y";
			
		}
		else
		{
			cout << i + 1 << "층은 정상 입니다.아무것도 하지 않는다.\n";

		}
		
	}

	
	//화재경보기
	cout << "\n[화재경보기 작동 시스템]\n\n";
	if (temp1 == "Y")
	{
		cout << "119에 자동신고 했습니다.\n\n";
		for (i = 0; i < 5; i++)
		{
			cout << i+1<<"층에 경보기가 울립니다.\n";
			cout << "계단별 방화문을 닫았습니다.\n\n";
		}
	}
	else
	{
		cout << "작동하지 않는다.\n";
	}
}
