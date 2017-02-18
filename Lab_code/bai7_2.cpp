#include "iostream" 
# define MAX 5
using namespace std; 
void nhap_Mang(int b[]); 
void xuat_Mang(int b[]); 
void dao(int &x,int &y);
void sapxep(int b[],int n);
int main()
{
	int a[MAX];
	nhap_Mang(a);
	cout<<"\n Mang vua nhap la:"<<endl;
	xuat_Mang(a);
	sapxep(a, MAX);
	cout<<"\n Mang sau khi sap xep lai:"<<endl;
	xuat_Mang(a);
}
void nhap_Mang(int b[]) 
{  
	int i;  
	cout<<"nNhap gia tri cho mang:";  
	for(i=0;i<MAX;i++)  
	{   
		cout<<"\nNhap phan tu thu :"<<i<<": ";   
		cin>>b[i];  
	} 
} 
void xuat_Mang(int b[]) 
{ 
	cout<<"\nCac phan tu mang: ";  
	for(int i=0;i<MAX;i++)   
		cout<<b[i]<<"\t";  
	cout<<endl; 
} 
void dao (int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
void sapxep(int a[ ], int n)
{
	int i;
	for (i = 0; i <= n /2; i++)
		dao(a[i], a[n-i-1]) ;
}



