# NAME =====================================================================================
NAME	=	karenFilter

# SOURCES ==================================================================================
SRCS = main.cpp Karen.cpp
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
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@echo "Cleaning: test files"
	@rm -rf $(OBJS_DIR) test test.replace

fclean: clean
		@echo "Cleaning: $(NAME)"
		@rm -f $(NAME)

re: fclean all

# CHECK ====================================================================================
check: $(NAME)
	@echo "-------RESULTS-------\n"
	@echo "Testing with \"ERROR\", should only print error message"
	./karenFilter ERROR
	@echo ""
	@echo "Testing with \"INFO\", should print info, warning and error message"
	./karenFilter INFO
	@echo ""
	@echo "Testing with \"random\", should print a special choosen message"
	./karenFilter random
	@echo ""