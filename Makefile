# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 01:30:17 by yrhiba            #+#    #+#              #
#    Updated: 2022/10/27 17:44:57 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf ft_atoi ft_check_flags ft_init_tab

OBJS_DIR = objs/
INC = ft_printf.h
SRCS = $(FILES:.c)
OBJS = $(addprefix $(OBJS_DIR), $(FILES:.o))
CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)%.o : %.c $(INC)
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

bonus : all

.PHONEY : all clean fclean re bonus