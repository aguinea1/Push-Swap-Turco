# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguinea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 12:22:41 by aguinea           #+#    #+#              #
#    Updated: 2024/12/05 22:00:35 by aguinea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



################################################################################
#                                 COLOR CODE                                   #
################################################################################

BOLD			= \033[1m

END         	= \e[0m

DEF_COLOR   	= \033[0;39m

ORANGE    		= \033[38;5;214m

PINK      		= \033[38;5;213m

BLUE      		= \033[0;94m

YELLOW    		= \033[0;93m

BOLD_YELLOW 	= \033[1;33m

WHITE 			= \033[0;97m

ITALIC 			= \033[3m

GREEN =			\033[0;92m


################################################################################
#                             COMPILATION & MORE                               #
################################################################################

NAME 			= push_swap
BONUS			= checker

CC 				= cc
CFLAGS 			= -Wall -Werror -Wextra -g #-fsanitize=address

MAKE_LIB 		= ar -rcs

RM 				= rm -f


################################################################################
#                                 PATH/TO/SRCS                                 #
################################################################################

SRC_DIR 		= ./mandatory/src

BONUS_SRC		= ./bonus/src

OBJ_DIR 		= ./mandatory/obj

BONUS_OBJ		= ./bonus/obj

LIBFT_DIR 		= ./mandatory/libft

INCLUDE_DIR 	= ./mandatory/include

BONUS_INCLUDE	= ./bonus/include

SHARED			= ./shared


################################################################################
#                               SRCS && OBJS                                   #
################################################################################

LIBFT 			= $(LIBFT_DIR)/libft.a

HEADER			= $(INCLUDE_DIR)/push_swap.h
HEAD_BONUS		= $(BONUS_INCLUDE)/checker.h
HEAD_LIBFT		= $(LIBFT_DIR)/libft.h
INCLUDE			= $(HEADER) $(HEAD_BONUS) $(HEAD_LIBFT)

BONUS_SRCS		= $(BONUS_SRC)/checker_main.c

SRCS 			= $(SRC_DIR)/main.c						\
				  $(SRC_DIR)/printall.c 				\
				  $(SRC_DIR)/little_sort.c 				\
				  $(SRC_DIR)/algorithm.c 				\
				  $(SRC_DIR)/fill_parameters_to_pb.c 	\
				  $(SRC_DIR)/prepare_to_push.c 			\
				  $(SRC_DIR)/fill_parameters_to_pa.c

SHARED_SRCS		= $(SHARED)/parsing.c			\
				  $(SHARED)/push_swap_utils.c	\
				  $(SHARED)/create_stack.c		\
				  $(SHARED)/swap.c				\
				  $(SHARED)/push.c				\
				  $(SHARED)/rotate.c			\
				  $(SHARED)/reverserotate.c


OBJS 			= $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRCS) $(SHARED_SRCS)))
BONUS_OBJS		= $(patsubst %.c,$(BONUS_OBJ)/%.o,$(notdir $(BONUS_SRCS) $(SHARED_SRCS)))


################################################################################
#                                 MAKEFILE                                     #
################################################################################

all					: libs $(NAME)

bonus				: libs $(BONUS)

libs				:
					@make -C $(LIBFT_DIR) > /dev/null
					@make -C $(LIBFT_DIR) bonus > /dev/null


$(NAME)				: $(OBJS) $(LIBFT)
					@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)
					@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)executable created$(DEF_COLOR)\n"


$(BONUS) 			: $(BONUS_OBJS) $(LIBFT)
					@$(CC) $(CFLAGS) $(BONUS_OBJS) -L$(LIBFT_DIR) -lft -o $(BONUS)
					@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)bonus executable created$(DEF_COLOR)\n"


$(OBJ_DIR)/%.o		: $(SRC_DIR)/%.c $(INCLUDE) Makefile | $(OBJ_DIR)
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)Created object file: $@$(DEF_COLOR)\n"


$(OBJ_DIR)/%.o		: $(SHARED)/%.c $(INCLUDE) Makefile | $(OBJ_DIR)
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)Created object file: $@$(DEF_COLOR)\n"


$(BONUS_OBJ)/%.o	: $(BONUS_SRC)/%.c $(INCLUDE) Makefile | $(BONUS_OBJ)
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)Created object file: $@$(DEF_COLOR)\n"


$(BONUS_OBJ)/%.o	: $(SHARED)/%.c $(INCLUDE) Makefile | $(BONUS_OBJ)
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)Created object file: $@$(DEF_COLOR)\n"

$(OBJ_DIR)			:
					@mkdir -p $(OBJ_DIR)

$(BONUS_OBJ)		:
					@mkdir -p $(BONUS_OBJ)


clean:
	@$(MAKE) -C $(LIBFT_DIR) clean > /dev/null
	@rm -rf $(OBJ_DIR) $(BONUS_OBJ)
	@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)Cleaned up object$(DEF_COLOR)\n"

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean > /dev/null
	@rm -f $(NAME) $(BONUS)
	@echo "\n$(PINK)[ＯＫ✔]		➤➤		$(GREEN)All executables and objects removed$(DEF_COLOR)\n"

re					: fclean all

.PHONY: all clean fclean re
