/*
** my_putchar.c for my_putchar in /home/marc/repertoire_rendu/J05/my_putchar
** 
** Made by HANIN Marc
** 
** Started on  Mon Mar 21 11:37:24 2016 HANIN Marc
** Last update Mon Mar 21 20:57:04 2016 HANIN Marc
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

