/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

void print_to(t_tree *tree, int nb) {
    while (tree->nb != nb) {
        if (tree->nb > nb) {
            printf("%d\n", tree->nb);
        }
        tree = tree->right;
    }
}