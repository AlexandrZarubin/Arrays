#include<iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	
	int NumberA = 10, NumberB = 45;
	cout << "Число А " << NumberA << "\t" << "Число В " << NumberB << "\n";
	NumberA ^= NumberB;
	NumberB ^= NumberA;
	NumberA ^= NumberB;
	cout <<"Число А "<< NumberA << "\t" <<"Число В " << NumberB << "\n";
	
	
	int a = 0, b = 1, c = 0;
	const int size = 10;
	int Array[size]{};
	//заполненме массива
	for (int i = 0; i < size; i++)
	{
		Array[i] = c;
		a = b;
		b = c;
		c = a + b;
		
	}
	//Вывод массива
	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << "\t";
	}
	cout << endl;
	//Смещение массива
	int Shift = 0;
	cout << "Введите на сколкь сместить массив влево "; cin >> Shift;
	for (int i = 0; i < Shift; i++)
	{
		
		/*int FirstElement = Array[0];
		for (int j = 0; j < size-1; j++)
		{
			Array[j] = Array[j + 1];
		}
		Array[size - 1] = FirstElement;//Ставим первый элемент в самы конец
		*/
		
		for (int j = 0; j < size-1 ; j++)
		{
			Array[j] ^= Array[j + 1];
			Array[j + 1] ^= Array[j];
			Array[j] ^= Array[j + 1];
		}
		
		//Вывод каждый раз массива
		for (int k = 0; k < size; k++)
		{
			cout << Array[k] << "\t";
		}
		cout << endl;
	}
}
