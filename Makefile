# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:53:45 by baguiar-          #+#    #+#              #
#    Updated: 2023/12/04 10:57:31 by baguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a 

CC := cc

CCFLAGS := -Wextra -Wall -Werror

INCLUDE := libft.h

SOURCES = ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c\
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c

BONUS_SRC = ft_lstnew_bonus.c \
						ft_lstadd_front_bonus.c \
						ft_lstsize_bonus.c \
						ft_lstlast_bonus.c \
						ft_lstadd_back_bonus.c \
						ft_lstdelone_bonus.c \


OBJ := $(SOURCES:%.c=%.o)
BONUS_OBJ := $(BONUS_SRC:%.c=%.o)

INC_DIR = .
CPPFLAGS = -I$(INC_DIR)

RM = rm -f

ARNAME = ar rcs $(NAME)
RANNAME = ranlib $(NAME)

OBJS_MABO = $(OBJ) $(BONUS_OBJ)

all: $(NAME)

$(NAME) : $(OBJ)
	$(ARNAME) $(OBJ)
	$(RANNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS_MABO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS_MABO)
	$(ARNAME) $(OBJS_MABO)
	$(RANNAME)

INCLUDES = -I includes

.PHONY: clean bonus re fclean all
