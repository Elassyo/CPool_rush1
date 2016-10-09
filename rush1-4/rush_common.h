/*
** rush_common.h for CPool_rush1 in /home/arthur.melin/CPool/CPool_rush1
** 
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
** 
** Started on  Sat Oct  8 13:47:31 2016 Arthur Melin
** Last update Sun Oct  9 09:36:30 2016 Arthur Melin
*/

#ifndef RUSH_COMMON_H_
# define RUSH_COMMON_H_

typedef struct	s_rect_fmt
{
  char		up_lft;
  char		up_rgt;
  char		dw_lft;
  char		dw_rgt;
  char		hrztal;
  char		vrtcal;
  char		dfault;
}		t_rect_fmt;

void	rush_common(int x, int y, t_rect_fmt *rect_fmt);

#endif
