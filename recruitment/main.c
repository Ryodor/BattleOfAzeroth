/*
** main.c for  in /home/dauratj/C/Battle For Azeroth
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 18:27:10 2016 DAURAT Jerome
** Last update Sat Oct  8 14:09:23 2016 DAURAT Jerome
*/

#include <unistd.h>
#include <stdio.h>
#include "wow.h"
#include <time.h>
#include <stdlib.h>
#include "my_putstr.c"
#include "my_strcmp.c"
#include "my_putchar.c"
#include "my_put_nbr.c"
#include "my_strcpy.c"
#include "get_soldat.c"
#include "readline.c"
#include "user_input.c"
#include "aff_sold.c"
#include "aff_ptr.c"
#include "main2.c"

void            (*ptr[1])(int) = {&print_dial};

void	name_enter(char *av, t_cs1 *cs1)
{
  cs1->character_name = av;
}

void	fill_casern2(t_cs1 *cs1)
{
  ptr[0](3);
  my_put_nbr(cs1->parchments);
  ptr[0](1);
}

void	fill_casern(t_character *t_get_soldat, t_cs1 *cs1)
{
  if ((rand() % 3 + 1) == 1)
  {
    t_character   *soldiers;

    soldiers = get_soldat();
    t_get_soldat[cs1->count_soldiers].name = soldiers->name;
    t_get_soldat[cs1->count_soldiers].lvl = soldiers->lvl;
    t_get_soldat[cs1->count_soldiers].pv = soldiers->pv;
    t_get_soldat[cs1->count_soldiers].pvmax = soldiers->pvmax;
    t_get_soldat[cs1->count_soldiers].pm = soldiers->pm;
    t_get_soldat[cs1->count_soldiers].pmmax = soldiers->pmmax;
    ptr[0](0);
    my_putstr(t_get_soldat[cs1->count_soldiers].name);
    ptr[0](4);
    my_put_nbr(cs1->parchments);
    ptr[0](1);
    cs1->count_soldiers++;
  }
  else
  {
    fill_casern2(cs1);
  }
}

void	commande(char *str, t_character	*t_get_soldat, t_cs1 *cs1)
{
  if (my_strcmp(str, "recruitment") == 0)
  {
    if (cs1->parchments > 0)
    {
      ptr[0](6);
      fill_casern(t_get_soldat, cs1);
      cs1->parchments--;
      if (cs1->parchments == 0)
      {
	ptr[0](10);
	my_put_nbr(cs1->count_soldiers);
	ptr[0](11);
	display_soldiers(t_get_soldat, cs1);
	ptr[0](4);
      }
    }
    else
    {
      ptr[0](12);
    }
  }
  else if (my_strcmp(str, "leave !") == 0)
    ptr[0](13);
}

int     main(int ac, char **av)
{
  t_character	t_get_soldat[5];
  t_cs1         *cs1;

  cs1 = malloc(sizeof(t_cs1));
  cs1->parchments = 5;
  cs1->count_soldiers = 0;
  system("clear");
  if (ac == 3 && my_strcmp(av[1], "-n") == 0)
    name_enter(av[2], cs1);
  else
  {
    ptr[0](14);
    ptr[0](15);
    return (0) ;
  }
  if (main2(t_get_soldat, cs1) == 0)
    return (0) ;
  return (0) ;
}
