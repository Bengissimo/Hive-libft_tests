
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
			srcs/ft_atoi.c\
			srcs/ft_itoa.c\
			srcs/ft_strdup.c\
			srcs/ft_strnew.c\
			srcs/ft_strsub.c\
			srcs/ft_strjoin.c\
			srcs/ft_strtrim.c\
			srcs/ft_strcmp.c\
			srcs/ft_strncmp.c\
			srcs/ft_strcpy.c\
			srcs/ft_strncpy.c\
			srcs/ft_putchar_fd.c\
			srcs/ft_putstr_fd.c\
			srcs/ft_putendl_fd.c\
			srcs/ft_putnbr_fd.c\
			srcs/ft_memalloc.c\
			srcs/ft_bzero.c\
			srcs/ft_striter.c\
			srcs/ft_striteri.c\
			srcs/ft_memcpy.c\
			srcs/ft_memmove.c\
			srcs/ft_memchr.c\
			srcs/ft_memcmp.c\
			srcs/ft_strcat.c\
			srcs/ft_strncat.c\
			srcs/ft_strlcat.c\
			srcs/ft_strchr.c\
			srcs/ft_strrchr.c\
			srcs/ft_strstr.c


HEADER = srcs/

ft_toupper: 
	@gcc -Wall -Wextra -Werror ft_toupper_main.c $(C_FILES) -I$(HEADER)

ft_strlen: 
	@gcc -Wall -Wextra -Werror ft_strlen_main.c $(C_FILES) -I$(HEADER)

ft_putnbr: 
	@gcc -Wall -Wextra -Werror ft_putnbr_main.c $(C_FILES) -I$(HEADER)
	
ft_putendl:	
	@gcc -Wall -Wextra -Werror ft_putendl_main.c $(C_FILES) -I$(HEADER)

ft_strequ:
	@gcc -Wall -Wextra -Werror ft_strequ_main.c $(C_FILES) -I$(HEADER)

ft_atoi:
	@gcc -Wall -Wextra -Werror ft_atoi_main.c $(C_FILES) -I$(HEADER)

ft_itoa:
	@gcc -Wall -Wextra -Werror ft_itoa_main.c $(C_FILES) -I$(HEADER)

ft_strdup:
	@gcc -Wall -Wextra -Werror ft_strdup_main.c $(C_FILES) -I$(HEADER)

ft_strnew:
	@gcc -Wall -Wextra -Werror ft_strnew_main.c $(C_FILES) -I$(HEADER)
	
ft_strsub:
	@gcc -Wall -Wextra -Werror ft_strsub_main.c $(C_FILES) -I$(HEADER)

ft_strjoin:
	@gcc -Wall -Wextra -Werror ft_strjoin_main.c $(C_FILES) -I$(HEADER)

ft_strtrim:
	@gcc -Wall -Wextra -Werror ft_strtrim_main.c $(C_FILES) -I$(HEADER)

ft_strcmp:
	@gcc -Wall -Wextra -Werror ft_strcmp_main.c $(C_FILES) -I$(HEADER)

ft_striter:
	@gcc -Wall -Wextra -Werror ft_striter_main.c $(C_FILES) -I$(HEADER)

ft_memmove:
	@gcc -Wall -Wextra -Werror ft_memmove_main.c $(C_FILES) -I$(HEADER)

ft_memchr:
	@gcc -Wall -Wextra -Werror ft_memchr_main.c $(C_FILES) -I$(HEADER)

ft_memcmp:
	@gcc -Wall -Wextra -Werror ft_memcmp_main.c $(C_FILES) -I$(HEADER)

ft_strcat:
	@gcc -Wall -Wextra -Werror ft_strcat_main.c $(C_FILES) -I$(HEADER)

ft_strncat:
	@gcc -Wall -Wextra -Werror ft_strncat_main.c $(C_FILES) -I$(HEADER)

ft_strlcat:
	@gcc -Wall -Wextra -Werror ft_strlcat_main.c $(C_FILES) -I$(HEADER)

ft_strchr:
	@gcc -Wall -Wextra -Werror ft_strchr_main.c $(C_FILES) -I$(HEADER)

ft_strrchr:
	@gcc -Wall -Wextra -Werror ft_strrchr_main.c $(C_FILES) -I$(HEADER)

ft_strstr:
	@gcc -Wall -Wextra -Werror ft_strstr_main.c $(C_FILES) -I$(HEADER)

