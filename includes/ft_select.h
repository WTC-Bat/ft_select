#ifndef FT_SELECT_H
# define FT_SELECT_H

# include "libft.h"
# include <term.h>

int		fts_putc(int c);
int		fts_get_cols(void);
int		fts_get_lines(void);
void	fts_invisible_cursor(void);
void	fts_clear_term(void);

#endif
