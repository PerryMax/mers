#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "math.h"

using namespace std;

class calculating{
	//Данные:

	double x, y, z, u, result;
public:
	void Set(double X, double Y, double Z);
	void Run(void);
	void Print(void);
};
	
	void calculating::Set(double X, double Y, double Z)
	{
		x = X;
		y = Y;
		z = Z;
	}
	void calculating::Run(void){
		u = (powf(8+powf(abs(x-y),2)+1,1.0/3.0)/(powf(x,2)+powf(y,2)+2))-exp(abs(x-y))*powf(powf(tan(z),2)+1,x);
	}
	void calculating::Print(void){
		cout << "Результат (U): " << u << endl;
	}




int _tmain(int argc, _TCHAR* argv[])
{
	setlocale (LC_ALL, "");
	calculating obj1;
	cout << "Прямой вызов (первый обьект): " << endl;
	obj1.Set(-4.5,0.75*powf(10,-4),0.845*powf(10,2));
	obj1.Run();
	obj1.Print();

	calculating *UkazatelNaObj1 = &obj1;
	cout << "\nКосвенный вызов (первый обьект): " << endl;
	UkazatelNaObj1->Set(-4.5,0.75*powf(10,-4),0.845*powf(10,2));
	UkazatelNaObj1->Run();
	UkazatelNaObj1->Print();

	calculating *obj2 = new calculating;
	cout << "\nПрямой вызов (второй обьект): " << endl;
	(*obj2).Set(-4.5,0.75*powf(10,-4),0.845*powf(10,2));
	(*obj2).Run();
	(*obj2).Print();

	calculating *UkazatelNaObj2 = obj2;
	cout << "\nКосвенный вызов (второй обьект): " << endl;
	UkazatelNaObj2->Set(-4.5,0.75*powf(10,-4),0.845*powf(10,2));
	UkazatelNaObj2->Run();
	UkazatelNaObj2->Print();

	cin.get();
	return 0;
}


