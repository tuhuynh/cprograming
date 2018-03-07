/*
	Chuong trinh minh hoa cach dung vector trong c++
	chuc nang: 
	- tinh tong cac phan tu nhap vao
	- nhap vao so phan tu cua vector
	- tinh tong cac phan tu va xuat ra tong do
	- Phuong phap dung vector khac phuc van de phai biet truoc 
	so luong cac phan tu trong mang 1 chieu
	- Chuong trinh cho thay cac thao tac co ban khi dung voi vector

*/
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	int value;
	std::vector<int> v;
	cout<<"So luong cac gia tri nhap vao: ";
	cin>>n;
	cout<<"Nhap vao gia tri\n";
    for(int i=0;i<n;i++)
    {
    	cin>>value;
    	v.push_back(value); //them 1 phan tu vao vector
    }

//Thuc hien tinh tong dung iterator.
    std::vector<int>::iterator vp=v.begin(); //khai bao iterator tro vao dau vector v
    int Sum=0;
    
    for(vp=v.begin();vp!=v.end();vp++) //duyet tu dau den cuoi vector
    	Sum+=*vp;
    cout<<"Tong cac gia tri nhap vao la: "<<Sum<<endl;

	return 0;
}