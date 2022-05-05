# NAME =====================================================================================
NAME	=	cpp_sed

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
	@echo "sentence before replacement : \"test file, dont mind following sentences: three water siblings water family car plane ::::te%%###random\"\n"
	@touch test
	@echo "test file, dont mind following sentences: three water siblings water family car plane ::::te%%###random" > test
	@echo "replacing \"three water siblings\" by \"replaced\""
	./cpp_sed test "three water siblings" "replaced"
	@echo ""
	@echo "result:"
	@cat test.replace
	@echo ""
	@echo "replacing \"water\" by \"replaced1\""
	./cpp_sed test "water" "replaced1"
	@echo ""
	@echo "result:"
	@cat test.replace
	@echo ""
	@echo "replacing \"te%%###\" by \"replaced2\""
	./cpp_sed test "te%%###" "replaced2"
	@echo ""
	@echo "result:"
	@cat test.replace
	@echo ""
	@echo "testing the infinite loop protection"
	@echo "test file content:"
	@echo "salut" > test
	@cat test
	@echo ""
	./cpp_sed test t salut
	@echo ""
	@echo "result:"
	@cat test.replace