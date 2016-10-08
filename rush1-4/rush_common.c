/*
** rush_common.c for CPool_rush1 in /home/arthur.melin/CPool/CPool_rush1
** 
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
** 
** Started on  Sat Oct  8 13:39:24 2016 Arthur Melin
** Last update Sat Oct  8 16:22:33 2016 Arthur Melin
*/

#include "rush_common.h"

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str)
    my_putchar(*str++);
}

void	rush_common_line(int w, char lft, char mid, char rgt)
{
  my_putchar(lft);
  while (w-- - 2)
    my_putchar(mid);
  my_putchar(rgt);
}

void	rush_common_rect(int w, int h, t_rect_fmt *fmt)
{
  int	y;

  y = 0;
  while (h - y)
    {
      if (w == 1)
	{
	  if (y == 0 || y == (h - 1))
	    my_putchar(fmt->dfault);
	  else
	    my_putchar(fmt->vrtcal);
	}	
      else
	{
	  if (y == 0)
	    rush_common_line(w, fmt->up_lft, fmt->hrztal, fmt->up_rgt);
	  else if (y == (h - 1))
	    rush_common_line(w, fmt->dw_lft, fmt->hrztal, fmt->dw_rgt);
	  else
	    rush_common_line(w, fmt->vrtcal, ' ', fmt->vrtcal);
	}
      my_putchar('\n');
      y++;
    }
}

void	rush_common(int w, int h, t_rect_fmt *fmt)
{
  if (w < 1 || h < 1)
      my_putstr("Invalid size");
  else
    {
      if (h == 1)
	{
	  if (w == 1)
	    my_putchar(fmt->dfault);
	  else
	    rush_common_line(w, fmt->dfault, fmt->hrztal, fmt->dfault);
	  my_putchar('\n');
	}
      else
	rush_common_rect(w, h, fmt);
    }
}
