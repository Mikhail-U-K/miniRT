/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <bdaedric@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:23:03 by bdaedric          #+#    #+#             */
/*   Updated: 2021/03/03 17:26:36 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_strlen(const char *str);
int				ft_isdigit(int c);
size_t			ft_strlcpy(char *restrict_dest, char *restrict_src, size_t l);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_isalpha(int c);
int				ft_atoi(const char *str);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strnstr(char const *haystack,\
				char const *needle, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(char const *str, int symnum);
char			*ft_strrchr(char *str, int symnum);
void			*ft_memchr(const void *src, int c, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *src, int sym, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			**ft_split(char const *s, char c);
void			ft_lstadd_back(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
int				get_next_line(int fd, char **line);
size_t			ft_strcpy(char *dest, const char *src);
#endif
