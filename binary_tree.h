/*
Created by Charbel KABRO on 24/05/17.
*/

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct s_tree {
    unsigned int nb;
    struct s_tree *left;
    struct s_tree *right;
} t_tree;

int binary_tree(t_tree **, unsigned int);

int print_to(t_tree *, unsigned int);

#endif
