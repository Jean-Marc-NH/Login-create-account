#include "libreria.hpp"

int main(){
    system("cls");

    int opt{0};
    bool bandera{false};
    string texto = "Ingrese:\n\t[1]Login\n\t[2]Crear Cuenta\n\t[Otro]salir\n\n>>>> ";

    perdirNum(opt, texto);     

    cuenta inicio;
    inicio.admin();

    switch (opt-1)
    {
    case 0:
        inicio.login();
        bandera = inicio.compAdmin();
        break;
    case 1:
        inicio.crearCuenta();
        break;
    default:
        return 0;
    }

    if (bandera)
    {
    
        system("cls");

        opt = 0;
        texto = "Que desea hacer:\n\t[1]Ver cuentas\n\t[2]Eliminar cuenta\n\t[3]Entrar a la cuenta\n\t[Otro]Salir\n\t>>>> ";

        perdirNum(opt, texto);

        switch (opt-1)
        {
        case 0:
            system("cls");
            inicio.mostrarCuentas();
            break;
        case 1:
            inicio.eliminarCuentas();
            break;
        case 2:
            break;
        default:
            break;
        }
    }
}