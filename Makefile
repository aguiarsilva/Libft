# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 11:53:45 by baguiar-          #+#    #+#              #
#    Updated: 2023/12/04 17:59:02 by baguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

INC	= inc/
SRC_DIR		= src/
OBJ_DIR		= obj/

CC := cc

CCFLAGS := -Wextra -Wall -Werror -I.

FTIS_DIR = $(SRC_DIR)ft_is/ft_isalpha.c \
		   $(SRC_DIR)ft_is/ft_isdigit.c \
		   $(SRC_DIR)ft_is/ft_isalnum.c \
		   $(SRC_DIR)ft_is/ft_isascii.c \
		   $(SRC_DIR)ft_is/ft_isprint.c \

FTMEM_DIR = $(SRC_DIR)ft_mem/ft_memset.c \
			$(SRC_DIR)ft_mem/ft_bzero.c \
			$(SRC_DIR)ft_mem/ft_memcpy.c \
			$(SRC_DIR)ft_mem/ft_memmove.c \
			$(SRC_DIR)ft_mem/ft_memchr.c \
			$(SRC_DIR)ft_mem/ft_memcmp.c \
			$(SRC_DIR)ft_mem/ft_calloc.c \

FTPUT_DIR = $(SRC_DIR)ft_put/ft_putchar_fd.c \
		  	$(SRC_DIR)ft_put/ft_putstr_fd.c \
		  	$(SRC_DIR)ft_put/ft_putendl_fd.c \
		  	$(SRC_DIR)ft_put/ft_putnbr_fd.c \

FTTO_DIR =	$(SRC_DIR)ft_to/ft_toupper.c \
		  	$(SRC_DIR)ft_to/ft_tolower.c \
			$(SRC_DIR)ft_to/ft_atoi.c \
			$(SRC_DIR)ft_to/ft_itoa.c \
			$(SRC_DIR)ft_to/ft_atoll.c \

FTSTR_DIR =	$(SRC_DIR)ft_str/ft_strlen.c \
		  	$(SRC_DIR)ft_str/ft_strlcpy.c \
			$(SRC_DIR)ft_str/ft_strlcat.c \ 
		 	$(SRC_DIR)ft_str/ft_strchr.c \
		  	$(SRC_DIR)ft_str/ft_strrchr.c \
		  	$(SRC_DIR)ft_str/ft_strncmp.c \
		  	$(SRC_DIR)ft_str/ft_strnstr.c \
			$(SRC_DIR)ft_str/ft_strdup.c \
		  	$(SRC_DIR)ft_str/ft_substr.c \
			$(SRC_DIR)ft_str/ft_strjoin.c \
		  	$(SRC_DIR)ft_str/ft_strtrim.c \
		  	$(SRC_DIR)ft_str/ft_split.c \
			$(SRC_DIR)ft_str/ft_strmapi.c \
		  	$(SRC_DIR)ft_str/ft_striteri.c \

FTLST_DIR = $(SRC_DIR)ft_lst/ft_lstnew.c \		  
		  	$(SRC_DIR)ft_lst/ft_lstadd_front.c \
		  	$(SRC_DIR)ft_lst/ft_lstsize.c \
		  	$(SRC_DIR)ft_lst/ft_lstlast.c \
		  	$(SRC_DIR)ft_lst/ft_lstadd_back.c \
		  	$(SRC_DIR)ft_lst/ft_lstdelone.c \
		  	$(SRC_DIR)ft_lst/ft_lstclear.c \
		  	$(SRC_DIR)ft_lst/ft_lstiter.c \
		  	$(SRC_DIR)ft_lst/ft_lstmap.c \
		  
FTPRINTF_DIR = 	$(SRC_DIR)ft_printf/ft_printf_cases.c \
				$(SRC_DIR)ft_printf/ft_printf_ptr.c \
				$(SRC_DIR)ft_printf/ft_printf_x.c \
				$(SRC_DIR)ft_printf/ft_printf.c \

GETNEXTLINE_DIR = $(SRC_DIR)get_next_line/get_next_line_utils.c \
				  $(SRC_DIR)get_next_line/get_next_line.c \	  

OBJ := $(SOURCES:%.c=%.o)

RM = rm -f

ARNAME = ar rcs $(NAME)
RANNAME = ranlib $(NAME)

OBJS_MABO = $(OBJ) $(BONUS_OBJ)

all: $(NAME)

$(NAME) : $(OBJ)
	$(ARNAME) $(OBJ)
	$(RANNAME)

%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS_MABO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS_MABO)
	$(ARNAME) $(OBJS_MABO)
	$(RANNAME)

.PHONY: clean bonus re fclean all
