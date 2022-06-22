#include "main.h"

void load_map(char *str, int w, int h)
{
	eg.mlx = mlx_init();
	eg.mlx_win = mlx_new_window(eg.mlx, w*40, h*40, str);
	mlx_hook(eg.mlx_win, 17, 0, ft_close, NULL);
	mlx_loop(eg.mlx);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		load_map(argv[1],atoi(argv[2]),atoi(argv[3]));
	}
	else
		ft_putstr("\033[32m argument not find ");

	return (0);
}
