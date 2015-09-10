// ������� 5 (�5).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"

using namespace std;
 
class X 
{
    protected:
        int *x1, *x2;
 
    public:
      
        X(int a, int b)
        {
            x1 = new int;
            x2 = new int;
            *x1 = a;
            *x2 = b;
        }
        
        virtual void view()
        {
            cout << "x1 = " << *x1 << " x2 = " << *x2 << endl;
        }
        
        virtual void set_new()
        {
			setlocale(LC_ALL, "rus");
            cout << "������� x1: ";
            cin >> *x1;
            cout << "������� x2: ";
            cin >> *x2;
        }
             
        ~X()
        {
            delete x1;
            delete x2;
		}
};
 
class Y:public X
{
    private:
        int *y;
        
    public:
        
        Y(int a, int b, int c):X(a,b) 
        {
            y = new int;
            *y = c;
        }
        
        virtual void view()
        {
			X::view();
            cout << " y = " << *y << endl;
        }
        
        virtual void set_new()
        {
			setlocale(LC_ALL, "rus");
            X::set_new();
            cout << "������� y: ";
            cin >> *y;
        }
        
        ~Y()
        {
            delete y;
        }
        
        void Run()
        {
			setlocale(LC_ALL, "rus");
            cout << "���������: " << ( *x1 + *x2 ) / *y << endl;
        }
};
 
int main()
{
	setlocale(LC_ALL, "rus");
	
    Y *p = new Y(0, 0, 1);
	cout << "����� ��������� � ��������� ������� p ������ Y" << endl;
	p->set_new(); 
    p->view();
    
	cout << "������ ������� (x + y)/y" << endl;
    p->Run();    
    
    delete p; 
	cout << "�������� ������� p ������ Y" << endl;
	cin.get();

	return 0;
}
