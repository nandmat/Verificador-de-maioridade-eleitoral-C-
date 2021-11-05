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
		cout<<"Você tem: "<<idade<<" anos."<<"Você já pode votar!";
	}
	else
	{
		cout<<"Você tem apenas: "<<idade<<" anos."<<"Ainda não pode votar!";
	}
	
}
