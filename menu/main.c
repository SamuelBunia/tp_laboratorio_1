#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    do
    {
        printf("1. Crear usuario\n2. Eliminar Usuario\n3.Mostrar Usuario\n4.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Usuario creado...\n");
            break;
            case 2:
                printf("Usuario eliminado...\n");
            break;
            case 3:
                printf("Usuario mostrado...\n");
            break;
            case 4:
                printf("Gracias por usar nuestro programa chau\n");
            break;

        }

    }while(opcion!=4);




    return 0;
}

