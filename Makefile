# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjunker <cjunker@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 10:43:42 by cjunker           #+#    #+#              #
#    Updated: 2022/04/13 12:30:23 by cjunker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_putendl_fd.c \
		ft_strchr.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_putnbr_fd.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strtrim.c \
		ft_calloc.c \
		ft_isascii.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_split.c \
		ft_strmapi.c \
		ft_substr.c \

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstsize.c \
		ft_lstdelone.c \
		
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
RM = rm -f
NAME = libft.a
REMAKE = @make --no-print-directory

ifdef LIBFT_BONUS
	ALL_OBJS = $(OBJS) $(BONUS_OBJS)
else
	ALL_OBJS = $(OBJS)
endif
all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME): $(ALL_OBJS)
	ar rcs $(NAME) $(ALL_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus:
	$(REMAKE) LIBFT_BONUS=1 all
.PHONY: all clean fclean re bonus
