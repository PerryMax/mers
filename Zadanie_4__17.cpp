// Задание 4 (№17).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "fstream"
#include "ostream"

using namespace std;

class String{
	
public:
	char *S1, *S2;
String();
~String();
void *Set();
void *Print();
void *Run();

void operator =(char);

};

String::String()
{
	S1 = new char[255];
	S2 = new char[255];
};

String::~String()
{
	delete S1, S2;
};

void String::operator =(char)
{ 
	strcpy_s(S2, strlen(S1), S1);
}

void *String::Set()
{
		for(int i = 0; i < 255; i++)
		{S1[i] = '\0';
		 
		S2[i] = '\0';} 
	cout << "Введите исходную строку:" << endl;
	cin.getline(S1,255);
	return 0;
}

void *String::Run()
{
	int i=0;
	if(strlen(S1) % 2 == 0){
		for (i; i<strlen(S1); i++)
		{if (S1[i]==' ')
		for (int j=0; i<strlen(S1); j++, i++)
		{S2[j]=S1[i+1];}}
	}
	else S2=S1;

	return 0;
}

void *String::Print()
{
	cout << "Исходная строка: " << S1 << endl;
	cout << "Получившеяся строка: " << S2 << endl;
	return 0;
}



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_ALL, "Russian");
	
	cout << "Прямой вызов методов: " << endl;
	String str;
	str.Set();
	str.Run();
	str.Print();
	cout<<strlen(str.S1)<<endl;
	cout<<strlen(str.S2)<<endl;
	cout << "Косвенный вызов методов: " << endl;
	String *Tostr = new String;
	Tostr->Set();
	Tostr->Run();
	Tostr->Print();
	
	ofstream result;
	result.open("CodeStr.txt");
	result << str.S1 << "\n" << str.S2;
	result.close();

	return 0;
}
