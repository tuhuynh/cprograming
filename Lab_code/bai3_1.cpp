#include "iostream"
using namespace std; 
int main()
  { int n,i,ketqua=1; 
    cout<<"\nNhap so nguyen n:";  
	cin>>n;
	if(n>0) 
	   { for(i=1;i<=n;i++)        ketqua*=i;   
		 cout<<"\n Tich can tinh la: "<<ketqua<<endl; }
	else   cout<<"\n So vua nhap la ko duong. Ket thuc!"<<endl; 
	system("pause"); } 
