/*
** my_strcat.c for my_strcat in /home/marc/repertoire_rendu/J08/my_strcat
** 
** Made by HANIN Marc
** 
** Started on  Thu Mar 24 14:49:12 2016 HANIN Marc
** Last update Thu Mar 24 20:38:29 2016 HANIN Marc
*/

char	*my_strcat(char *str1, char *str2)
{
  char	*tmp;

  tmp = str1;
  while (*str1 != '\0')
    {
      ++str1;
    }
  while (*str2 != '\0')
    {
      *str1 = *str2;
      ++str1;
      ++str2;
    }
  return (tmp);
}
