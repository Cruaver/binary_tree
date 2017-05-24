/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

int print_to(t_tree *tree, signed int nb) {

    printf("%d\n", tree->nb);
    while (tree->nb != nb) {
        if (nb >= tree->nb) {
            tree = tree->right;
            printf("%d\n", tree->nb);
        } else {
            tree = tree->left;
            printf("%d\n", tree->nb);
        }
    }
    return 0;
}

int print_tree(t_tree *tree) {

    if (tree->left)
        print_tree(tree->left);
    printf("%d\n", tree->nb);
    if (tree->right)
        print_tree(tree->right);

    return 0;
}
