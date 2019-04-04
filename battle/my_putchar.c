/*
** my_putchar.c for  in /home/dauratj/C/Jour01/daurat_j/my_putchar
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Mon Sep 26 10:45:03 2016 DAURAT Jerome
** Last update Mon Sep 26 13:17:52 2016 DAURAT Jerome
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
