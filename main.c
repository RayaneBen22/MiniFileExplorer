#include <stdio.h>

int main()
{
    int choix;

    printf("============================\n");
    printf("     MINI EXPLORATEUR\n");
    printf("============================\n");

    printf("\n1. Afficher le dossier actuel\n");
    printf("2. Lister les fichiers\n");
    printf("3. Quitter\n");

    printf("\nVotre choix : ");
    scanf("%d", &choix);

    printf("Vous avez choisi : %d\n", choix);

    return 0;
}
