#include "iostream"
using namespace std;
void lietke(int n);
int in_TamGiacSo(int height)
{ 
	for(int i=1;i<=height;i++) 
   		lietke(i); 
   	cout<<endl; 
} 
int main()
{ 
	int h;
   	do{ 
	   	cout<<endl<<"Nhap chieu cao tam giac so: ";
	  	cin>>h;  
	} while(h<=0); 
   	in_TamGiacSo(h);
   
} 
void lietke(int n)
{ 
	int i;  cout<<endl; 
   	for(i=n;i>0;i--) 
   	cout<<i<<" "; 
}


