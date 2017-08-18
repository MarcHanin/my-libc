/*
** my_putstr.c for my_putstr in /home/marc/repertoire_rendu/J07/my_putstr
** 
** Made by HANIN Marc
** 
** Started on  Wed Mar 23 09:41:17 2016 HANIN Marc
** Last update Wed Mar 23 09:48:51 2016 HANIN Marc
*/

void	my_putchar(char str);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      ++str;
    }
}
