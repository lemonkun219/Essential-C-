#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//斐波那契数列的实现函数
//布尔类型来避免输入错误的索引值
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
//写一个选择器来让用户选择是持续计算还是一次性计算
	string se;
	int p, a;
	cout << "欢迎来到数组计算器" << endl;
	cout << "是否需要连续的计算数组？" << endl;
	cout << "(YES / NO):" << endl;
	cin >> se;
	cout << "请注意：请勿输入超过47的索引值" << endl;

	if (se == "YES")
	{
		cout << "请输入需要计算的索引值（输入0停止）：" << endl;
		while (1)
		{
			cin >> p;
			if (p == 0)//如果索引值为0就退出
				break;
			else if (str(p, a))//以函数为判断值来避免输入不正确索引值的情况
				cout << "第" << p << "号元素为" << a << endl;
			else
				cout << "请输入一个正确的索引值";
		}
	}
	else 
	{	
		cout << "请输入需要计算的索引值（输入0停止）：" << endl;
		cin >> p;
		if (str(p, a))
			cout << "第" << p << "号元素为" << a << endl;
		else
			cout << "请输入一个正确的索引值" << endl;
	}
	return 0;
}