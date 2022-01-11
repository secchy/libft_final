NAME = libft.a

FUNCTIONS = ft_atoi \
		ft_bzero \
	    ft_isalnum \
	    ft_isalpha \
	    ft_isascii \
	    ft_isdigit \
	    ft_isprint \
		ft_itoa \
		ft_memalloc \
		ft_memccpy \
		ft_memchr \
	    ft_memcmp \
		ft_memcpy \
		ft_memdel \
		ft_memmove \
		ft_memset \
		ft_putchar_fd \
		ft_putchar \
		ft_putendl_fd \
		ft_putendl \
		ft_putnbr_fd \
		ft_putnbr \
		ft_putstr_fd \
		ft_putstr \
		ft_strcat \
		ft_strchr \
		ft_strclr \
	    ft_strcmp \
		ft_strcpy \
		ft_strdel \
		ft_strdup \
	    ft_strncmp \
	    ft_strequ \
		ft_striter \
		ft_striteri \
		ft_strjoin \
		ft_strlcat \
	    ft_strnequ \
	    ft_strlen \
		ft_strmap \
		ft_strmapi \
		ft_strncat \
		ft_strncpy \
		ft_strnew \
		ft_strnstr \
		ft_strrchr \
		ft_strsplit \
		ft_strstr \
		ft_strsub \
		ft_strtrim \
		ft_tolower \
		ft_toupper \
		ft_lstnew \
		ft_lstdelone \
		ft_lstdel \
		ft_lstadd \
		ft_lstiter \
		ft_lstmap \
		ft_wordlen \
		ft_count_words \
		ft_delcontent \
		ft_lst_last \
		ft_lstpushback \
		ft_lst_size \
		ft_putlst \
		ft_bubblesort \
		ft_swap \

OBJECTS = $(patsubst %, %.o, $(FUNCTIONS))

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c \
	$(patsubst %, %.c ,$(FUNCTIONS))
	ar rc $(NAME) $(patsubst %, %.o, $(FUNCTIONS))
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
