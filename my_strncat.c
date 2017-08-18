/*
** my_strncat.c for my_strncat in /home/marc/repertoire_rendu/J08/my_strncat
** 
** Made by HANIN Marc
** 
** Started on  Thu Mar 24 15:19:33 2016 HANIN Marc
** Last update Thu Mar 24 20:31:47 2016 HANIN Marc
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  char	*tmp;

  tmp = str1;
  while (*str1 != '\0')
    {
      ++str1;
    }
  while ((*str2 != '\0') && (n > 0))
    {
      *str1 = *str2;
      ++str1;
      ++str2;
      --n;
    }
  return (tmp);
}
