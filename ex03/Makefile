# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 12:07:34 by tmaillar          #+#    #+#              #
#    Updated: 2024/06/19 12:53:17 by tmaillar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			:= nowItsWeird

CXX				:= c++
CXXFLAGS 		:= -std=c++98 -Wall -Wextra -Werror -Wno-shadow
CPPFLAGS		+= -I./include
CPPFLAGS		+= -MMD -MP -MF $(@:.o=.d)

SRC_DIR			:= ./src
OBJ_DIR			:= ./obj

ROOT_SRC		:=	ClapTrap.cpp \
					ScavTrap.cpp \
					FragTrap.cpp \
					DiamondTrap.cpp \
					main.cpp 

ROOT_DIR		:= $(SRC_DIR)
ROOT_OBJ		:= $(addprefix $(OBJ_DIR)/, $(ROOT_SRC:.cpp=.o))

SRC				:= $(ROOT_SRC)

OBJ				:= $(ROOT_OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
				@mkdir -p $(@D)
				@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJ)
				@echo "$(YELLOW) Compiling $(NAME) $(CXX) $(CXXFLAGS) ...$(END)"
				@echo "$(GREEN) $(NAME) compiled successfully.$(END)"
				@echo "$(YELLOW) Building $(NAME) ...$(END)" 
				@$(CXX) $(OBJ) -o $(NAME)
				@echo "$(GREEN) $(NAME) built successfully. $(END)"

clean:
				@echo "$(YELLOW) Cleaning object files and dependencies...$(END)"
				@rm -rf $(OBJ_DIR)
				@echo "$(GREEN) Clean complete.$(END)"

fclean: 		clean
				@echo "$(YELLOW) Cleaning object files, dependencies and removing $(NAME)...$(END)"
				@rm -rf $(NAME)
				@echo "$(GREEN) Full clean complete.$(END)"


re: 			fclean
				@$(MAKE) --no-print-directory all

.PHONY:			all clean fclean re 

-include $(OBJ:.o=.d)

YELLOW=\033[0;33m
GREEN=\033[0;32m
END=\033[0m