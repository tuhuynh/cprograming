#include<iostream>
#include<string.h>
using namespace std;
	int main()
	{	char s[50];
		cout<<"Nhap chuoi:";
		cin.getline(s,50);
		while(s[0]==' ')
			strcpy(s,s+1);
		while (s[strlen(s)-1]==' ')
			s[strlen(s)-1]='\0';
		for(unsigned int i=0;i<strlen(s);i++)   
			if (s[i]==' ')   
			while (s[i+1]==' ')   
			{    //tinh tien chuoi phia sau len    
				for(unsigned int j=i+1;j<strlen(s);j++)     
					s[j]=s[j+1];    
					s[strlen(s)]='\0';   
			}
		cout<<" Chuoi da xu ly:"<<s;
   		cout<<"\nDo dai chuoi:"<<strlen(s);
	}



