#include <iostream>
using namespace std;
const int MAXIMO = 100;
int indice = 0;

//definimos la estructura Persona con sus elementos que ingresaremos.
struct Persona {
    char apellido[100];
    int edad;
};

//funciones con la que vamos a trabajar.
void adicionarPersonas(Persona p[]);
void listarPersonas(Persona[]);
void menuDeOpciones(Persona[]);

int main() {
    Persona personas[MAXIMO];
    menuDeOpciones(personas);

    return 0;
}

//función del menú de opciones
void menuDeOpciones(Persona per[]) {
    int opt;
    do {
    
        cout << "\tMENU DE OPCIONES:\n\n";
        cout << "Ingresar Personas  [1]\n";
        cout << "Listar Personas    [2]\n";
        cout << "Salir del sistema  [3]\n";

        cout << "\nIngrese su opcion: ";
        cin >> opt;
        cin.ignore();

        switch (opt) {
            case 1:
                adicionarPersonas(per);
                break;

            case 2:
                listarPersonas(per);
                break;

            case 3:
                cout << "Gracias por usar nuestro sistema, vuelva pronto.";
                break;

            default:
                cout << "Por favor, ingrese una opcion correcta [1-5]";
        }
    } while (opt!=5);
}

//función para adicionar las personas
void adicionarPersonas(Persona p[]) {
    int opt;

    do {
        cout << "\nIngrese el apellido: ";
        cin.getline(p[indice].apellido, 100);
        cout << "Ingrese la edad: ";
        cin >> p[indice].edad;
        cin.ignore();
        indice++;

        cout << "\nSi desea continuar, ingrese [1]. Si no desea continuar, ingrese del [2] al [9]: ";
        cin >> opt;
        cin.ignore();
    } while (opt == 1);

}

//función para listar las personas
void listarPersonas(Persona p[]) {
    cout << "\tLOS DATOS SON:" << endl << endl;
    for (int i = 0; i < indice; i++) {
        cout << "---> Apellido: " << p[i].apellido << endl;
        cout << "---> Edad: " << p[i].edad << endl << endl;
    }
   
}