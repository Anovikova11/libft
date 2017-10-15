/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 17:44:51 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/13 17:56:49 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_strlen(const char *s);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *dest, const char *src);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putnbr(int n);
char				*ft_strstr(const char *haystack, const char *needle);
void				ft_strclr(char *s);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_memdel(void **ap);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_isspace(int c);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_word_count(char const *s, char c);
int					ft_word_len(char const *s, char c, int i);
int					ft_end(char const *s, int i);
char				**ft_fill_array(char **s1, const char *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
