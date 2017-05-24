/*
Created by Charbel KABRO on 24/05/17.
*/

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct s_tree {

    int nb;
    t_tree *left;
    t_tree *right;

} t_tree;

typedef struct t_tree t_tree;

void binary_tree(t_tree &tree, int nb);
void print_to(t_tree tree, int nb);

#endif BINARY_TREE_H