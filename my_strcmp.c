/*
** my_strcmp.c for my_strcmp in /home/marc/repertoire_rendu/J08/my_strcmp
** 
** Made by HANIN Marc
** 
** Started on  Thu Mar 24 12:52:42 2016 HANIN Marc
** Last update Thu Mar 24 13:26:14 2016 HANIN Marc
*/

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 == *s2)
    {
      if (*s1 == '\0')
	{
	  return (0);
	}
      ++s1;
      ++s2;
    }
  return (*s1 > *s2 ? 1 : -1);
}
