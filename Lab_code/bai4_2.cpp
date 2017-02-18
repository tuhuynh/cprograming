#include "iostream"
using namespace std; 
int main()
{ 
	int a,b,c,s;
    char thoat; 
	do{ 
		cout<<"\nNhap a:"; 
	    cin>>a; 
		cout<<"\nNhap b:"; 
		cin>>b;
		cout<<"\nNhap c:";
		cin>>c;
		s=a*a+b*b*b+4*(a+c)*b;
   		cout<<"\nGia tri bieu thuc can tinh la:"<<s<<endl;  
    	cout<<"Ban muon thoat khoi CT? Nhap Y hoac y de thoat"; 
	  	cin>>thoat;  
	} while(( thoat!='Y') && (thoat !='y'));
}




