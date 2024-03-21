NAME = libft.a

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_strjoin.c \
	ft_substr.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_memcmp.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_atoi.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_split.c \
	ft_putchar_fd.c \
	t_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_itoa.c \
	ft_lstnew.c \

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

INCLUDE = libft.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${INCLUDE}
	@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}
BONUS_OBJECTS = ${BONUS:.c=.o}

${NAME}: ${OBJS} $(INCLUDE)
	@ar -rsc ${NAME} ${OBJS}

bonus: ${OBJS} ${BONUS_OBJECTS} $(INCLUDE)
	@ar -rsc $(NAME) $^
	@touch $@

all:	${NAME}

clean:
	@${RM} ${OBJS} ${BONUS_OBJECTS}

fclean:
	@${RM} ${OBJS} ${BONUS_OBJECTS}
	@${RM} ${NAME}
	@${RM} bonus

re: fclean all

.PHONY: all clean fclean re
