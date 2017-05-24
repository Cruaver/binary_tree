/*
 Created by Charbel KABRO on 24/05/17.
*/

#include <stdlib.h>
#include <stdio.h>
#include "binary_tree.h"

int node_len(t_tree *tree){

    int i;
    i = 0;

    while (tree){
        tree = tree->right;
        i++;
    }
    return i;
}

void print_to(t_tree *tree, int nb) {

    tab

    while (tree) {
        printf("%d\n", tree->nb);
        tree = tree->right;
    }
}