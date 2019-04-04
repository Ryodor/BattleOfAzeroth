/*
** aff_sold.c for  in /home/ryod1/piscine/Battle_of_Azaroth/daurat_j
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct  7 14:26:40 2016 SELATNI Ryad
** Last update Sat Oct  8 14:19:55 2016 DAURAT Jerome
*/

#include "wow.h"

void	display_soldiers(t_character *soldiers, t_cs1 *cs1)
{
  int	i;

  i = 0;
  while (i < cs1->count_soldiers)
    {
      my_putstr("\n\nSoldier n");
      my_put_nbr(i+1);
      my_putstr("\n\nName : ");
      my_putstr(soldiers[i].name);
      my_putstr("\nLevel : ");
      my_put_nbr(soldiers[i].lvl);
      my_putstr("\nLife : ");
      my_put_nbr(soldiers[i].pv);
      my_putchar('/');
      my_put_nbr(soldiers[i].pvmax);
      my_putstr("\nMana : ");
      my_put_nbr(soldiers[i].pm);
      my_putchar('/');
      my_put_nbr(soldiers[i].pmmax);
      my_putchar('\n');
      i++;
    }
}
