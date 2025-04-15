# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 17:24:52 by maduneau          #+#    #+#              #
#    Updated: 2025/01/07 22:24:32 by marieduneau      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target executable
NAME = libft.a

# Liste des fichiers source
SRC =   ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_split.c \
		get_next_line.c \

BONUS =	get_next_line_bonus.c \

# Options de compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Liste des fichiers objet générés à partir des fichiers source
OBJ = $(SRC:.c=.o)

BONUS = $(BONUS:.c=.o)

# Règle par défaut
all: $(NAME)

# Creer library
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

#Pattern rule to compile each source file into an object file.
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie les fichiers temporaires 
clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Full clean target to remove generated files and the executable
re: fclean all 

# Libft unit test UBUNTU
# so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
#	cc -nostartfiles -shared -o libft.so $(OBJ)

 # Libft unit test NOT UNBUNTU
 #so:
 #	$(CC) -fPIC $(CFLAGS) $(SRC)
#	cc -shared -o libft.so $(OBJ)
