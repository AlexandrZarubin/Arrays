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
	//arr[1] = 1024;//обращение к элементу массива на запись 
	//arr[3] = 3072;
	//cout << arr[1] << endl;//обращение к элементу массива на чтение
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // LESSON


#ifdef NUMBERS_FROM_KEYBOARD
	int arrays1[n]{0,1,2,3,4};
	cout << "Введите пять чисел\n";
	/*for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива\n";
		cin >> arrays1[i];
	}*/
	cout << "\n\tВы ввели числа\n";
	for (int i = 0; i < n; i++)
	{
		cout << arrays1[i] << "\t";
	}
	cout << endl<<endl;

	cout << "\tВ обратном порядке\n";

	for (int i = n-1; i >= 0; i--)
	{
		cout << arrays1[i] << "\t";
	}
	cout << endl << endl;
	cout << "Вычисляет сумму элементов массива\n";
	int Summa = 0;//счетчик суммы
	for (int i = 0; i < n; i++)
	{
		Summa += arrays1[i];
	}
	cout << "Сумма массива\t"<<Summa<<"\n";
	cout << endl;
	cout << "вычисляет среднее-арифметическое элементов массива\n";
	double Average = 0.;
	Average = Summa / n;
	cout << "среднее-арифметическое " << Average << endl;
	cout << endl;
	cout << "находим минимальное и максимальное значение в массиве\n";
	int Max = 0; //счетчик макс
	int Min = 0; //счетчик мин
	for (int i = 0; i < n; i++)
	{
		if (arrays1[i] > Max)Max = arrays1[i];
		if (arrays1[i] < Min)Min = arrays1[i];
	}
	cout << "максимальное значение " << "- "<<Max<<" -" << " минимальное значение " << "- "<<Min<<" -" << endl;
#endif // NUMBERS_FROM_KEYBOARD



}