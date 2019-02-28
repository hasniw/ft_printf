# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabecret <yabecret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/13 19:43:10 by yabecret          #+#    #+#              #
#    Updated: 2019/02/28 11:25:33 by yabecret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable
NAME 	= 	libftprintf.a

# Compilation
CC		= 	@cc
CFLAGS	= 	-Wall -Wextra -Werror

SRCDIR = srcs/

UTILSDIR = utils/

CONVDIR = conv/

INCDIR = includes/

# Files && Objs

UTILS	=		$(UTILSDIR)ft_atoi.c			\
				$(UTILSDIR)ft_bzero.c			\
				$(UTILSDIR)ft_lltoa_base.c		\
				$(UTILSDIR)ft_memcpy.c			\
				$(UTILSDIR)ft_memset.c			\
				$(UTILSDIR)ft_putstr_fd.c		\
				$(UTILSDIR)ft_strcpy.c			\
				$(UTILSDIR)ft_strlen.c			\
				$(UTILSDIR)options.c			\

UTIOBJ	= $(UTILS:.c=.o)

CONV	=		$(CONVDIR)c_arg.c				\
				$(CONVDIR)d_conv.c				\
				$(CONVDIR)dou_arg.c				\
				$(CONVDIR)int_arg.c				\
				$(CONVDIR)p_arg.c				\
				$(CONVDIR)pct_arg.c				\
				$(CONVDIR)s_arg.c				\

CONVOBJ	= $(CONV:.c=.o)

SRCS 	=		$(SRCDIR)ft_printf.c			\
				$(SRCDIR)handle_buff.c			\
				$(SRCDIR)manage_conv.c			\
				$(SRCDIR)options_padding.c		\
				$(SRCDIR)parse_arg.c			\

OBJ	   = $(SRCS:.c=.o)

# **************************************************************************** #

# SPECIAL CHARS

LOG_CLEAR		= \033[2K
LOG_UP			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BOLD		= \033[1m
LOG_UNDERLINE	= \033[4m
LOG_BLINKING	= \033[5m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# Protect

.PHONY:	all clean fclean re

# **************************************************************************** #

# RULES

# Main rules
all				: 	$(NAME)

re				: 	fclean all

# Compilation rules

$(NAME)			:	 $(OBJ) $(UTIOBJ) $(CONVOBJ)
					@echo "-------------------------------------------------------------"
					@echo "|                  Debut de la compilation                  |"
					@echo "|                            42                             |"
					@echo "|                         FT_PRINTF                         |"
					@echo "|                       compilation :                       |"
					@echo "|                                                           |"
					@ar rc $(NAME) $(OBJ) $(UTIOBJ) $(CONVOBJ)
					@ranlib $(NAME)
					@echo "|                 make $(NAME)$(LOG_GREEN) ✓ $(LOG_NOCOLOR)                     |"
					@echo "-------------------------------------------------------------"
# Clean rules
clean			:
					@echo "-------------------------------------------------------------"
					@rm -rf $(OBJ) $(UTIOBJ) $(CONVOBJ)
					@echo "|                  Removes all$(LOG_GREEN) .o ✓ !$(LOG_NOCOLOR)                    |"
					@echo "-------------------------------------------------------------"

fclean			: 	clean
					@rm -f $(NAME)

# **************************************************************************** #
