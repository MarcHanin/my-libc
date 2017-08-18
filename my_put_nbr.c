/*
** my_put_nbr.c for my_put_nbr in /home/marc/repertoire_rendu/J09/my_put_nbr
** 
** Made by HANIN Marc
** 
** Started on  Fri Mar 25 14:28:52 2016 HANIN Marc
** Last update Sat Mar 26 17:40:10 2016 HANIN Marc
*/

void	my_putchar(char c);

int	count_nbr(int n)
{
  int	i;

  i = 0;
  while (n != 0)
    {
      n /= 10;
      ++i;
    }
  return (i);
}

int	my_pow(int n, int pow)
{
  int	result;
  int	i;

  i = 0;
  result = n;
  if (pow == 0)
    return (1);
  while (i < (pow - 1))
    {
      result = result * n;
      ++i;
    }
  return (result);
}

void	my_putnbr_display(int n, int size)
{
  int	i;
  int	tmp;
  int	result;

  i = 1;
  result = 0;
  while (i <= size)
    {
      tmp = my_pow(10, (size - i));
      result = ((n / tmp) % 10);
      my_putchar(result + 48);
      ++i;
    }
}

void	my_put_nbr(int n)
{
  int	size;
  int	is_max;

  size = count_nbr(n);
  is_max = 0;
  if (n == 0)
      my_putchar(0 + 48);
  else
    {
      if (n < 0)
	{
	  if (n == -2147483648)
	    {
	      is_max = 1;
	      n /= 10;
	      size -= 1;
	    }
	  n = -n;
	  my_putchar('-');
	}
      my_putnbr_display(n, size);
      if (is_max == 1)
	my_putchar('8');
    }
}

