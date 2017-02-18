#include "iostream"
using namespace std; 
int giai_PTBacNhat(int a, int b, float &t);
int main()
{ 
	int a,b; 
   	cout<<"\nNhap so nguyen a : "<<endl; 
	cin>>a;
   	cout<<"\nNhap so nguyen b : "<<endl;
	cin>>b; 
   	float x; 
   	int k=giai_PTBacNhat(a,b,x);
   	if(k==-1)   
	   	cout<<"\nPhuong trinh vo nghiem!"; 
   	else if(k==0)   
	   	cout<<"\nPhuong trinh co vo so nghiem!"; 
   	else
   		cout<<"\nPhuong trinh co nghiem duy nhat x = "<<x<<endl; 
}
int giai_PTBacNhat(int a, int b, float &t)
{ 
	if(a==0) 
    {   
		if(b==0) return 0; 
	    else   return -1;  
	} 
   	else  
	{ 
        t=(float)-b/a;  
    	return 1;  
	} 
}




