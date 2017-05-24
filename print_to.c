/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

void print_to(t_tree *tree, unsigned int nb) {

    printf("%d\n", tree->nb);

    while (tree->nb != nb) {
        if (nb >= tree->nb) {
            tree = tree->right;
            printf("%d\n", tree->nb);
        }
        else {
            tree = tree->left;
            printf("%d\n", tree->nb);
        }
    }

}