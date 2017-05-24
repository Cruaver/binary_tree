/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include "binary_tree.h"

void binary_tree(t_tree **tree, unsigned int nb) {

    t_tree *tmpnode;
    t_tree *tmptree;
    t_tree *node;

    node = malloc(sizeof(t_tree));
    tmptree = *tree;
    node->nb = nb;
    node->right = NULL;
    node->left = NULL;

    if (tmptree) {
        tmpnode = tmptree;
        if (nb > tmptree->nb) {
            tmptree = tmptree->right;
            if (!tmptree)
                tmpnode->right = node;
        } else {
            tmptree = tmptree->left;
            if (!tmptree)
                tmpnode->left = node;
        }
    }
    else *tree = node;
}