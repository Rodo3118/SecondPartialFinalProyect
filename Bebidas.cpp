#include <iostream>
#include "cosas.h"
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <pthread.h>
using namespace std;

int main()
{  
int x,res;
char r;
do
{
    menu_principal();
     cin>>x;

        switch(x)
    {
        case 1:
        menu_alcohol();
        break;
        case 2:
        menu_fruit();
        break;
        case 3:
        menu_milk();
        break;
        case 4:
        menu_coffee(); 
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;
    }
    cout<<"Would you like to see another recipe?"<<endl;
    cout<<"Type Y for Yes or N for no"<<endl;

    cin>>r;
}while((r=='y'||r=='Y'));
    cout<<"Gracias, vuelva Pronto!"<<endl;
}