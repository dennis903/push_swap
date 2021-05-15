CC = gcc -lncurses
TARGET = push_swap

OBJS =	./main.c	\
		./srcs/command/push_command.c \
		./srcs/command/reverse_rotate_command.c \
		./srcs/command/rotate_command.c \
		./srcs/command/swap_command.c \
		./srcs/stack_list/stack_lstnew.c \
		./srcs/stack_list/stack_lstadd_back.c \
		./srcs/stack_list/stack_lstadd_front.c \
		./srcs/stack_list/stack_lstclear.c \
		./srcs/stack_list/stack_lstdelone.c \
		./srcs/stack_list/stack_lstsize.c	\
		./srcs/sort/exec_command.c \
		./srcs/sort/start_sort.c	\
		./srcs/sort/sort_stack.c	\
		./srcs/init_stack.c	\
		./srcs/utils.c \
		./srcs/check_valid_argument.c \
		./srcs/check_return_condition.c

all : $(TARGET)

$(TARGET) : $(OBJS)
	make -C libft
	cp ./libft/libft.a .
	$(CC) $(OBJS) -o $@ libft.a

clean :
	rm -rf $(TARGET)
	rm -rf libft.a
	rm -rf ./libft/libft.a

fclean : clean
	rm -rf $(TARGET)

re : clean all