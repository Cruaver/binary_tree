/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>

void print_to(t_tree *tree, nb) {

    while (tree) {

        printf("%d\n", tree->nb);
        tree = tree->right;
        tree = tree->left;

    }
}