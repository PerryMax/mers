// ������� 2 (�5).cpp: ���������� ����� ����� ��� ����������� ����������.
//  ��� x=-15.246, y=0,04642 , z=2000.1  a=-182.036.

#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace std;

class math 
{
	float x, y, z, a;

public:
	void SetX(float);
	void SetY(float);
	void SetZ(float);
	void print();
	void Run();
}

void math:: SetX(float xx) {x=xx;}
void math:: SetY(float yy) {y=yy;}
void math:: SetZ(float zz) {z=zz;}
void math:: print() {cout<<endl<<"x="<<x<<", y="<<y<<", z="<<z<<". a="<<a;}
void math:: Run() 
{a=log(powf(y, (-1)*sqrt(abs(x))))*(x - y/2) + sin(atan(z))*sin(atan(z));}

void print();
void Run();


int _tmain(int argc, _TCHAR* argv[])
{
//����������� ������ �������:
 math r;
  //������ ������
    r.print();
    r.SetX(-15.246);
    r.SetY(0.04642);
    r.SetZ(2000.1);
    r.Run();
    r.print();
  //��������� ������
    math *pr;
    pr=&r;
    pr->print();
    pr->SetX(-15.246);
    pr->SetY(0.04642);
    pr->SetZ(2000.1);
    pr->Run();
    pr->print();


//������������ ������ ��������
 math *rr = new math;
  //������ ������
    (*rr).print();
    (*rr).SetX(-15.246);
    (*rr).SetY(0.04642);
    (*rr).SetZ(2000.1);
    (*rr).Run();
    (*rr).print();
  //��������� ������
    rr->print();
    rr->SetX(-15.246);
    rr->SetY(0.04642);
    rr->SetZ(2000.1);
    rr->Run();
    rr->print();
 delete rr;

   	return 0;
}

