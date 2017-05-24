/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

void print_to(t_tree *tree, unsigned int nb) {
    while (tree) {
        if (tree->nb >= nb) {
            print_to(tree->left, nb);
            printf("%d\n", tree->nb);
            print_to(tree->right, nb);
        }
    }
}