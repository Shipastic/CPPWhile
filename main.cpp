#include <iostream>	 // ���������� ��� �����/������ ������
#include <math.h>	 // ���������� ��� ����������� �������������� �������
using namespace std; //����������� ������������ ������������ ����
int main() 			 // ������� ������� ���������
{					 // ������ ���������
double x=-4.00,y,h=0.10;
cout.width(10);
cout.precision(4);
cout << "x";
cout.width(4);
cout<< "|";
cout.width(10);
cout.precision(4);
cout << "y" << "\n";
cout << "__________________________"<<endl;
while(x<=-2)
{
  if(x<-3) 
  y=pow(x,3)/(3+x);
    else 
	if(x==-3) 
	cout<<"Hi";
       else y=9*x-27*(log(3+x));
cout.width(10);
cout.precision(4);
cout << x;
cout.width(4);
cout<< "|";
cout.width(10);
cout.precision(4);
cout << y << "\n";
x+=h;
}
system("PAUSE");	 // �������� ������� ������� ��� ������ �� ���������
return 0;			 // ���������� ���������
}
