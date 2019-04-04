/*
** user_input.c for  in /home/dauratj/C/Battle For Azeroth
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Fri Oct  7 09:24:22 2016 DAURAT Jerome
** Last update Sat Oct  8 13:24:42 2016 DAURAT Jerome
*/

#include "is_command.c"

char	*user_input(char *str)
{
  char	*choice;

  choice = malloc(sizeof(char) * 2);
  if (choice == NULL)
    return (NULL);
  while (is_command(choice) != 0)
  {
    my_putstr(str);
    my_putstr(" >>  ");
    choice = my_strcpy(choice, readline());
    my_putstr("\n");
    if (is_command(choice) != 0)
    {
      my_putstr("Unknown command\n");
    }
  }
  return (choice) ;
}
