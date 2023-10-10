#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	
	string user,pass,usuario = "sistema",password = "admin01";
	char seguir,opc;
	int multiplicacion, numero,i;
	cout<<"bienvenid@ al sistema;\n";
	cout<<"incresa tu usuario"<<endl;
	cin>>user;
	cout<<"ingresa tu password"<<endl;
	cin>>pass;
	if(user == usuario && pass == password){
		do{
			cout <<"porfavor ingresa el numero de la tabla a inprimir: ";
			cin>>numero;
			for(int i=1;i<=10;i++){
				multiplicacion=i*numero;
				cout<<numero<<"x"<<i<<"="<<multiplicacion<<endl; 
			}
			cout<<"quieres generar otra tabla(s7n)?";
		    fflush(stdin);
	        cin>>seguir; 
		}
		while(seguir!='n');
			int h = 0 , m = 0 , s = 0;
	while(1){
		
		if(s>=60){
			s = 0;
			m++;
			
		if(m>=60);{
			m = 0;
			h++;
		}	
	}
	system("cls");
	cout<<h<<":"<<m<<":"<<s;
	Sleep(10);
	s++;		
	}
	cin.get();
}
	
	else {
		cout<<"usuario incorrecto";
	}
	cin.get();
	return 0;
}
