/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

void print_to(t_tree *tree, unsigned int nb) {

    /*
        if (!tree)
        return;
    if (tree->left)
        print_to(tree->left, nb);
    printf("%d\n", tree->nb);
    if (tree->right)
        print_to(tree->right, nb);
    */

    while (tree) {
        if (nb == tree->nb) {
            printf("%d\n", tree->nb);
            break;
        }
        if (nb > tree->nb)
            tree = tree->right;
        else
            tree = tree->left;
    }

}