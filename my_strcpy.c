/*
** my_strcpy.c for my_strcpy in /home/marc/repertoire_rendu/J08/my_strcpy
** 
** Made by HANIN Marc
** 
** Started on  Thu Mar 24 10:42:01 2016 HANIN Marc
** Last update Thu Mar 24 11:28:08 2016 HANIN Marc
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
