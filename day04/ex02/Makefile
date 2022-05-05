# NAME =====================================================================================
NAME	=	abstractanimal

# SOURCES ==================================================================================
SRCS = main.cpp Cat.cpp Animal.cpp Dog.cpp Brain.cpp
SRCS_DIR = ./

# COMPILATION ==============================================================================
FLAGS = -Wall -Wextra -Werror -std=c++98

# OBJECTS ==================================================================================
OBJS_DIR = objects/
OBJ = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

# EXEC =====================================================================================
$(OBJS_DIR)%.o:	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@c++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
		@echo "Cleaning: $(NAME)"
		@rm -f $(NAME)

re: fclean all

# CHECK ====================================================================================
check: $(NAME)
	@echo "-------RESULTS-------\n"
	@./abstractanimal