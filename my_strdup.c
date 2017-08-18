/*
** my_strdup.c for my_strdup in /home/marc/repertoire_rendu/J10/my_strdup
** 
** Made by HANIN Marc
** 
** Started on  Mon Mar 28 10:07:43 2016 HANIN Marc
** Last update Mon Mar 28 10:34:26 2016 HANIN Marc
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char	*result;
  int	size;

  size = my_strlen(str);
  result = malloc(size * sizeof(*str));
  my_strcpy(result, str);
  return (result);
}
