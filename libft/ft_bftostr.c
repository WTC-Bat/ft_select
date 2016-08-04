#include "libft.h"

/*
static int	bracket_loop()
{

}
*/

/*
static void	init(char *bytes, unsigned int size)
{
	unsigned int	cnt;

	cnt = 0;
	while (cnt < size)
	{
		bytes[cnt] = 0;
		cnt++;
	}
}
*/

static char	*interpret(char *bytes, char *bf)
{
	int		cnt;
	int		bfcnt;
	int		bracket;
	char	*bfstr;

	cnt = 0;
	bfcnt = 0;
	bracket = 0;
	bfstr = (char *)malloc(sizeof(char) * 2048);
	while (bf[cnt] != '\0')
	{
		if (bf[cnt] == '>')
			bytes++;
		else if (bf[cnt] == '<')
			bytes--;
		else if (bf[cnt] == '+')
			(*bytes)++;
		else if (bf[cnt] == '-')
			(*bytes)--;
		else if (bf[cnt] == '.')
		{
			ft_putchar(*bytes);
			bfstr[bfcnt] = *bytes;
			bfcnt++;
		}
		else if (bf[cnt] == '[')
		{
			if (*bytes == 0)
			{
				bracket = 1;
				cnt++;
				while (bracket != 0)
				{
					if (bf[cnt] == '[')
						bracket++;
					else if (bf[cnt] == ']')
						bracket--;
					if (bracket != 0)
						cnt++;
				}
			}
		}
		else if (bf[cnt] == ']')
		{
			if (*bytes != 0)
			{
				bracket = 1;
				cnt--;
				while (bracket != 0)
				{
					if (bf[cnt] == '[')
						bracket++;
					else if (bf[cnt] == ']')
						bracket--;
					if (bracket != 0)
						cnt--;
				}
			}
		}
		cnt++;
	}
	bfstr[ft_strlen(bfstr)] = '\0';
	return (bfstr);
}

/*
char	*interpret(char *bytes, char *bf)
{
	int		cnt;
	int		bfcnt;
	char	*bfstr;

	cnt = 0;
	bfcnt = 0;
	bfstr = (char *)malloc(sizeof(char) * 2048);
	while (bf[cnt] != NULL)
	{
		if (bf[cnt] == '>')
			bytes++;
		else if (bf[cnt] == '<')
			bytes--;
		else if (bf[cnt] == '+')
			(*bytes)++;
		else if (bf[cnt] == '-')
			(*bytes)--''
		else if (bf[cnt] == '.')
		{
			bfstr[bfcnt] = (*bytes);
			bfcnt++;
		}
		else if (bf[cnt] == '[')
		{
			if (*bytes == 0)
			{
				bracket = 1;
				cnt++;
				while (bracket != 0)
				{
					if (bf[cnt] == '[')
						bracket++;
					else if (bf[cnt] == ']')
						bracket--;
					if (bracket != 0)
						cnt++;
				}
			}
		}
		else if (bf[cnt] == ']')
		{
			if (*bytes != 0)
			{
				bracket = 1;
				cnt--;
				while (bracket != 0)
				{
					if (bf[cnt] == '[')
						bracket++;
					else if (bf[cnt] = ']')
						bracket--;
					if (bracket != 0)
						cnt--;
				}
			}
		}
		cnt++;
	}
	return (bfstr);
}
*/

char		*ft_bftostr(char *bf)
{
	char	bytes[4096];
	char 	*bfstr;

	/*
	** Check validity
	*/

	/*
	**init
	*/
	ft_memset(bytes, 0, 4096);
	//init(&bytes[0], 4096);
	bfstr = interpret(&bytes[0], bf);
	return (bfstr);
}
