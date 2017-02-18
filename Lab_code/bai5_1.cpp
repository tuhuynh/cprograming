#include "iostream"
using namespace std; 
void lietke_So(int n);
int main()
{ 
	int k;
    do{ 
       cout<<endl<<"Nhap so nguyen duong: ";
	   cin>>k;  
	} while(k<=0);  
	lietke_So(k);
}
void lietke_So(int n)
{ 
   	int i;
	cout<<endl; 
	for(i=1;i<=n;i++)  
	 	if (i%2==0) 
		 	cout<<i<<" "; 
} 


