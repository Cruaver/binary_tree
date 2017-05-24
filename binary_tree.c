/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include "binary_tree.h"

void binary_tree(t_tree **trees, unsigned int nb) {

    t_tree *tmpnode;
    t_tree *tree;
    t_tree *node;

    node = malloc(sizeof(t_tree));
    tree = *trees;
    node->nb = nb;
    node->right = NULL;
    node->left = NULL;

    if (tree)
        do {
            tmpnode = tree;
            if (nb >= tree->nb) {
                tree = tree->right;
                if (!tree)
                    tmpnode->right = node;
            } else {
                tree = tree->left;
                if (!tree)
                    tmpnode->left = node;
            }
        } while (tree);
    else
        *trees = node;
}
