#include "ft_select.h"

/*
**int		fts_longest_arg(char **args)
*/
/*
**	Untested
*/
size_t	fts_longest_arg(char **args)
{
	size_t	longest;
	size_t	len;
	size_t	cnt;

	longest = 0;
	len = 0;
	cnt = 0;
	while (args[cnt] != NULL)
	{
		len = ft_strlen(args[cnt])
		if (len > longest)
			longest = len;
		cnt++;
	}
	return (longest);
}

/*
**	Returns a series of spaces to use as spacing
**	between args.
**	Untested
*/
char	*fts_spacepad(char *arg, size_t longest)
{
	size_t	arglen;
	size_t	spccnt;
	char	*spaces

	arglen = ft_strlen(arg);
	spccnt = longest - arglen;
	ft_memset(spaces, ' ', spccnt);	//?
	return (spaces);
}
