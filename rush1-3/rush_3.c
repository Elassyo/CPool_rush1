/*
** rush_3.c for CPool_rush1 in /home/arthur.melin/CPool/CPool_rush1
** 
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
** 
** Started on  Sat Oct  8 16:04:58 2016 Arthur Melin
** Last update Sat Oct  8 16:18:32 2016 Arthur Melin
*/

#include "rush_common.h"

void		rush(int x, int y)
{
  t_rect_fmt	rect_fmt;

  rect_fmt.up_lft = 'A';
  rect_fmt.up_rgt = 'A';
  rect_fmt.dw_lft = 'C';
  rect_fmt.dw_rgt = 'C';
  rect_fmt.dfault = 'B';
  rect_fmt.hrztal = 'B';
  rect_fmt.vrtcal = 'B';
  rush_common(x, y, &rect_fmt);
}
