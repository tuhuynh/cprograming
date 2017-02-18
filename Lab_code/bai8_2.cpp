#include "iostream" 
using namespace std; 
const int KTMT=10; 
//khai bao cac ham con 
void nhap_1SoNguyen(int &k); 
void nhap_MaTran(int b[][KTMT], int m); 
void xuat_MaTran(int b[][KTMT], int m); 
int tong_DuongCheochinh(int b[][KTMT], int m); 
void xuat_nuamangvuong(int b[][KTMT], int m); 
int sophantuam(int b[][KTMT], int m);
int main()
{
	int a[KTMT][KTMT];  //khai bao so dong , so cot ma tran  
	int n;//m kich thuoc ma tran vuong  
	cout<<"\nNhap kich thuoc ma tran :";  
	nhap_1SoNguyen(n);  
	cout<<"\nNhap ma tran :"<<endl;  
	nhap_MaTran(a,n);  
	cout<<"\nMa tran nhap vao la :"<<endl;  
	xuat_MaTran(a,n);  
	cout<<"\nTong cac phan tu tren duong cheo chinh:";  
	cout<<tong_DuongCheochinh(a,n);  
	cout<<"\nCac PT thuoc nua mang vuong tren duong cheo chinh :";  
	xuat_nuamangvuong(a,n);  
	cout<<"\nSo phan tu la so am co trong ma tran : ";  
	cout<<sophantuam(a,n)<<endl; 
} 
	//viet dinh nghia cac ham con 
void nhap_1SoNguyen(int &k) 
{  
	do{   
		cout<<"\nNhap 1 so : ";   
		cin>>k;  
	}while(k<=0||k>KTMT); 
} 
void nhap_MaTran(int b[][KTMT], int m) 
{  
	for(int i=0;i<m;i++)   
		for(int j=0;j<m;j++)   
		{    
			cout<<"\nNhap PTu["<<i<<"]["<<j<<"]:";    
			cin>>b[i][j];   
		} 
} 
void xuat_MaTran(int b[][KTMT], int m) 
{  
	cout<<endl;  
	for(int i=0;i<m;i++)  
	{   
		for(int j=0;j<m;j++)
			cout<<b[i][j]<<"\t";
		cout<<endl;  
	} 
} 
int tong_DuongCheochinh(int b[][KTMT], int m) 
{  
	int s=0;  
	for(int i=0;i<m;i++)   
		s+=b[i][i];  
	return s; 
} 
void xuat_nuamangvuong(int b[][KTMT], int m) 
{  
	cout<<endl;  
	for(int i=0;i<m;i++)  
	{   
		for(int j=0;j<m;j++)    
			if(i<=j)     
				cout<<b[i][j]<<"\t";    
			else     
				cout<<"*"<<"\t";   
		cout<<endl;  
	} 
}
int sophantuam(int b[][KTMT], int m) 
{  
	int dem=0;  
	for(int i=0;i<m;i++)   
		for(int j=0;j<m;j++)    
			if(b[i][j]<0)  dem+=1;  
	return dem; 
}
		
		
		
		
		 

