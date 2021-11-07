
C_FILES =	srcs/ft_putchar.c\
 			srcs/ft_putstr.c\
			srcs/ft_strlen.c\
			srcs/ft_toupper.c\
			srcs/ft_putnbr.c\
			srcs/ft_putendl.c\
			srcs/ft_isalnum.c\
			srcs/ft_isalpha.c\
			srcs/ft_isascii.c\
			srcs/ft_isdigit.c\
			srcs/ft_isprint.c\
			srcs/ft_strclr.c\
			srcs/ft_tolower.c\
			srcs/ft_strequ.c\
			srcs/ft_atoi.c


HEADER = srcs/

ft_toupper: 
	gcc -Wall -Wextra -Werror ft_toupper_main.c $(C_FILES) -I$(HEADER)

ft_strlen: 
	gcc -Wall -Wextra -Werror ft_strlen_main.c $(C_FILES) -I$(HEADER)

putnbr: 
	gcc -Wall -Wextra -Werror ft_putnbr_main.c $(C_FILES) -I$(HEADER)
	
ft_putendl:	
	gcc -Wall -Wextra -Werror ft_putendl_main.c $(C_FILES) -I$(HEADER)

ft_strequ:
	gcc -Wall -Wextra -Werror ft_strequ_main.c $(C_FILES) -I$(HEADER)

ft_atoi:
	gcc -Wall -Wextra -Werror ft_atoi_main.c $(C_FILES) -I$(HEADER)
	

