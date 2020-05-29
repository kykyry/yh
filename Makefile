NAME = libft.a
HEADERS = libft.h
FUNCTIONS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_atoi.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
O_FUNCTIONS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strchr.o ft_strlcpy.o ft_strlcat.o ft_strlen.o ft_strnstr.o ft_strrchr.o ft_atoi.o ft_strncmp.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
BONUS_FUNCTIONS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
O_BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o
all:	$(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(FUNCTIONS)
	ar rc $(NAME) $(O_FUNCTIONS)
	ranlib $(NAME)

bonus:
	gcc -c -Wall -Wextra -Werror $(BONUS_FUNCTIONS) $(FUNCTIONS)
	ar rc $(NAME) $(O_FUNCTIONS) $(O_BONUS)
	ranlib $(NAME)
clean:
	/bin/rm -f $(O_FUNCTIONS) $(O_BONUS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all