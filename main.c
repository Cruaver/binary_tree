/*
** main.c for Binary Tree in /Users/vandis_w/plocal/JAWA/Challenges/Binary_tree/
**
** Made by VANDISTE William
** Login   <vandis_w@etna-alternance.net>
**
** Started on  Wed Oct  5 16:54:46 2016 VANDISTE William
** Last update Thu Oct  6 16:37:18 2016 VANDISTE William
*/

#include	<stdlib.h>
#include	"binary_tree.h"

#define		TAB_LEN		7

int		main(void)
{
    signed int	tab[] = {10, 20, 4, 8, 5, 15, 3};
    unsigned int	i;
    t_tree *tree;

    i = 0;
    tree = NULL;
    while (i < TAB_LEN)
    {
        binary_tree(&tree, tab[i]);
        i++;
    }
    print_to(tree, 4);
    return (0);
}