/*
** my_put_nbr.c for  in /home/dauratj/C/Jour05/daurat_j/my_put_nbr
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Fri Sep 30 12:35:23 2016 DAURAT Jerome
** Last update Sat Oct  1 18:10:05 2016 DAURAT Jerome
*/
void	my_putchar(char c);

int	positif(int n)
{
  if (n < 0)
  {
    my_putchar('-');
    return (n == -2147483648 ? (n * (-1)) - 1 : n * (-1));
  }
  else
  {
    return (n) ;
  }
}

int	my_pow(int n)
{
  int	i;
  int	nombre;

  i = 1;
  nombre = 10;
  while (i != n)
  {
    nombre *= 10;
    i++;
  }
  return (nombre) ;
}

void	my_put_nbr(int n)
{
  int	nombre;
  int	nn;
  int	i;

  nn = positif(n);
  i = 0;
  nombre = (nn / 10);
  while (nombre > 0)
  {
    nombre /= 10;
    i++;
  }
  while (i >= 1)
  {
    my_putchar(nn / my_pow(i) % 10 + 48);
    i--;
  }
  (n == -2147483648 ? my_putchar(nn % 10 + 49) : my_putchar(nn % 10 + 48));
}
