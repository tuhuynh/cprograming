#include "iostream" 
using namespace std; 
int main()
{ 
	//CT xet mot so co phai so hoan thien hay khong
	//So hoan thien la so co tong cac uoc so bang chinh no
	int n,sum=0;
    do{ 
	   cout<<"\nNhap n>2:";
	   cin>>n;  
	} while(n<=2);
	int i=0;
	do{
		i++;
	   	if (n%i==0) sum+=i;
	} while (i<n); 
	if (sum==2*n)    
		cout<<"\n"<<n<<" la so hoan thien.";  
	else    
		cout<<"\n"<<n<<" khong la so hoan thien."; 
} 



