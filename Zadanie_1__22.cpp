 // ������� 1 (�22).cpp: ���������� ����� ����� ��� ����������� ����������.
// ����� ������ �(10). �������� �� ���� ������ �, ��������� �� ��������� ������� �, ������� ������ 0.

#include "stdafx.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{setlocale(LC_ALL,"russian");

  int k=0, j=0, l=10;
  int *A = new int[l];
 
cout << "������� �������� ������� �:" << endl;  
do
{for (int i=0; i<l; i++) 
  {
	cout<<"A["<<i<<"]= ";
    cin >> *(A+i);
	if (*(A+i)<0) k++;
    if ((k==0) & (i==(l-1))) cout<<"� ������� � ��� ������������� �����. ������� �������� ������� A �����"<<endl;
}}
while (k==0);
 
  
  int *B= new int[k];
  for (int i=0; i<l; i++) 
  {
    if (*(A+i)<0) {
      *(B+j)=*(A+i);
	  j=j+1;
    }
  }
 cout<<"�������� ������� �:"<<endl;
  for (int j=0; j<k; j++) {
    cout<<"B["<<j<<"]= "<<*(B+j)<<endl;
  }
 
  delete []A;
  delete []B;

	return 0;
}



