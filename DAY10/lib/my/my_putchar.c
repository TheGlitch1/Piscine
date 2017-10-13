/*
** my_putchar.c for my in /home/flupine/CPool_Day10_2017/lib/my
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  ven. oct. 13 11:35:23 2017 Faurest Lupine
** Last update ven. oct. 13 11:35:48 2017 Faurest Lupine
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}
