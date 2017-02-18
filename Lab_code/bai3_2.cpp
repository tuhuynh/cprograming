#include "iostream" 
using namespace std; 
int main()
{ 
  	int n=1, tich=1;
  	cout<<"\nChuong trinh tinh tich cac so nguyen";
    while (n!=0) 
	{ 
		tich*=n; 
	    cout<<"\nHay nhap mot so nguyen khac 0 de tinh tich";
		cout<<"\nNeu nhap 0 se thoat khoi chuong trinh ";
		cin>>n;
	} 
	cout<<"\nTich cac so nguyen khac 0 vua nhap la: "<<tich; 
}


