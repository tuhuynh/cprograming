#include "iostream"
using namespace std; 
void nhap_SoNguyen(int &); 
int tinh_BieuThuc(int, int);
int main()
{ 
	int x=0, y=0;
	nhap_SoNguyen(x);
	nhap_SoNguyen(y);
    int s=tinh_BieuThuc(x,y); 
    cout<<"\nGia tri bieu thuc la: "<<s;
} 
void nhap_SoNguyen(int &m)
{  
	do{
    	cout<<"\nNhap so nguyen duong: ";
	  	cin>>m;  
	} while(m<=0);
}
int tinh_BieuThuc(int x, int y)
{  
	int ketqua=1;  
    for(int i=1;i<=x;i++)   
		ketqua*=i;  
    ketqua-=6*y;
    return ketqua;
}



   
   
   
   
