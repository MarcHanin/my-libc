/*
** my_strlen.c for my_strlen in /home/marc/repertoire_rendu/J07/my_strlen
** 
** Made by HANIN Marc
** 
** Started on  Wed Mar 23 09:55:53 2016 HANIN Marc
** Last update Wed Mar 23 19:30:28 2016 HANIN Marc
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      ++i;
      ++str;
    }
  return (i);
}
