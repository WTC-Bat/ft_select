#include "ft_select.h"

int		main(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_putendl("And then...?");
		return (1);
	}
	if (tgetent(NULL, getenv("TERM")) == 1)
	{

	}
	else
	{
		ft_putendl_fd("Error: Terminal not found", 2);
		return (1);
	}
	return (0);
}
