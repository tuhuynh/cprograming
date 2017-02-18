#include "iostream"
using namespace std; 
void capnhat(int a, int b) ;
int main()
{
	int n, m;  
    cout<<"\nNhap so nguyen thu nhat : "; 
    cin>>n;
	cout<<"\nNhap so nguyen thu hai : ";
	cin>>m;
	cout<<"\nHai so nguyen nhap vao la: "<<n<<"\t"<<m<<endl; 
	capnhat(n,m); 
	cout<<"\nHai so nguyen cap nhat moi: "<<n<<"\t"<<m<<endl;
}
void capnhat(int a, int b) 
	{ 
		if(a>b)   
			a+=b/2;
	  	else   
		  	b+=a/3;
	  	cout<<"\nTrong ham cap nhat: a="<<a<<" b="<<b; 
	}
	
	
	
	
