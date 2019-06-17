SRC=$(addsuffix .c,filler init parse algo_p1_1 algo_p1_2 algo_p1_3 algo_p2_1 \
					algo_p2_2 algo_p2_3 coor_p1_1 coor_p1_2 coor_p2_1 coor_p2_2 \
					coor_pce_1 coor_pce_2 edge min_max_p1 min_max_p2 tools)
OBJ=$(addprefix obj/,$(SRC:.c=.o))
NAME=gthomas.filler
LIBFT=libft/libft.a
WFLAGS= -Werror -Wall -Wextra

.PHONY: clean fclean re all

all: lib obj $(NAME)

lib:
	make -C libft

obj:
	mkdir obj

$(NAME): $(LIBFT) $(OBJ)
	gcc $^ -o $@ -Llibft -lft $(WFLAGS)

obj/%.o: src/%.c
	gcc -o $@ -c $< -Iinclude $(WFLAGS)

clean:
	rm -rf obj
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean all
