#include "iostream" 
using namespace std; 
int main()
{ 
	int n=1; 
    while (n<=1)
	{ 
		cout<<"\n Nhap so nguyen lon hon 1: "; 
	    cin>>n;  
	} 
	int i,kq=0;
	for(i=2;i<n;i++) 
		if(n%i==0) 
		 {
		 	cout<<n<<" khong la so nguyen to!"<<endl; 
		 	kq=1;
		 	break;
		 }
	    if(kq==0)  
			cout<<n<<" la so nguyen to!";
} 


