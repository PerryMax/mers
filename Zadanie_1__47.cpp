// Задание 1 (№47).cpp: определяет точку входа для консольного приложения.
//// Задан двухмерный массив целых чисел A размером N на M. Найти произведение элементов, расположенных на главной диагонали.

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{setlocale(LC_ALL,"russian");

int n=0; int m=0; int p=1; 
cout<<"Введите количество строк"<<endl;
cin>>n;
cout<<"Введите количество столбцов"<<endl;
cin>>m;

int **A = new int*[n];
 for (int i=0; i<n; i++)
  { A[i]= new int[m];}

cout<<"Введите элементы массива"<<endl;
for (int i=0; i<n; i++)
  {for (int j=0; j<m; j++)
{cout<<"A["<<i<<"]["<<j<<"]=";
	cin>>*(*(A+i)+j);}}

for (int i=0; i<n; i++)
 {for (int j=0; j<m; j++)
  {if (i==j) p=p*(*(*(A+i)+j));}}

  cout<<"Произведение элементов, расположенных на главной диагонали, равно "<<p<<endl;

for (int i=0; i<n; i++)
{delete [] A[i];}
delete [] A;

	return 0;
}


