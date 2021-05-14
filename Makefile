CC = gcc -lncurses
TARGET = push_swap

OBJS =	./main.c	\
		./srcs/check_valid_argument.c \
		./srcs/command/push_command.c \
		./srcs/command/reverse_rotate_command.c \
		./srcs/command/rotate_command.c \
		./srcs/command/swap_command.c \
		./srcs/init_stack.c	\
		./srcs/stack_list/stack_lstnew.c \
		./srcs/stack_list/stack_lstadd_back.c \
		./srcs/stack_list/stack_lstadd_front.c \
		./srcs/stack_list/stack_lstclear.c \
		./srcs/stack_list/stack_lstdelone.c \
		./srcs/utils.c


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