/*
** my_strncpy.c for my_strncpy in /home/marc/repertoire_rendu/J08/my_strncpy
** 
** Made by HANIN Marc
** 
** Started on  Thu Mar 24 11:51:43 2016 HANIN Marc
** Last update Thu Mar 24 20:43:57 2016 HANIN Marc
*/

int	str_size(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      ++str;
      ++i;
    }
  return (i);
}

char	*my_strncpy(char *dest, char *src, int n)
{
  int	size;
  int	i;

  size = str_size(src);
  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      ++i;
    }
  if (size < n)
      dest[i] = '\0';
  return (dest);
}
