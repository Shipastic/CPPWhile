#include <iostream>	 // ���������� ��� �����/������ ������
#include <math.h>	 // ���������� ��� ����������� �������������� �������
using namespace std; //����������� ������������ ������������ ����
int main() 			 // ������� ������� ���������
{					 // ������ ���������
double x,y,h=0.1;
cout.width(10);
cout.precision(2);
cout << "x";
cout.width(4);
cout<< "|";
cout.width(10);
cout.precision(2);
cout << "y" << "\n";
cout << "__________________________"<<endl;
for(x=-4; x<=-2; x+=h)
{
  if(x<-3) y=pow(x,3)/(3+x);
    else 
	if(x==-3) cout<<"Hi";
       else y=9*x-27*(log(3+x));
cout.width(10);
cout.precision(2);
cout << x;
cout.width(4);
cout<< "|";
cout.width(10);
cout.precision(2);
cout << y << "\n";
}
system("PAUSE");	 // �������� ������� ������� ��� ������ �� ���������
return 0;			 // ���������� ���������
}
