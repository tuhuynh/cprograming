#include "iostream"
using namespace std; 
int main()
{  
	int n,i,ketqua==1; 
   	do {
		 	cout<<"\nNhap so nguyen duong n:";  
	  		cin>>n;
   	} while (n<=0);
    for(i=1;i<=n;i++)        
		ketqua*=i;   
	cout<<"\n Tich can tinh la: "<<ketqua; 
} 


