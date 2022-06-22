
#ifndef MAIN_H
#define MAIN_H

# include <sys/types.h>
# include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
# include <fcntl.h>
#include <stdlib.h>
#include "./libraries/minilibx/mlx.h"

struct elemnts_as_global{
void *mlx;
void *mlx_win;
};
struct elemnts_as_global eg;

void	ft_putchar(char c);
int	ft_strlen(char *str);
void	ft_putstr(char *str);
int	ft_close(void);
#endif
