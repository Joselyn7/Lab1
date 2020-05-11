//PROBLEMA 5
#include <iostream>
#include <cstring>
using namespace std;
void con(char *b,int t2,char *a,int t,int l)
{
	if(t2>0){
		*(b+t2+t-1)=*(b+t2-1);
		return con(b,--t2,a,t,l);
	}
	else if(t>0){
		*(b+t-1)=*(a+t-1);
		return con(b,t2,a,--t,l);
	} 
	for(int i=0;i<l;i++)
		cout<<*(b+i);
}
int main()
{
	char *a= new char[5];
	char *b= new char[10];
	cout<<"1:"; gets(a);
	cout<<"2:"; gets(b);
	int t=strlen(a) , t2=strlen(b), l=t+t2;
	con(b,t2,a,t,l);
}
