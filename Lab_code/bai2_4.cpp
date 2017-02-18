#include "iostream" 
using namespace std; 
int main() 
{  
	char ten[15];  
	float diemtoan, diemvan, diemtb;  
	cout<<"\n Cho biet Ten hv:";  
	cin.getline(ten,15);  
	cout<<"\n Nhap Diem Toan:";  
	cin>>diemtoan;  
	cout<<"\n Nhap Diem Van:";  
	cin>>diemvan;  
	diemtb=(diemtoan*2+ diemvan)/3;//tinh diem trung binh  
	//xu ly ket qua xep loai tai day.  
	cout<<"\n Chuong trinh tinh diem trung binh"<<endl;  
	cout<<"Ho ten: "<<ten<<endl;  
	cout<<"Toan: "<<diemtoan<<endl;
	cout<<"Van: "<<diemvan<<endl;  
	cout<<"Diem TB: " <<diemtb<<endl;  
	if(diemtb<5)   
		cout<<"\nKet qua: Rot!"<<endl;  
	else//diem tb>=5  
	{   
		cout<<"\nKet qua: Dau!"<<endl;   
		if(diemtb>=9)    
			cout<<"\nXep loai: Xuat sac"<<endl;   
		else if(diemtb>=8)    
			cout<<"\nXep loai: Gioi"<<endl;   
		else if(diemtb>=7)    
			cout<<"\nXep loai: Kha"<<endl;   
		else    
			cout<<"\nXep loai: Trung binh"<<endl;  
	} 
} 



	
