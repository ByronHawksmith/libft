# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 14:01:25 by bhawksmi          #+#    #+#              #
#    Updated: 2021/09/22 18:55:35 by bhawksmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_itoa.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strmapi.c \
				ft_strtrim.c \
				ft_substr.c
SRCS_B	=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
OBJS	= $(SRCS:%.c=%.o)
OBJS_B	= $(SRCS_B:%.c=%.o)
FLAGS	= -Wall -Werror -Wextra -I. -c

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# This won't run if the source files don't exist or are not modified
$(OBJS): $(SRCS)
	gcc $(FLAGS) $(SRCS)

$(OBJS_B): $(SRCS_B)
	gcc $(FLAGS) $(SRCS_B)

all: $(NAME)

bonus: $(NAME) $(OBJS_B)
	ar rcs $(NAME) $(OBJS_B)

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

# Use .PHONY to make sure that gnu make will still run even if files with these names are present
.PHONY: all bonus clean fclean re
