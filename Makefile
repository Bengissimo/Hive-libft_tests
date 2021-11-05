
C_FILES =	srcs/ft_putchar.c\
 			srcs/ft_putstr.c\
			srcs/ft_strlen.c\
			srcs/ft_toupper.c\
			srcs/ft_putendl.c\
			srcs/ft_isalnum.c\
			srcs/ft_isalpha.c\
			srcs/ft_isascii.c\
			srcs/ft_isdigit.c\
			srcs/ft_isprint.c\
			srcs/ft_putnbr.c\
			srcs/ft_strclr.c\
			srcs/ft_tolower.c\

HEADER = srcs/

toupper: 
	gcc -Wall -Wextra -Werror ft_toupper_main.c $(C_FILES) -I$(HEADER)

strlen: 
	gcc -Wall -Wextra -Werror ft_strlen_main.c $(C_FILES) -I$(HEADER)
	
putendl:	
	gcc -Wall -Wextra -Werror ft_putendl_main.c $(C_FILES) -I$(HEADER)
