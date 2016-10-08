/*
** rush_common.h for CPool_rush1 in /home/arthur.melin/CPool/CPool_rush1
** 
** Made by Arthur Melin
** Login   <arthur.melin@epitech.net>
** 
** Started on  Sat Oct  8 13:47:31 2016 Arthur Melin
** Last update Sat Oct  8 16:04:11 2016 Arthur Melin
*/

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
