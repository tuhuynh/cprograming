#include "iostream" 
using namespace std; 
//Khai bao cac ham 
void nhap_MaTran(int b[][3]); 
void xuat_MaTran(int b[][3]);
int tim_max(int b[][3]);  
int main() 
{  
	//khai bao ma tran 2 dong 3 cot 
	int a[2][3];  
	cout<<"\nNhap ma tran:"<<endl;  
	nhap_MaTran(a);  
	cout<<"\nMa tran nhap vao la:"<<endl;  
	xuat_MaTran(a);
	cout<<"Phan tu lon nhat cua ma tran la: "<<tim_max(a);
} 
//ham nhap ma tran 
void nhap_MaTran(int b[][3]) 
{  
	cout<<"\nNhap gia tri cho cac phan tu"<<endl;  
	for(int i=0;i<2;i++)  
		for(int j=0;j<3;j++)   
		{   
			cout<<"\nNhap phan tu "<<"["<<i<<"]["<<j<<"]:";    
			cin>>b[i][j];   
		} 
} 
//ham xuat ma tran 
void xuat_MaTran(int b[][3]) 
{  
	cout<<endl;  
	for(int i=0;i<2;i++)  
	{   
		for(int j=0;j<3;j++)    
			cout<<b[i][j]<<"\t";   
		cout<<endl;  
	} 
}
//Ham tim max 
int tim_max(int b[][3])  
{  
	int max=b[0][0];
	for (int i = 0; i < 2; i++)       
		for (int j = 0; j < 3; j++)            
			if (b[i][j] > max)                       
				max=b[i][j];
	return max;
}

