#include <iostream>
using namespace std;
int main() 
{
 int sair = 4;
 float saldo = 0, deposito, saque;

 //Entrada
  cout<<"Olá, deseja continuar a operação? (Digite 4 para sair)"<<endl;
  cin>>sair;
  
 while(sair != 4 )
 {
  if(sair == 1) {
    cout<<"Seu saldo é de R$ "<<saldo<<endl;
  }
  else if(sair == 2){
    cout<<"Favor digitar o valor que deseja depositar: ";
    cin>>deposito;
    saldo = saldo + deposito;
  }
  else{
    cout<<"Favor digitar o valor que deseja sacar: ";
    cin>>saque;
    saldo = saldo - saque;
  }
   cout<<"Deseja continuar?";
   cin>>sair;
  }
  cout<<"Obrigado!";
  return 0;
  }
  
 

