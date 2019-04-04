/*
** main2.c for  in /home/dauratj/C/Battle For Azeroth/daurat_j/recruitment
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Sat Oct  8 13:59:14 2016 DAURAT Jerome
** Last update Sat Oct  8 14:10:02 2016 DAURAT Jerome
*/
#include "wow.h"

int	main2(t_character *t_get_soldat, t_cs1 *cs1)
{
  int	i;

  i = 0;
  while (i == 0)
  {
    char *input;
    input = user_input(cs1->character_name);
    if (my_strcmp(input, "quit") == 0)
    {
      system("clear");
      return (0) ;
    }
    else if (my_strcmp(input, "recruitment") == 0)
      commande("recruitment", t_get_soldat, cs1);
    else if (my_strcmp(input, "leave !") == 0)
      commande("leave !", t_get_soldat, cs1);
  }
  return (1) ;
}
