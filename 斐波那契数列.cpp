#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//쳲��������е�ʵ�ֺ���
//��������������������������ֵ
bool str(int p, int& a)
{
	int i, str_1, str_2;
	str_1 = 1;
	str_2 = 1;
	if (p < 1)
	{
		return false;
	}
	else if (p < 3)
	{
		a = 1;
	}
	else
	{
		for (i = 0; i < p - 1; i++)
		{
			a = str_1 + str_2;
			str_2 = str_1;
			str_1 = a;
		}
	}
	return true;
}

int main()
{
//дһ��ѡ���������û�ѡ���ǳ������㻹��һ���Լ���
	string se;
	int p, a;
	cout << "��ӭ�������������" << endl;
	cout << "�Ƿ���Ҫ�����ļ������飿" << endl;
	cout << "(YES / NO):" << endl;
	cin >> se;
	cout << "��ע�⣺�������볬��47������ֵ" << endl;

	if (se == "YES")
	{
		cout << "��������Ҫ���������ֵ������0ֹͣ����" << endl;
		while (1)
		{
			cin >> p;
			if (p == 0)//�������ֵΪ0���˳�
				break;
			else if (str(p, a))//�Ժ���Ϊ�ж�ֵ���������벻��ȷ����ֵ�����
				cout << "��" << p << "��Ԫ��Ϊ" << a << endl;
			else
				cout << "������һ����ȷ������ֵ";
		}
	}
	else 
	{	
		cout << "��������Ҫ���������ֵ������0ֹͣ����" << endl;
		cin >> p;
		if (str(p, a))
			cout << "��" << p << "��Ԫ��Ϊ" << a << endl;
		else
			cout << "������һ����ȷ������ֵ" << endl;
	}
	return 0;
}