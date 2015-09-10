
  // ������� 6 (�5).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"

using namespace std;

template <class type> class Array{
	type *t,*newt;
	int size;
	public:
		Array();
		~Array();
		void set(int n,type q[]);
		void view();
		void viewnew();
		void run();
};

template <class type> Array<type>::Array()
{
	cout << "--�������� ������������... ���������." << endl;
}

template <class type> Array<type>::~Array()
{
	delete t;
	delete newt;
	cout << "--����������." << endl;
}

template <class type> void Array<type>::set(int n,type q[])
{
	t = new type [n+1];
	for(int i=1; i<n+1; i++)
	{
		t[i]=q[i];
	}
	size=n+1;
	cout << "--�������� �������... ���������." << endl;
}

template <class type> void Array<type>::view()
{
	cout << "�������� ������: ";
	for(int i=1;i<size;i++)
	{
		cout << t[i] << "  ";
	}
	cout << endl << endl;
}

template <class type> void Array<type>::run()
{
 newt = new type [size];
	for(int i=0;i<size;i++)
	{
		newt[i]=pow(-1,i)*t[i];
	}	
}

template <class type> void Array<type>::viewnew()
{
	cout << "������ �������� ���������: ";
	for(int i=1;i<size;i++)
	{
		cout << newt[i] << "  ";
	}
	cout << endl << endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n;
	int *n1 = new int[n + 1];
	char type[10];
	cout << "������� ����������� �������: ";
	cin >> n;
rpt:cout << "������� ��� ������, � ������� ����������� �������� (int, float, double, char � ��.):";
	cin.getline(type, 10);
	if (type == "int"){ int *n1 = new int[n + 1]; }
	if (type == "char"){ char *n1 = new char[n + 1]; }
	if (type == "double"){ double *n1 = new double[n + 1]; }
	if (type == "float"){ float *n1 = new float[n + 1]; }
	else {cout << "������� ������� ��� ����, ���������� ��� ���:"; goto rpt;
}
	for(int i=1;i<n+1;i++)
	{
		cout << "������� n["<<i<<"]: ";
		cin >> n1[i];
	}
	if (type == "int"){
		Array<int> object;
		object.set(n, n1);
		object.view();
		object.run();
		object.viewnew();
	}
	/*if (type == "char"){
		Array<char> object;
		object.set(n, n1);
		object.view();
		object.run();
		object.viewnew();
	}
	if (type == "double"){
		Array<double> object;
		object.set(n, n1);
		object.view();
		object.run();
		object.viewnew();
	}
	if (type == "float"){
		Array<float> object;
		object.set(n, n1);
		object.view();
		object.run();
		object.viewnew();
	}*/

	cin.get();
	return 0;
}