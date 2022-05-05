# NAME =====================================================================================
NAME	=	basis

# SOURCES ==================================================================================
SRCS = main.cpp
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
	@c++ $(FLAGS) -c $< -o $@

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
check: re
	@echo "-------RESULTS-------\n"
	@echo "should display:"
	@echo "a = 3, b = 2"
	@echo "min(a, b) = 2"
	@echo "max(a, b) = 3"
	@echo "c = chaine2, d = chaine1"
	@echo "min(c, d) = chaine1"
	@echo "max(c, d) = chaine2"
	@echo ""
	./basis