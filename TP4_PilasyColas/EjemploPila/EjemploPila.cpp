
/* INSERTAR Y SACAR ELEMENTOS EN UNA PILA */



#include<iostream>

#include<conio.h>

#include<stdlib.h>

using namespace std;



/* Se crea una estructura de nombre "nodo" que contendra un puntero tipo nodo

   de nombre "siguiente". Recordar que un puntero puede guardar una estructura

   completa */

struct nodo{

 int dato;

 nodo *siguiente;

};



void FuncionPila(nodo *&, int);

void SacarPila(nodo *&, int &);



int main(){

 int n;

 nodo *primero=NULL;

 

 cout<<"Digite un numero: ";

 cin>>n;

 FuncionPila(primero, n);

 

 cout<<"Digite un numero: ";

 cin>>n;

 FuncionPila(primero, n);

 

 cout<<"Digite un numero: ";

 cin>>n;

 FuncionPila(primero, n);

 

 cout<<endl<<endl;

 

 /* Debido a que la pila se debe vaciar, se ejecuta un while que llamara a

    la funcion "SacarPila" hasta que "primero" sea NULL*/

 while(primero != NULL){

  SacarPila(primero, n);

  if(primero!=NULL){

   cout<<n<<" , ";

  }

  else{

   cout<<n<<".";

  }

 }

 

 getch();

 return 0;

}



void FuncionPila(nodo *&primero, int n){

 /* Se crea un puntero dinamico de tipo nodo, para que contenga todas las

    variables de la estructura, y se separa espacio para el */

 nodo *nuevo=new nodo();



 /* Se guarda el dato ingreasdo por el usuario en el entero "dato" de la

    estructura "nuevo" */

 nuevo->dato=n;



 /* Se copia el puntero "primero" en el puntero "siguiente" del puntero

    "nuevo" */

 nuevo->siguiente=primero;



 /* "primero" se convierte en el puntero "nuevo" que contiene dentro de si

    el dato ingresado y el puntero "primero" adjunto en "siguiente" */

 primero=nuevo;



 /* El siguiente es un ejemplo de lo que hace esta parte del programa para

    3 datos digitados:

    

    PRIMER DATO

    

    nuevo=prmero

       dato-----10

       sig------primero

                   dato-----NULL

                   sig------NULL

     

     SEGUNDO DATO

     

     nuevo=primero

        dato-----20

        sig------primero

                    dato-----10

                    sig------primero

                                dato-----NULL

                                sig------NULL

    

    TERCER DATO

    

    nuevo=primero

       dato-----30

       sig------primero

                  dato-----20

                  sig------primero

                             dato-----10

                             sig------primero

                                        dato-----NULL

                                        sig------NULL

 */

}



void SacarPila(nodo *&primero, int &n){

 /* Siguiendo con el ejemplo anterior, se crea un puntero tipo nodo de

    nombre "sacar" el cual se iguala al puntero "primero", que contiene el

    ultimo dato ingresado y tres punteros "primero" anidados en el puntero

    "siguiente" */

 nodo *sacar=primero;



 /* n es igual al "dato" del puntero "sacar", que al estar convertido en

    "primero", su dato es 30, segun el ejemplo a seguir. */

 n=sacar->dato;



 /* En este paso se iguala "primero" con el grupo de punteros anidadas en

    "siguiente" del puntero "sacar", de acuerdo al ejemplo anterior "primero"

    quedaria de la siguiente forma: 

    

    primero

        dato-----20

        sig------primero

                    dato-----10

                    sig------primero

                                dato-----NULL

                                sig------NULL

 */

 primero=sacar->siguiente;



 /* Se elimina el puntero "sacar", para que quede vacio para una siguiente

    extraccion */

 delete sacar;

 

 /* Nota: estos pasos se deben repetir hasta vaciar la pila, es por eso que se

    ejecuta un while en la rutina main. */

}