/*
** rush_2.c for CPool_rush1 in /home/arthur.melin/CPool/CPool_rush1
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

  rect_fmt.up_lft = '/';
  rect_fmt.up_rgt = '\\';
  rect_fmt.dw_lft = '\\';
  rect_fmt.dw_rgt = '/';
  rect_fmt.dfault = '*';
  rect_fmt.hrztal = '*';
  rect_fmt.vrtcal = '*';
  rush_common(x, y, &rect_fmt);
}
