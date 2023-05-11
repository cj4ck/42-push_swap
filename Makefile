# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 11:25:13 by cjackows          #+#    #+#              #
#    Updated: 2023/05/11 11:53:33 by cjackows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			=	\033[38;5;160m
RED_B		=	\033[48;5;160m
DELETED		=	\033[48;5;160m[DELETED]\033[0m
GREEN		=	\033[38;5;40m
GREEN_B		=	\033[48;5;40m
COMPILATION	=	\033[48;5;40m[COMPILATION]\033[0m $(GREEN)
BLUE		=	\033[38;5;123m
BLUE_B		=	\033[48;5;39m
INFO		=	\033[48;5;39m[INFORMATION]\033[0m $(BLUE)
RESET		=	\033[0m
PROGRESS_WIDTH = 20
PROGRESS_DONE_CHAR = 🟩
PROGRESS_TODO_CHAR = ⬜️
CURRENT_PROGRESS = 0
TOTAL_PROGRESS = $(words $(OBJ))

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -fsanitize=address 
LIBFT		=	./inc/libft/libft.a
LIBFT_DIR	=	./inc/libft/
HDRS_DIR	=	./inc/
SRC_DIR		=	./src
OBJ_DIR		=	./obj

SRC			=	$(wildcard $(SRC_DIR)/*.c) #! HAS TO BE CHANGED AFTER PROJECT IS COMPLETED
HDRS 		=	-I$(LIBFT_DIR)/inc -I$(HDRS_DIR)
LIBS		=	-L$(LIBFT_DIR)
OBJ			=	$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(NAME)

$(NAME): libft ascii-art $(OBJ)
	@echo
	@echo "$(COMPILATION)$(NAME) compilation with $(OS)-flags.$(RESET)"
	@$(CC) $(CFLAGS) $(LIBS) $(OBJ) -o $(NAME) $(LIBFT)
	@echo "$(INFO)$@ executable has been created$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) $(DEFINE_FLAGS) $(HDRS) -c $^ -o $@
	$(eval CURRENT_PROGRESS=$(shell echo $$(($(CURRENT_PROGRESS)+1))))
	$(eval PERCENTAGE=$(shell echo $$(($(CURRENT_PROGRESS)*100/$(TOTAL_PROGRESS)))))
	@if [ $(CURRENT_PROGRESS) -eq $(TOTAL_PROGRESS) ]; then \
		printf "\r$(GREEN_B)[COMPILATION]$(RESET) \033[38;5;40m$(PERCENTAGE)%% [$$(printf '%*s' $$(($(CURRENT_PROGRESS)*$(PROGRESS_WIDTH)/$(TOTAL_PROGRESS))) | tr ' ' '$(PROGRESS_DONE_CHAR)')$$(printf '%*s' $$(($(PROGRESS_WIDTH)-($(CURRENT_PROGRESS)*$(PROGRESS_WIDTH)/$(TOTAL_PROGRESS)))) | tr ' ' '$(PROGRESS_TODO_CHAR)')] $<\033[0m ✅                   "; \
	else \
		printf "\r$(GREEN_B)[COMPILATION]$(RESET) \033[38;5;51m$(PERCENTAGE)%% [$$(printf '%*s' $$(($(CURRENT_PROGRESS)*$(PROGRESS_WIDTH)/$(TOTAL_PROGRESS))) | tr ' ' '$(PROGRESS_DONE_CHAR)')$$(printf '%*s' $$(($(PROGRESS_WIDTH)-($(CURRENT_PROGRESS)*$(PROGRESS_WIDTH)/$(TOTAL_PROGRESS)))) | tr ' ' '$(PROGRESS_TODO_CHAR)')] $<"; \
	fi
	@sleep 0.01


libft:
	@make  -C  $(LIBFT_DIR)
	@clear

clean:
	@for obj in $(OBJ); do \
		rm -f $$obj; \
		printf "$(RED_B)[DELETED]$(RESET) $(RED)$$obj$(RESET)\n"; \
	done

fclean: clean
	@make fclean --quiet -C $(LIBFT_DIR)
	@rm -f $(NAME);
	@printf "$(RED_B)[DELETED]$(RESET) $(RED)$(NAME)$(RESET)\n"; \

re: fclean all

sre: clean all

git:
	@echo "$(BLUE)"
	git add *
	@read -p "Commit msg:" msg;\
	git commit -m "$$msg"
	git push
	@echo "$(INFO)$(GREEN)Git add, commit, push performed ✅$(RESET)"

ascii-art:
	@echo "\033[38;5;51m                                      \`\\/,"
	@echo "\033[38;5;51m                                     .- '--."
	@echo "\033[38;5;51m                                    '       \`"
	@echo "\033[38;5;51m                                    \`.      .'        _."
	@echo "\033[38;5;51m                            \`._  .-~'       \`~-.   _,'"
	@echo "\033[38;5;87m                             ( )'              '.( )"
	@echo "\033[38;5;87m               \`._    _       /                  .'       ."
	@echo "\033[38;5;87m                ( )--' \`-.  .'                     ;   _\`"
	@echo "\033[38;5;87m          .    .'        '.;                         ()' "
	@echo "\033[38;5;87m           \`.-.\`           '                        :"
	@echo "\033[38;5;231m        .  .    _____ ________          ___________\`                    __  /\      .__   \033[0m"
	@echo "\033[38;5;195m          ,    /  |  |\_____  \         \_   _____/___________    ____ /  |_)/ ____ |  |  \033[0m"
	@echo "\033[38;5;159m   ---*=::    /   |  |_/  ____/   ______ |    __) \_  __ \__  \  / ___\\\\\   __\/  _ \|  |  \033[0m"
	@echo "\033[38;5;123m        \`:   /    ^   /       \  /_____/ |     \   |  | \// __ \/  \___ |  | (  <_> )  |__\033[0m"
	@echo "\033[38;5;123m         .,  \____   |\_______ \         \___  /   |__|  (____  /\___  >|__|  \____/|____/\033[0m"
	@echo "\033[38;5;123m        .  .      |__|        \/             \/    by cj4ck   \/     \/                  \033[0m"
	@echo "\033[38;5;123m            .\`-'.           ,                     \`."
	@echo "\033[38;5;123m           '    '.        .';                       () "
	@echo "\033[38;5;159m                (_)-   .-'  \`.                      ;\`.         "
	@echo "\033[38;5;159m               ,'   \`-'       \\                        '"
	@echo "\033[38;5;159m                            (_).                   _'     '"
	@echo "\033[38;5;159m                            .'   '-._         .-.'(_)      "
	@echo "\033[38;5;195m                                    .'       \`.     \`.     "
	@echo "\033[38;5;231m                                    '         ;       '    "
	@echo "\033[38;5;195m                                     \`-.,. -'              "
	@echo "\033[38;5;231m                                        /\\\               "
	@echo

.PHONY: all clean fclean re sre git mlx libft