//Arrays
#include<iostream>
//#define LESSON
#define NUMBERS_FROM_KEYBOARD
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	const int n = 5;
#ifdef LESSON
	int arr[n]{ 3,5,8 };
	//arr[1] = 1024;//��������� � �������� ������� �� ������ 
	//arr[3] = 3072;
	//cout << arr[1] << endl;//��������� � �������� ������� �� ������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // LESSON


#ifdef NUMBERS_FROM_KEYBOARD
	int arrays1[n]{0,1,2,3,4};
	cout << "������� ���� �����\n";
	/*for (int i = 0; i < n; i++)
	{
		cout << "������� " << i + 1 << " ������� �������\n";
		cin >> arrays1[i];
	}*/
	cout << "\n\t�� ����� �����\n";
	for (int i = 0; i < n; i++)
	{
		cout << arrays1[i] << "\t";
	}
	cout << endl<<endl;

	cout << "\t� �������� �������\n";

	for (int i = n-1; i >= 0; i--)
	{
		cout << arrays1[i] << "\t";
	}
	cout << endl << endl;
	cout << "��������� ����� ��������� �������\n";
	int Summa = 0;//������� �����
	for (int i = 0; i < n; i++)
	{
		Summa += arrays1[i];
	}
	cout << "����� �������\t"<<Summa<<"\n";
	cout << endl;
	cout << "��������� �������-�������������� ��������� �������\n";
	double Average = 0.;
	Average = Summa / n;
	cout << "�������-�������������� " << Average << endl;
	cout << endl;
	cout << "������� ����������� � ������������ �������� � �������\n";
	int Max = 0; //������� ����
	int Min = 0; //������� ���
	for (int i = 0; i < n; i++)
	{
		if (arrays1[i] > Max)Max = arrays1[i];
		if (arrays1[i] < Min)Min = arrays1[i];
	}
	cout << "������������ �������� " << "- "<<Max<<" -" << " ����������� �������� " << "- "<<Min<<" -" << endl;
#endif // NUMBERS_FROM_KEYBOARD



}