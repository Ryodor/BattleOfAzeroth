/*
** my_putstr.c for  in /home/dauratj/C/Jour03/daurat_j/my_putstr
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Tue Sep 27 20:41:07 2016 DAURAT Jerome
** Last update Sat Oct  1 15:33:48 2016 DAURAT Jerome
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
  {
    my_putchar(*(str + i));
    i++;
  }
}
