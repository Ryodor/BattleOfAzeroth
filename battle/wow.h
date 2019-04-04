/*
** wow.h for  in /home/dauratj/C/Battle For Azeroth
** 
** Made by DAURAT Jerome
** Login   <daurat_j@etna-alternance.net>
** 
** Started on  Thu Oct  6 18:16:48 2016 DAURAT Jerome
** Last update Sat Oct  8 14:32:09 2016 DAURAT Jerome
*/

#ifndef	WOW_H
#define WOW_H

typedef struct s_character
{
  char			*name;
  int			lvl;
  int			pv;
  int			pvmax;
  int			pm;
  int			pmmax;
}		t_character;

typedef struct s_cs1
{
  char	*character_name;
  int	parchments;
  int   count_soldiers;
  int	current_soldier;
}               t_cs1;

typedef struct s_inventory
{
  int		potions;
  int		parchments;
}		t_inventory;


void		print_dial(int n);
char		*readline();
int		is_command(char *choice);
char*		my_strcpy(char *dest, char *src);
t_character	*get_soldat();
void		display_soldiers(t_character *soldiers, t_cs1 *cs1);
char*		user_input(char *str);
int		recruitment(char *str, t_character *t_get_soldat, t_cs1 *cs1);
void            battle(char *str, t_character *t_get_soldat, t_cs1 *cs1);
void		fill_casern(t_character *t_get_soldat, t_cs1 *cs1);
void		name_enter(char *av, t_cs1 *cs1);
void            battle(char *str, t_character *t_get_soldat, t_cs1 *cs1);

#endif
