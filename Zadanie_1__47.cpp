// ������� 1 (�47).cpp: ���������� ����� ����� ��� ����������� ����������.
//// ����� ���������� ������ ����� ����� A �������� N �� M. ����� ������������ ���������, ������������� �� ������� ���������.

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{setlocale(LC_ALL,"russian");

int n=0; int m=0; int p=1; 
cout<<"������� ���������� �����"<<endl;
cin>>n;
cout<<"������� ���������� ��������"<<endl;
cin>>m;

int **A = new int*[n];
 for (int i=0; i<n; i++)
  { A[i]= new int[m];}

cout<<"������� �������� �������"<<endl;
for (int i=0; i<n; i++)
  {for (int j=0; j<m; j++)
{cout<<"A["<<i<<"]["<<j<<"]=";
	cin>>*(*(A+i)+j);}}

for (int i=0; i<n; i++)
 {for (int j=0; j<m; j++)
  {if (i==j) p=p*(*(*(A+i)+j));}}

  cout<<"������������ ���������, ������������� �� ������� ���������, ����� "<<p<<endl;

for (int i=0; i<n; i++)
{delete [] A[i];}
delete [] A;

	return 0;
}


