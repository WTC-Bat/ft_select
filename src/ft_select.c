#include "ft_select.h"

static int	max_line(void)
{
	int		l;

	l = fts_get_lines();
	if (l % 2 == 0)
		l = l / 2;
	else if (l % 2 == 1)
		l = (l - 1) / 2;	// l = (l + 1) / 2;
	return (l);
}

static int	max_col(void)
{
	int		c;

	c = fts_get_cols();
	if (c % 2 == 0)
		c = c / 2;
	else if (c % 2 == 1)
		c = (c - 1) / 2;	// c = (c + 1) / 2;
	return (c);
}

static void	display_args(char **args)
{
	int		lin;
	int		col;
	int		scnt;

	lin = max_line();
	col = max_col();
	scnt = 1;
	while (args[scnt] != NULL)
	{
		ft_putendl(args[scnt]);
		ft_putchar('\n');
		scnt++;
	}
}

static void	ft_select(char **args)
{
	int		scnt;
	int		cnt;
	//int		wmax;
	//int		hmax;

	scnt = 1;
	cnt = 0;
	/*
	wmax = (fts_get_cols(void) / 5);
	hmax = (fts_get_lines(void) / 5);
	if (wmax < 1)
		ft_putendl_fd("Error: Not enough columns", 2);
	else if (hmax < 1)
		ft_putendl_fd("Error: Not enough lines", 2);
	else
	{
		fts_clear_term(void);
		while (args[scnt] != NULL)
		{
			//?
		}
	}
	*/
	fts_clear_term();
	display_args(args);
}

int			main(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_putendl("And then...?");
		return (1);
	}
	if (tgetent(NULL, getenv("TERM")) == 1)
	{
		ft_select(argv);
	}
	else
	{
		ft_putendl_fd("Error: Terminal not found", 2);
		return (1);
	}
	return (0);
}
