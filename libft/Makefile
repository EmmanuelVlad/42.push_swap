# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evlad <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 16:35:16 by evlad             #+#    #+#              #
#    Updated: 2017/04/20 13:04:49 by evlad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIST = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_strisdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_itoa_base.c \
	   ft_itoa_base_uint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_countword.c \
	   ft_countsword.c \
	   ft_countletter.c \
	   ft_countsletter.c \
	   ft_strtoupper.c \
	   ft_strtolower.c \
	   ft_binary_complete.c \
	   ft_wstrlen.c \
	   ft_putwchar.c \
	   ft_printf.c \
	   init_struct.c \
	   formating.c \
	   check_flags.c \
	   apply_flags.c \
	   apply_flags_2.c \
	   apply_precision.c \
	   apply_zero.c \
	   apply_diese.c \
	   conv_1.c \
	   conv_2.c \
	   cast.c \
	   freemalloc.c \
	   strsubwchar.c \
	   get_next_line.c \

OBJ = $(LIST:%.c=%.o)

OBJ_PATH = ../obj/

LIBFT_PATH = ../obj/libft/

FILES = $(OBJ:%=$(LIBFT_PATH)%)

FLAGS = -Wextra -Werror -Wall

NAME = libft.a

$(OBJ_PATH)%.o: $(LIST) ./printf.h ./libft.h ./get_next_line.h
	@mkdir -p $(OBJ_PATH)
	@mkdir -p $(LIBFT_PATH)
	@gcc $(FLAGS) -c $(@F:%.o=%.c) -o $@

all: $(NAME)

$(NAME): $(FILES)
	@ar rc $(NAME) $(FILES)
	@ranlib $(NAME)
	
clean:
	@/bin/rm -rf $(LIBFT_PATH)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
