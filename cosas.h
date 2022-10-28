#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<ctime>
#include <pthread.h>


using namespace std;
string hola;

void *lectura( void *args)
{
    ifstream archivo;
    string nombre,text;
    

    archivo.open(hola,ios::in);
    if(archivo.fail())
    {
        cout<<"Algo salio mal"<<endl;
    }

    while(!archivo.eof()){
    getline(archivo,text);
    cout<<text<<endl;
    for(int i = (time(NULL) + 2); time(NULL) != i; time(NULL));
    }
    cout<<endl;
    archivo.close();
    pthread_exit(NULL);

}

void menu_whisky()
{
    cout<<"How would you like your Whiskey?"<<endl;
    cout<<" 1. Whiskey with tonic"<<endl;
    cout<<" 2. John Collins "<<endl;
    cout<<" 3. Irish coffee with cream "<<endl;
    cout<<" 4. Whiskey on the rocks "<<endl;
    }


void menu_tequila()
{
    cout<<"How would you like your Tequila?"<<endl;
    cout<<" 1. Charro Negro"<<endl;
    cout<<" 2. Mojito "<<endl;
    cout<<" 3. Paloma Grapefruit soda (Fresca) "<<endl;
    cout<<" 4. Classic Margarita "<<endl;
}


void menu_ron()
{
    cout<<"How would you like your Ron?"<<endl;
    cout<<" 1. Pina Colada"<<endl;
    cout<<" 2. Mojito "<<endl;
    cout<<" 3. Cuba Libre "<<endl;
    cout<<" 4. Daiquiri "<<endl;
}


void menu_beer()
{
    cout<<"How would you like your Beer?"<<endl;
    cout<<" 1. Black Velvet"<<endl;
    cout<<" 2. Coctel Monaco "<<endl;
    cout<<" 3. Michelada "<<endl;
    cout<<" 4. Just the Beer "<<endl;
    }

void chose_milk()
{
  
    pthread_t my_thread;
    int aux,res;  
      cin>>aux;
    switch(aux)
    {
        case 1:
        hola = "z4ChpcomilkS.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 2:
        hola = "z4ChocomilkB.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 3:
        hola = "z4MatchaL.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;

    }
}
void chose_coffee()
{
    pthread_t my_thread;
    int aux,res;
    cin>>aux;
    switch(aux)
    {
        case 1:
        hola = "z5Espresso.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 2:
        hola = "z5AmericanC.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 3:
        hola = "z5Capuccino.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 4:
        hola = "z5Frappe.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;


    }
}
void chose_fruit()
{
    pthread_t my_thread;
    int aux,res;
    cin>>aux;
    switch(aux)
    {
        case 1:
        hola = "z6OrangeJ.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 2:
        hola = "z6PineapleW.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 3:
        hola = "z6WatermelonW.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        case 4:
        hola = "z6Lemonade.txt";
        res = pthread_create(&my_thread,NULL,&lectura,NULL);
        pthread_join(my_thread, NULL);
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;


    }
}
void chose_alcohol()
{
    pthread_t my_thread;
    int aux,auxdos,res;
    cin>>aux;
    switch(aux)
    {
        case 1:
        menu_whisky();
        cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                hola = "zWhiskeyT.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 2:
                hola = "zJohnC.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 3:
                hola = "zCafeI.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 4:
                hola = "zWhiskeyO.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        case 2:
        menu_tequila();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                hola = "z1CharroN.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);
                break;
                case 2:
                hola = "z1Mojito.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);
                break;
                case 3:
                hola = "z1PalomaR.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);
                break;
                case 4:
                hola = "z1MargaritaC.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        case 3:
        menu_ron();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                hola = "z2PinaC.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 2:
                hola = "z2Mojito.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 3:
                hola = "z2CubaL.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 4:
                hola = "z2Daiquiri.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        case 4:
        menu_beer();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                hola = "z3BlackV.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 2:
                hola = "z3CoctelM.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 3:
                hola = "z3Michelada.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                case 4:
                hola = "z3JustT.txt";
                res = pthread_create(&my_thread,NULL,&lectura,NULL);
                pthread_join(my_thread, NULL);

                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;

    }
}
    


void menu_principal()
{
    cout<<"WELCOME TO YOUR FINDYOURDRINK BAR, WHICH OF THIS INGREDIENTS DO YOU HAVE? "<<endl;
    cout<<" --------- 1. Alcohol ------- "<<endl;
    cout<<" --------- 2. Fruit --------- "<<endl;
    cout<<" --------- 3. Milk ---------- "<<endl;
    cout<<" --------- 4. Coffee -------- "<<endl;
}

void menu_alcohol()
{
    cout<<" 1. Whisky "<<endl;
    cout<<" 2. Tequila "<<endl;
    cout<<" 3. Rum "<<endl;
    cout<<" 4. Beer "<<endl;
    chose_alcohol();

}

void menu_fruit()
{
    cout<<"What fruit do you like? "<<endl;
    cout<<" 1. Orange juice "<<endl;
    cout<<" 2. pineapple water "<<endl;
    cout<<" 3. Watermelon water "<<endl;
    cout<<" 4. lemonade "<<endl;
    chose_fruit();
}

void menu_milk()
{
    cout<<"How would you like to combine your milk with?"<<endl;
    cout<<" 1. Chocomilk (Simple) "<<endl;
    cout<<" 2. Chocomilk (With Banana) "<<endl;
    cout<<" 3. Matcha Latte "<<endl;
    chose_milk();

}

void menu_coffee()
{
    cout<<"How would you like your Coffee?"<<endl;
    cout<<" 1. Espresso"<<endl;
    cout<<" 2. American Coffee "<<endl;
    cout<<" 3. Cappuccino "<<endl;
    cout<<" 4. Frappe "<<endl;
    chose_coffee();

}


