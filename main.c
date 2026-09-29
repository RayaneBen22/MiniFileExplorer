#include <stdio.h>
#include <direct.h>
#include <dirent.h>
int main()
{
    int choix;
    char chemin[500];
    char nouveauChemin[500];

    printf("============================\n");
    printf("     MINI EXPLORATEUR\n");
    printf("============================\n");

    printf("\n1. Afficher le dossier actuel\n");
    printf("2. Lister les fichiers\n");
    printf("3. Changer de dossier\n");
    printf("4. Quitter\n");

    do {
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
{
    DIR *dossier;
    struct dirent *element;

    dossier = opendir(".");

    if (dossier == NULL)
    {
        printf("Erreur : impossible d'ouvrir le dossier.\n");
        break;
    }

    while ((element = readdir(dossier)) != NULL)
    {
        printf("%s\n", element->d_name);
    }

    closedir(dossier);
    break;
}
    case 3:
    printf("Entrez le chemin du dossier : ");
    scanf("%499s", nouveauChemin);

    if (_chdir(nouveauChemin) == 0)
    {
        printf("Dossier change avec succes.\n");
    }
    else
    {
        printf("Erreur : impossible de changer de dossier.\n");
    }
    break;
    case 4:
        printf("Au revoir!\n");
        break;}
        } while (choix != 4);

    return 0;
}
