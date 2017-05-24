/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

void print_to(t_tree *tree, int nb) {

    while (tree) {

        printf("%d\n", tree->nb);
        if (nb >= tree->nb) {
            tree = tree->right;
        } else
            tree = tree->left;

    }
}