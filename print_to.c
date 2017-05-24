/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

void print_to(t_tree *tree, unsigned int nb) {
    if (!tree)
        return;

    if (tree->nb >= nb) {
        printf("%d\n", tree->nb);
        print_to(tree->right, nb);
    }
    else
        print_to(tree->left, nb);
}