/*
** bitmap_header.c for ex02 in /home/armita_a/rendu/piscine_cpp_d01/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 17:20:44 2015 armita_a
** Last update Wed Jan  7 19:13:52 2015 armita_a
*/

#include "bitmap.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	make_bmp_header(t_bmp_header * header, size_t size)
{
  header->magic = 0x4D42;
  header->offset = 40 + 14;
  header->size = size * size * 32 /8 + header->offset;
  header->_app1 = 0;
  header->_app2 = 0;
}

void	make_bmp_info_header(t_bmp_info_header * header, size_t size)
{
  header->size = 40;
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = size * size * header->bpp / 8;
  header->h_resolution = 0;
  header->v_resolution = 0;
  header->palette_size = 0;
  header->important_colors = 0;
}
