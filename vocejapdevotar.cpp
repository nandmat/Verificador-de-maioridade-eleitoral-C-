#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");

	int anoAtual, anoNasc, idade;
	cout<<"Ano atual: ";
	cin>>anoAtual;
	cout<<"Ano de nascimneto: ";
	cin>>anoNasc;
	idade=anoAtual-anoNasc;
	
	if(idade>=16)
	{
		cout<<"Voc� tem: "<<idade<<" anos."<<"Voc� j� pode votar!";
	}
	else
	{
		cout<<"Voc� tem apenas: "<<idade<<" anos."<<"Ainda n�o pode votar!";
	}
	
}
