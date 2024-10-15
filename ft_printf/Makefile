NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRCS = ft_printf.c  ft_printf_utils.c  printf_x_big.c  printf_c.c  printf_d_i.c  printf_s.c  printf_u.c  printf_x.c printf_p.c
OBJS = $(SRCS:.c=.o)
RM = rm -f

all:$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean


