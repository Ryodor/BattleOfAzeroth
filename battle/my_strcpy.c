/*
** my_strcpy.c for  in /home/dauratj/C/Jour04/daurat_j/my_strcpy
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:48:33 2016 DAURAT Jerome
** Last update Sat Oct  1 17:44:00 2016 DAURAT Jerome
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (*(src + i) != '\0')
  {
    *(dest + i) = *(src + i);
    i++;
  }
  *(dest + i) = '\0';
  return (dest) ;
}
