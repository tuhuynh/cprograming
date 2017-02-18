#include "iostream"
using namespace std; 
void hoanvi(char &m, char &n) 
{ 
	char t=m;
   	m=n;
   	n=t; 
}
int main()
{ 
	char a,b; 
    cout<<"\n Nhap ky tu 1:"; 
    cin>>a; 
    cout<<"\n Nhap ky tu 2:";
    cin>>b;
    cout<<"\nKy tu 1 va 2 truoc khi goi ham hoanvi la: ";
    cout<<"\nky tu 1: "<<a<<" Ky tu 2: "<<b<<endl;
    hoanvi(a,b);	
    cout<<"\nKy tu 1 va 2 sau khi goi ham hoanvi la: ";
    cout<<"\nKy tu 1: "<<a<<" \tKy tu 2: "<<b;
 } 
 
 
 
