#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;
    int majeur=0;
    int jouer=1;

    while(jouer==1)
    {

        printf("Voulez-vous jouer ?\n");
        scanf("%d", &jouer);
        if(jouer)
        {

        printf("Quel est votre age ?");
        scanf("%d", &age);
        majeur= age >= 18;
        printf("Majeur vaut : %d\n", majeur);

        }
        else
        {
            printf("Merci d'avoir joue.");
        }

    }
}
