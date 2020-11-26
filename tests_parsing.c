//
// Created by Skipjack Adolph on 11/22/20.
//

#include "minishell.h"
#include "get_next_line.h"

int		is_linebreak(const char *str);
int		is_quotmark(const char *str);
size_t	catch_first_sign(const char *str, t_data *part, char *r);
char	*handle_quot(const char *line, t_data *part);

int			main(int ac, char **av, char **env)
{
	int 	n;
	char 	*line = "kjnvv\\$kmlvs$vdf";
	t_data	*part = ft_calloc(1, sizeof(t_data));
	char 	r;
//	char 	*dup = "echo HOME";
	char 	*dup = "echo hellllo \"$HOME' l'ol\" kek; $LOGNAME kek"; // 11/23 28 42
	t_data	*res;
	char	**args;
	size_t	i;

//	test parse
	res = parse(dup, env);
	args = res->args;
	i = -1;
	printf("str: %s\n", dup);
	printf("args:\n");
	while (args[++i] != NULL)
		printf(">%s<\n", args[i]);
	printf("\nlen: %ld\t%c\n", res->len, res->type);
/*
//	test ft_arrjoin_pro
	args = ft_arrjoin_pro(ft_split("a b c", ' '),
					   ft_split("d e f", ' '), 't');
	i = -1;
	while (args[++i] != NULL)
		printf(">%s<\n", args[i]);
*/
/*
//	test handle_quot
	part->env = dup_env(env);
	printf(">%s<\n>%s<\n", dup, handle_quot(dup, part));
*/
/*
//	test escape_symbols
	while (1)
	{
		ft_putstr_fd("kekai > ", 1);
		get_next_line(1, &line);
		escape_symbols(line);
		printf("%s\n", line);
	}
*/
/*
//	test is_symb
	while (1)
	{
		ft_putstr_fd("kekai > ", 1);
		get_next_line(1, &line);
		if ((n = is_symb(line)) > -1)
		{
			printf("ret: %d\n", n);
			printf("%s\n", line + n);
		}
		else
			printf("-1\n");
	}
*/
/*
//	test is_linebreak
	while (1)
	{
		ft_putstr_fd("kekai > ", 1);
		get_next_line(1, &line);
//		printf("%zu\n", is_escaped(line, 5));
		if ((n = is_linebreak(line)) != -1)
			printf("%s\n", line + n);
		else
			printf("-1\n");
	}
*/
/*
//	test is_quotmark
	while (1)
	{
		ft_putstr_fd("kekai > ", 1);
		get_next_line(1, &line);
		if ((n = is_quotmark(line)) != -1)
			printf("%s\n", line + n);
		else
			printf("-1\n");
	}
*/
/*
//	test catch_first_sign
	while (1)
	{
		ft_putstr_fd("kekai > ", 1);
		get_next_line(1, &line);
		if ((n = catch_first_sign(line, part, &r)) != -1)
		{
			printf("ret: %d\n", n);
			printf("%s\n%c\n%c\n", line + n, part->type, r);
		}
}*/
	return (0);

}
