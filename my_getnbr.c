/*
** my_getnbr.c for my_getnbr in /home/marc/repertoire_rendu/J09/my_getnbr
** 
** Made by HANIN Marc
** 
** Started on  Fri Mar 25 17:38:11 2016 HANIN Marc
** Last update Sat Mar 26 16:41:55 2016 HANIN Marc
*/

int	my_getnbr(char *str)
{
  int	negative;
  int	i;
  int	result;
  int	begin;

  negative = 0;
  result = 0;
  i = 0;
  begin = 0;
  if ((str[i] < 43) || (str[i] > 57))
    return (0);
  while (str[i] != '\0')
    {
      if (((str[i] == 45) || (str[i] == 43)) && (begin != 1))
	negative = ((negative != 1) && (str[i] == 45) ? 1 : 0);
      else if ((str[i] < 48) || str[i] > 57)
	return ((negative == 1) ? -result : result);
      else
	{
	  begin = 1;
	  result = (result * 10) + (str[i] - 48);
	}
      ++i;
    }
  return ((negative == 1) ? -result : result);
}
