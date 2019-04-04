/*
** get_soldat.c for  in /home/dauratj/C/Battle For Azeroth
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 15:52:20 2016 DAURAT Jerome
** Last update Sat Oct  8 13:07:55 2016 DAURAT Jerome
*/
#include <stdlib.h>
#include <string.h>

#define NBCREA 5

static t_character g_soldats[] =
  {
    {"Koopa", 1, 10, 10, 20, 20},
    {"Bob bomb", 1, 10, 10, 20, 20},
    {"Yoshi", 1, 10, 10, 20, 20},
    {"Maskas", 1, 10, 10, 20, 20},
    {"Kucco", 1, 10, 10, 20, 20},
    {"Jawa", 0, 0, 0, 0, 0}
  };

t_character	*get_soldat()
{
  int		rnd;
  t_character	*soldat;
  time_t	t;

  srand((unsigned) time(&t));
  rnd = rand() % NBCREA;
  if ((soldat = malloc(sizeof(t_character))) == NULL)
    return (NULL);
  soldat->name = strdup(g_soldats[rnd].name);
  if (!soldat->name)
    return (NULL);
  soldat->lvl = g_soldats[rnd].lvl;
  soldat->pv = g_soldats[rnd].pv;
  soldat->pvmax = g_soldats[rnd].pvmax;
  soldat->pm = g_soldats[rnd].pm;
  soldat->pmmax = g_soldats[rnd].pmmax;
  return (soldat);
}
