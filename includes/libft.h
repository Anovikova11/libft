#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dest, const char *src);
int 	ft_tolower(int c);
int 	ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_putnbr(int n);

#endif