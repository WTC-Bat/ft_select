#include "ft_select.h"

int		fts_longest_arg(char **args)
{
	int		longest;
	int		len;
	int		cnt;

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
