/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/marc/repertoire_rendu/J10/my_str_to_wordtab
** 
** Made by HANIN Marc
** 
** Started on  Mon Mar 28 10:41:59 2016 HANIN Marc
** Last update Tue Mar 29 18:05:33 2016 HANIN Marc
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strdup(char *dest, char *src);

int	alpha_num_check(char c)
{
  if ((c >= 65) && (c <= 90))
    return (1);
  else if ((c >= 97) && (c <= 122))
    return (1);
  else if ((c >= 48) && (c <= 57))
    return (1);
  else
    return (0);
}

int	word_counter(char *str)
{
  int	result;
  int	i;
  int	size;

  result = 0;
  i = 0;
  size = 0;
  while (str[i] != '\0')
    {
      if ((alpha_num_check(str[i]) == 0) && (size > 0))
	{
	  size = 0;
	  ++result;
	}
      else if (alpha_num_check(str[i]) == 1)
	++size;
      ++i;
    }
  ++result;
  return (result);
}

int	count_word_char(char *str)
{
  int	result;

  result = 0;
  while (alpha_num_check(*str))
    {
      ++result;
      ++str;
    }
  return (result);
}

char	*copy_word(char *str, int size)
{
  char	*result;
  int	i;

  i = 0;
  result = malloc(sizeof(char) * size);
  if (result == 0)
    return (NULL);
  while (i < size)
    {
      result[i] = str[i];
      ++i;
    }
  return (result);
}

char	**my_str_to_wordtab(char *str)
{
  char	**result;
  int	i;
  int	word_char;

  result = malloc(word_counter(str) * sizeof(char *));
  if (result == 0 || str == NULL)
    return (NULL);
  i = 0;
  word_char = 0;
  while (*str != '\0')
    {
      if (alpha_num_check(*str))
	{
	  word_char = count_word_char(str);
	  result[i] = copy_word(str, word_char);
	  ++i;
	  str += word_char;
	}
      else
	++str;
    }
  result[i] = '\0';
  return (result);
}
