#include<iostream>
using namespace std;

int main()
{
	int temp;
	int i;
	int list[] = { 1,2,3,4,5 };
	
	string temp1;
	
	cout << "�µ�=";
	cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4];

	//�������� �۵� �ý���
	cout << "[�������� �۵� �ý���]\n\n";
	for (i = 0; i < 5; i++)
	{
		temp = list[i];
		if (temp >= 40)
		{
			cout << i + 1 << "���� ȭ�簡 �����ϴ�. �������𷯸� �۵��߽��ϴ�.\n";
			temp1 = "Y";
			
		}
		else
		{
			cout << i + 1 << "���� ���� �Դϴ�.�ƹ��͵� ���� �ʴ´�.\n";

		}
		
	}

	
	//ȭ��溸��
	cout << "\n[ȭ��溸�� �۵� �ý���]\n\n";
	if (temp1 == "Y")
	{
		cout << "119�� �ڵ��Ű� �߽��ϴ�.\n\n";
		for (i = 0; i < 5; i++)
		{
			cout << i+1<<"���� �溸�Ⱑ �︳�ϴ�.\n";
			cout << "��ܺ� ��ȭ���� �ݾҽ��ϴ�.\n\n";
		}
	}
	else
	{
		cout << "�۵����� �ʴ´�.\n";
	}
}
