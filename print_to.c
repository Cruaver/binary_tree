//
// Created by Charbel KABRO on 24/05/17.
//

void print_to(tree, nb) {
    while (tree) {
        printf("%d\n", tree->nb);
        tree = tree->right;
        tree = tree->left;
    }
}