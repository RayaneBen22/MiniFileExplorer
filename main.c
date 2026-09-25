#include <stdio.h>
#include <direct.h>

int main()
{
    int choix;
    char chemin[500];

    printf("============================\n");
    printf("     MINI EXPLORATEUR\n");
    printf("============================\n");

    printf("\n1. Afficher le dossier actuel\n");
    printf("2. Lister les fichiers\n");
    printf("3. Quitter\n");

    printf("\nVotre choix : ");
    scanf("%d", &choix);

    switch (choix) {
    case 1:
    if (getcwd(chemin, sizeof(chemin)) != NULL)
    {
        printf("Dossier actuel : %s\n", chemin);
    }
    else
    {
        printf("Erreur : impossible de recuperer le dossier actuel.\n");
    }
    break;
    case 2:
        printf("Lister Les fichier\n");
        break;
    case 3:
        printf("Au revoir!\n");
        break;
    default:
        printf("Choix Invalid.\n");
        break;}

    return 0;
}
