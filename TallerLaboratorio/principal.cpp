#include <iostream>
#include<string.h>
#include "funciones1.h"
#include "funciones1.cpp"
#define MAXL 1001
#define MAXC 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
void punto1();
void punto2();
void punto3();
void punto4();
void punto5();


int main(){
    int opcion;
    while (true){
        cout<<"SELECCIONE UNA OPCION"<<endl;
        cout<<"1 Potencia"<<endl;
        cout<<"2 Buqueda Fuerza Bruta"<<endl;
        cout<<"3 Ordenamiento Burbuja"<<endl;
        cout<<"4 Ordenamiento Seleccion"<<endl;
        cout<<"5 Emparejamiento Cadenas"<<endl;
        cout<<"0 Salir Programa"<<endl;
        cin>>opcion;
        switch(opcion){
        	case 0: exit(0); break;
            case 1: punto1();break;
            case 2:punto2();break;
            case 3:punto3();break;
            case 4:punto4();break;
            case 5:punto5(); break;
            default: cout<<"LA OPCION NO EXISTE"<<endl; break; 

        }
	}
}

void punto1(){
    int numero;
    int pot;
    cout << "DIGITE LA BASE" << endl;
    cin >> numero;
    cout << "DIGITE EL EXPONENTE" << endl;
    cin >> pot;
    int segundo=potencia(pot,numero);
    cout << "RESULTADO ES :"<< endl;
    cout << segundo<< endl;


}

void punto2(){
    int dato;
    int cardinalidad;
    int arreglo[]={1,2,3,4,5};
    cout << "INGRESAR DATO A BUSCAR" << endl;
    cin >> dato;
    cout << "INGRESAR CARDINALIDAD ARREGLO"<<endl;
    cin >> cardinalidad;
    int primero=busquedaFuerzaBruta(dato,cardinalidad, arreglo);
    cout << "SE ENCUENTRA EN LA POSICION :" << endl;
    cout << primero << endl;
}

void punto3(){
    int cardinalidad;
    int arreglo[]={28,6,1,2,98};
    cout << "INGRESAR CARDINALIDAD DEL ARREGLO" << endl;
    cin >> cardinalidad;
    ordenamientoBurbuja(arreglo,cardinalidad);
}

void punto4(){
    int cardinalidad;
    int arreglo[]={5,1,2,4,20};
    cout << "INGRESAR CARDINALIDAD DEL ARREGLO" << endl;
    cin >> cardinalidad;
    ordenamientoSeleccion(arreglo,cardinalidad);

}

void punto5(){
    char largo[MAXL];
    char corto[MAXC];
    cout<<"INGRESE TEXTO LARGO"<<endl;
    cin>>largo;
    cout<<"INGRESE TEXTO CORTO"<<endl;
    cin>>corto;
    int cardinalidad=strlen(largo);
    int cardinalidad2=strlen(corto);
    int resul=emparejamientoCadenas(largo,cardinalidad,corto,cardinalidad2);
    cout<<resul<<endl;
}
