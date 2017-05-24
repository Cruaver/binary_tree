/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include "binary_tree.h"

int binary_tree(t_tree **trees, signed int nb) {

    t_tree *tmpnode;
    t_tree *tree;
    t_tree *node;

    node = malloc(sizeof(t_tree));
    tree = malloc(sizeof(t_tree));
    if (node != NULL && tree != NULL) {
        tree = *trees;
        node->nb = nb;
        node->right = NULL;
        node->left = NULL;
        /*  if (tree)
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

      } */
        while (tree != NULL) {
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
        }

    } else
        *trees = node;
    return 0;
}
