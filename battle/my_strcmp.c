/*
** my_strcmp.c for  in /home/dauratj/C/Jour04/daurat_j/my_strcmp
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Thu Sep 29 14:40:57 2016 DAURAT Jerome
** Last update Sat Oct  1 15:28:18 2016 DAURAT Jerome
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
  {
    i++;
  }
  if (s1[i] > s2[i])
    return (1) ;
  else if (s1[i] < s2[i])
    return (-1) ;
  return (0) ;
}
