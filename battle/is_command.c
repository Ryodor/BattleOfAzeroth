/*
** is_command.c for  in /home/dauratj/C/Battle For Azeroth
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Fri Oct  7 09:31:31 2016 DAURAT Jerome
** Last update Sat Oct  8 14:22:22 2016 DAURAT Jerome
*/

int	is_command(char	*choice)
{
  if ((my_strcmp(choice, "quit") == 0) ||
      (my_strcmp(choice, "recruitment") == 0) ||
      (my_strcmp(choice, "leave !") == 0) ||
      (my_strcmp(choice, "army") == 0) ||
      (my_strcmp(choice, "you are the chosen one") == 0) ||
      (my_strcmp(choice, "let's fight") == 0))
  {
    return (0) ;
  }
  return (1) ;
}
