/*
** readline.c for  in /home/dauratj/C/Battle For Azeroth
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 15:51:52 2016 DAURAT Jerome
** Last update Sat Oct  8 14:25:09 2016 DAURAT Jerome
*/

/*
  Cette fonction permet de récuper une ligne
  de moins de 50 caracteres sur l'entrée standard.
  La fonction ne prend pas de paramètre et renvoi une chaine
  allouée (pensez a free()).
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*readline()
{
  ssize_t	ret;
  char*		buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL) ;
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff) ;
    }
  buff[0] = '\0';
  return (buff) ;
}
