#include "iostream" 
using namespace std; 
void nhap_Mang(int b[]); 
void xuat_Mang(int b[]); 
void xuat_Sochan(int b[]);
void sapxep_Mang(int b[]); 
int main() 
{  
	//khai bao mang so nguyen co toi da 10 phan tu  
	int a[10];   
	nhap_Mang(a);
	xuat_Mang(a);
	cout<<"Cac so chan co trong mang la:";
	xuat_Sochan(a);
	sapxep_Mang(a);
	cout<<"\nMang sau khi sap xep theo thu tu tang dan la:"<<endl;
	xuat_Mang(a);	 
} 
void nhap_Mang(int b[]) 
{  
	int i;  
	cout<<"nNhap gia tri cho mang:";  
	for(i=0;i<10;i++)  
	{   
		cout<<"\nNhap phan tu thu :"<<i<<": ";   
		cin>>b[i];  
	} 
} 
void xuat_Mang(int b[]) 
{ 
	cout<<"\nCac phan tu mang: ";  
	for(int i=0;i<10;i++)   
		cout<<b[i]<<"\t";  
	cout<<endl; 
} 
void xuat_Sochan(int b[]) 
{  
	for(int i=0;i<10;i++)   
		if(b[i]%2==0)  
			cout<<b[i]<<"\t";  
	cout<<endl; 
}  
void sapxep_Mang(int b[]) 
{  
	int i,j;  
	for (i=0; i<10; i++)      
		for (j=i+1; j<10; j++)            
			if (b[i] > b[j])                       
			{  
				int t=b[i] ; 
				b[i]=b[j] ;  
				b[j]= t;  
			}  
}
