#include "iostream" 
using namespace std; 
int main() 
{  
	float diemtb;
	char xeploai;
	cout<<"Nhap diem trung binh cua sinh vien ";
	cin>>diemtb;
	if (diemtb >= 90)  
		xeploai = 'A'; 
	else if (diemtb >= 80) 
		xeploai = 'B';  
	else if (diemtb >= 70)              
		xeploai = 'C';  
	else if (diemtb >= 60)              
		xeploai = 'D';  
	else              
		xeploai = 'E'; 
	cout<<"\nXep loai: "<<xeploai;
 } 
 
 
 
 
