#include <iostream>
#include<string>
using namespace std;

string ProcesaPalabra(string palabra);
int main()
{
	string palabra;
	cout<<"ingrese palabra"<<endl;
	getline(cin,palabra);
	
	cout<<ProcesaPalabra(palabra)<<endl;
	 
	return 0;
}

string ProcesaPalabra(string palabra)
{
	for(int i=0; i<palabra.size();i++)
	{
		if(palabra[i] == 'a'  )
		{
		 palabra[i]='b';
		}
	}
	palabra.erase (palabra.size()-1);
	return palabra;
}

