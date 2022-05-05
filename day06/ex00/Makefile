# NAME =====================================================================================
NAME	=	convert

# SOURCES ==================================================================================
SRCS = main.cpp Conversion.cpp
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
	./convert 0
	@echo ""
	./convert nan
	@echo ""
	./convert 42.0f
	@echo ""
	./convert 2147483647
	@echo ""
	./convert c
