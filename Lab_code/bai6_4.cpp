#include "iostream" 
using namespace std; 
int kiemtra_SoNguyenTo(int k);
void in_UocSo(int k);
int main()
{ 
	int n; 
   	do { 
		cout<<"\nNhap 1 so nguyen duong ...";    
		cin>>n;   
	} while (n<=0);
   	if(kiemtra_SoNguyenTo(n)==1) 
   		cout<<"\n"<<n<<" la so nguyen to."<<endl;
   	else  
	{   
		cout<<"\n"<<n<<" khong la so nguyen to."; 
     	cout<<"\nCac Uoc So < "<<n<<" la:";
		in_UocSo(n);   
	} 
}
int kiemtra_SoNguyenTo(int k) 
{ 
	if(k<2)   	return 0;
    for(int i=2;i<k;i++)   
		if(k%i==0)   return 0;
	return 1; 
} 
void in_UocSo(int k)
{ 	cout<<endl; 
    for(int i=1;i<k;i++)   
		if(k%i==0)    cout<<i<<"\t";  
} 
  
  
  
