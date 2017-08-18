/*
** my_swap.c for my_swap in /home/marc/repertoire_rendu/J07/my_swap
** 
** Made by HANIN Marc
** 
** Started on  Wed Mar 23 11:01:47 2016 HANIN Marc
** Last update Wed Mar 23 11:12:33 2016 HANIN Marc
*/

void	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *b;
  *b = *a;
  *a = tmp;
}
