/*
** bitmap.h for ex02 in /home/armita_a/rendu/piscine_cpp_d01/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 16:59:19 2015 armita_a
** Last update Wed Jan  7 22:44:27 2015 armita_a
*/

#ifndef BITMAP_H_
# define BITMAP_H_

#include <stdint.h>
#include <stdlib.h>

typedef struct	__attribute__((packed)) s_bmp_header
{
  uint16_t	magic;
  uint32_t	size;
  uint16_t	_app1;
  uint16_t	_app2;
  uint32_t	offset;
}				t_bmp_header;

typedef struct	__attribute__((packed)) s_bmp_info_header
{
  uint32_t	size;
  int32_t	width;
  int32_t	height;
  uint16_t	planes;
  uint16_t	bpp;
  uint32_t	compression;
  uint32_t	raw_data_size;
  int32_t	h_resolution;
  int32_t	v_resolution;
  uint32_t	palette_size;
  uint32_t	important_colors;
}		t_bmp_info_header;

void    make_bmp_info_header(t_bmp_info_header * header, size_t size);
void    make_bmp_header(t_bmp_header * header, size_t size);

#endif /* !BITMAP_H_ */
