/*
** my_strstr.c for my_strstr in /home/marc/repertoire_rendu/J08/my_strstr
** 
** Made by HANIN Marc
** 
** Started on  Sat Mar 26 10:35:51 2016 HANIN Marc
** Last update Sat Mar 26 12:00:27 2016 HANIN Marc
*/

int	check_similarity(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	  return (-1);
      ++i;
    }
  return (1);
}

char	*my_strstr(char *str, char *to_find)
{
  while (*str != '\0')
    {
      if (*str == *to_find)
	{
	  if (check_similarity(str, to_find) == 1)
	    return (str);
	}
      ++str;
    }
  return ("null");
}
