#include "ft_select.h"

int		fts_putc(int c)
{
	return(write(2, &c, 1));
}

int		fts_get_cols(void)
{
	return (tgetnum("co"));
}

int		fts_get_lines(void)
{
	return (tgetnum("li"));
}

void	fts_invisible_cursor(void)
{
	tputs(tgetstr("vi", NULL), 1, fts_putc);
}

void	fts_clear_term(void)
{
	tputs(tgetstr("ti", NULL), 1, fts_putc);
}
