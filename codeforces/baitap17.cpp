#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
	string gioitinh;
	cout << "Chuong trinh xac dinh muc do khoe manh o mot nguoi! \n";
	cout << "Nhap gioi tinh (nam hoac nu): "; cin >> gioitinh;
	if ((gioitinh != "nam") && (gioitinh != "nu"))
		cout << "Nhap lai gioi tinh!";
	else
	{
		if (gioitinh == "nu")
		{
			double cannang, cotay, eo, hong, canhtay;
			cout << "Nhap can nang: "; cin >> cannang;
			cout << "Nhap kich thuoc co tay: "; cin >> cotay;
			cout << "Nhap kich thuoc eo: "; cin >> eo;
			cout << "Nhap kich thuoc hong: "; cin >> hong;
			cout << "Nhap kich thuoc canh tay: "; cin >> canhtay;
			double A1 = (cannang*0.732) + 8.987;
			double A2 = cotay/3.140;
			double A3 = eo*0.157;
			double A4 = hong*0.249;
			double A5 = canhtay*0.434;
			double B = A1 + A2 + A3 + A4 + A5;
			double luongmo = cannang - B;
			double ptluongmo = luongmo*100/cannang;
			cout <<"Luong mo trong co the la: "<<luongmo<<" va phan tram luong mo la: "<<ptluongmo;
		}
		else
		{	
			double cannang, cotay;
			cout << "Nhap can nang: "; cin >> cannang;
			cout << "Nhap kich thuoc co tay: "; cin >> cotay;
			double A1 = (cannang*1.082) + 94.42;
			double A2 = cotay*4.15;
			double B = A1 - A2;
			double luongmo = cannang - B;
			double ptluongmo = luongmo*100/cannang;
			cout <<"Luong mo trong co the la: "<<luongmo<<" va phan tram luong mo la: "<<ptluongmo;
		}
	}
	return 0;
}
