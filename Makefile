NAME = ft_select
FLAGS = -Wall -Werror -Wextra
SRC = "./src/"
HEAD = "./includes/"
LFTHEAD = "./libft/"
LIBFT = -L ./libft/ -lft

SRCS = $(SRC)ft_select.c

all: $(NAME)

$(NAME):
	make re -C ./libft/ && make clean -C ./libft/
	gcc $(FLAGS) -ltermcap -I$(HEAD) -I$(LFTHEAD) $(SRCS) $(LIBFT) -o ft_select

dbg:
	make re -C ./libft/ && make clean -C ./libft/
	gcc -g $(FLAGS) -ltermcap -I$(HEAD) -I$(LFTHEAD) $(SRCS) $(LIBFT) -o ft_select

clean:
	rm -f ./libft/libft.a

fclean: clean
	rm -f $(NAME)

re: fclean all
