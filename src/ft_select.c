#include "ft_select.h"

//tmp
int		fts_putc(int c)
{
	return(write(2, &c, 1));
}

int		main(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_putendl("And then...?");
		return (1);
	}
	if (tgetent(NULL, getenv("TERM")) == 1)
	{
		/*clear screen*/
		tputs(tgetstr("cl", NULL), 1, fts_putc);

		ft_putstr(argv[0]);
		ft_putendl(": ");
		
		/*invisible cursor*/
		tputs(tgetstr("vi", NULL), 1, fts_putc);
	}
	else
	{
		ft_putendl_fd("Error: Terminal not found", 2);
		return (1);
	}
	return (0);
}
