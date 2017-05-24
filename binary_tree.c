/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include "binary_tree.h"

void binary_tree(t_tree **tree, int nb) {

    t_tree *tree;

    t_tree *node = malloc(sizeof(t_tree));

    if (nb >= tree->nb) {
        node->nb = nb;
        node->right = *tree;
    } else {
        node->nb = nb;
        node->left = *tree;
    }
    *tree = node;
}