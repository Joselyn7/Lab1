//PROBLEMA 6
#include <iostream>
#include <cstring>
using namespace std;
void copiar(char *a,char *b,int t,int l)
{
	if(t>0){
		*(b+t-1)=*(a+t-1);
		return copiar(a,b,--t,l);
	}
	cout<<"b:";
	for(int i=0;i<l;i++)
		cout<<*(b+i);
}
int main()
{
	char *a=new char[10];
	char *b=new char[10];
	cout<<"a:";
	gets(a);
	int t=strlen(a),l=t;
	copiar(a,b,t,l);
}
