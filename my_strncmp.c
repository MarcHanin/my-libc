/*
** my_strncmp.c for my_strncmp in /home/marc/repertoire_rendu/J08/my_strncmp
** 
** Made by HANIN Marc
** 
** Started on  Thu Mar 24 13:40:25 2016 HANIN Marc
** Last update Thu Mar 24 13:49:39 2016 HANIN Marc
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (*s1 == *s2)
    {
      if ((i == n) || (*s1 == '\0'))
	{
	  return (0);
	}
      ++s1;
      ++s2;
      ++i;
    }
  return (*s1 > *s2 ? 1 : -1);
}
