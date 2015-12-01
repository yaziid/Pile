#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct p
{
    int tab[MAX];
    int sommet;
}Pile;

/********************/
/*    Primitives    */
/********************/

void init_pile(Pile *p)
{
    p->sommet = -1;
}

int est_vide(Pile p)
{
    if(p.sommet <= -1 ) return 1;


    return 0;
}

int est_pleine(Pile p)
{
    if(p.sommet >= MAX ) return 1;


    return 0;
}

void empiler(Pile *p, int v)
{
    if(!est_pleine(*p))
    {
        p->sommet++;
        p->tab[p->sommet] = v;
    }
}

void deplier(Pile *p, int *v)
{
    if(!est_vide(*p))
    {
        *v = p->tab[p->sommet];
        p->sommet--;
    }
}

int main()
{
    Pile p;
    int valeur = 0;

    init_pile(&p);

    empiler(&p, 36);

    deplier(&p, &valeur);

    printf("%d", valeur);

    return 0;
}
