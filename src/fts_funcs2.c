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

char	**fts_pad_args(int longest, char **args)
{
	int		cnt;
	size_t	len;
	//int		pcnt;
	char	*pad;

	cnt = 0;
	len = 0;
	//pcnt = 0;
	while (args[cnt] != NULL)
	{
		/*
		**	Not too desirable?
		*/
		if (args[cnt] < longest)
		{
			len = ft_strlen(args[cnt]);
			//pad = (char *)malloc(sizeof(char) * (longest - len));
			ft_memset(pad, ' ', (longest - len));
			args[cnt] = ft_strcat(args[cnt], pad);	//leak?
		}
		cnt++;
	}
}
