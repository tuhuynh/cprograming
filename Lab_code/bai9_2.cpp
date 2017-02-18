#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{	char s1[50],s2[50];
	int p;
	cout<<"Nhap chuoi s1:";
	cin.getline(s1,50);
	cout<<"Nhap chuoi s2:";
	cin.getline(s2,50);
	p=strcmp(s1,s2);
	if (p<0) 
		cout<<"s1 nho hon s2";
	else 	if (p==0) cout<<"s1=s2";
	else cout<<"s1 lon hon s2";
	strcat(s1,s2);
	cout<<"\nChuoi sau khi ghep la:";
	cout<<endl<<s1;
}


