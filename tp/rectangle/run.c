#include <stdio.h>
#include <stdlib.h>

/**
 * Rectangle main function, runs the application
 *
 * @param int argc      number of CLI arguments
 * @param char*[] argv  list of arguments as strings
 * @return int
 * @throw -1 if no dimension in program entry
 */
int run(int argc, char* argv[])
{
    if (argc < 3) {
        printf("Longueur et largeur du rectangle requises en entrée.\n");
        return -1;
    }

    int longueur = atoi(argv[1]);
    int largeur = atoi(argv[2]);

    printf("Périmètre du rectangle : %d\n", 2 * (longueur + largeur));

    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < largeur; j++) {
            printf("o ");
        }
        printf("\n");
    }

    return 0;
}
