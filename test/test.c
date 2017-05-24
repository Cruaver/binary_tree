#include <stdio.h>
#include <stdlib.h>

typedef struct noeud{
    int val;
    struct noeud *fg;
    struct noeud *fd;
}NOEUD;

void ajoutArbre (NOEUD *prems, int valeur){
    NOEUD *nouv=(NOEUD*) malloc(sizeof(NOEUD*));
    nouv->val=valeur;
    nouv->fg=NULL;
    nouv->fd=NULL;
    printf("%d",valeur);
    while (prems!=nouv){
        if (valeur<(prems->val)){
            if (prems->fg == NULL){
                prems->fg=nouv;
            }
            prems=prems->fg;
        }
        else{
            if (prems->fd == NULL){
                prems->fd=nouv;
            }
            prems=prems->fd;
        }
    }
}

NOEUD *creerArbre (int tab[]){
    NOEUD *prem=(NOEUD*) malloc(sizeof(NOEUD*));
    int i;

    prem->val=tab[0];
    prem->fg=NULL;
    prem->fd=NULL;
    for(i=1;i<6;i++){
        ajoutArbre(prem, tab[i]);
    }
    return prem;
}



void parcourirArbre (NOEUD *n){
    if(n!=NULL){
        parcourirArbre(n->fg);
        printf("%d ",n->val);
        parcourirArbre(n->fd);
    }
}

int main()
{
    int tableau[]={3, 1, 2, 5, 4, -1};

    parcourirArbre(creerArbre(tableau));

    return 0;
}