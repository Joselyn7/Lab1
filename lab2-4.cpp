//PROBLEMA 4
#include <iostream>
using namespace std;
int tamano(char cad[],int pos)
{
	if(cad[pos]!='\0')
		return tamano(cad,++pos);
	return pos;
}
void tamano_i(char cad[])
{
	int pos=0;
	for(int i=0;cad[i]!='\0';i++)
		pos++;
	cout<<"tamano iterativo:"<<pos;
}
int main()
{
	char cad[]={"Caracol"};
	cout<<"Tamano:"<<tamano(cad,0);
	cout<<endl;
	tamano_i(cad);
}

