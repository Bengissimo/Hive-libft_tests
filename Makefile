
C_FILES = 	srcs/ft_putchar.c\
 			srcs/ft_putstr.c\
			srcs/ft_strlen.c\
			srcs/ft_toupper.c\

HEADER = srcs/

toupper: 
	gcc -Wall -Wextra -Werror ft_toupper_main.c $(C_FILES) -I$(HEADER)

strlen: 
	gcc -Wall -Wextra -Werror ft_strlen_main.c $(C_FILES) -I$(HEADER)
