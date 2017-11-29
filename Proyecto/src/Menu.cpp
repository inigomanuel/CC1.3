#include "Menu.h"

void Menu::Preguntar()
{
    int usuario;
    cout<<"1) Ingresar Animal"<<endl;
    cout<<"2) Ingresar Personal"<<endl;
    cout<<"3) Modificar Registro de Animales"<<endl;
    cout<<"4) Modificar Registro de Personal"<<endl;
    cout<<"5) Visualizar Registro de Animales"<<endl;
    cout<<"6) Visualizar Registro de Personal"<<endl;
    cout<<"7) Creditos"<<endl;
    cout<<"8) Salir del Programa"<<endl;
    cout<<""<<endl;
    cout<<"Que desea hacer?"<<endl;
    cin>>usuario;
        switch (usuario)
            {
                case 1:
                    system("cls");
                    //ingresar_animales();
                    break;
                case 2:
                    system("cls");
                    //ingresar_personal();
                    break;
                case 3:
                    system("cls");
                    //modificar_registro_de_animales();
                    break;
                case 4:
                    system("cls");
                    //modificar_registro_del_personal();
                    break;
                case 5:
                    system("cls");
                    //visualizar_registro_de_animales();
                    break;
                case 6:
                    system("cls");
                    //visualizar_registro_del_personal();
                    break;
                case 7:
                    system("cls");
                    Creditos();
                    break;
                case 8:
                    system("cls");
                    break;
            }
}
void Menu::Title()
{
    cout<<" ___ ___         __               __                    __           "<<endl;
    cout<<"|   |   |.-----.|  |_.-----.----.|__|.-----.---.-.----.|__|.---.-.   "<<endl;
    cout<<"|   |   ||  -__||   _|  -__|   _||  ||     |  _  |   _||  ||  _  |   "<<endl;
    cout<<" \\_____/ |_____||____|_____|__|  |__||__|__|___._|__|  |__||___._|   "<<endl;
    cout<<"                                                                     "<<endl;
    cout<<""<<endl;
    cout<<" _______         __                                           "<<endl;
    cout<<"|   |   |.---.-.|  |_.---.-.-----.-----.----.----.-----.-----."<<endl;
    cout<<"|       ||  _  ||   _|  _  |  _  |  -__|   _|   _|  _  |__ --|"<<endl;
    cout<<"|__|_|__||___._||____|___._|   __|_____|__| |__| |_____|_____|"<<endl;
    cout<<"                           |__|                               "<<endl;
}

void Menu::Creditos()
{
    cout<<"Esta Base de Datos fue creada por el estudiante: "<<endl;
    cout<<""<<endl;
    cout<<"Inigo Diez Canseco Fuentes "<<endl;
    cout<<""<<endl;
    cout<<"Copyright"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    Preguntar();
}

void Menu::Body()
{
    int usuario=0;
    cout<<""<<endl;
    Preguntar();
}
