CC = cc
CFLAGS = -Wall -Wextra -Werror
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a
SRCS =		  ft_atoi.c     ft_isdigit.c     ft_memmove.c   ft_split.c    ft_strlcpy.c  ft_strtrim.c \
ft_bzero.c    ft_isprint.c  ft_memset.c      ft_strchr.c    ft_strlen.c   ft_substr.c \
ft_calloc.c   ft_itoa.c     ft_putchar_fd.c  ft_strdup.c    ft_strmapi.c  ft_tolower.c \
ft_isalnum.c  ft_memchr.c   ft_putendl_fd.c  ft_striteri.c  ft_strncmp.c  ft_toupper.c \
ft_isalpha.c  ft_memcmp.c   ft_putnbr_fd.c   ft_strjoin.c   ft_strnstr.c \
ft_isascii.c  ft_memcpy.c   ft_putstr_fd.c   ft_strlcat.c   ft_strrchr.c \
\
ft_lstnew_bonus.c 			ft_lstadd_front_bonus.c 		ft_lstsize_bonus.c \
ft_lstadd_back_bonus.c 		ft_lstlast_bonus.c 				ft_lstdelone_bonus.c \
ft_lstclear_bonus.c 		ft_lstiter_bonus.c 				ft_lstmap_bonus.c \
\
get_next_line/get_next_line_bonus.c		get_next_line/get_next_line_utils_bonus.c \
\
$(PRINTF_DIR)/ft_printf.c			$(PRINTF_DIR)/printf_c.c		$(PRINTF_DIR)/printf_d_i.c \
$(PRINTF_DIR)/printf_p.c			$(PRINTF_DIR)/printf_s.c		$(PRINTF_DIR)/printf_u.c \
$(PRINTF_DIR)/printf_x_big.c		$(PRINTF_DIR)/printf_x.c \

OBJS = $(SRCS:.c=.o)

NAME = libft.a
RM = rm -f
AR = ar rcs

all: $(PRINTF) $(NAME)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(PRINTF_DIR)
	$(RM) $(OBJS) $(EXTRAOBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re