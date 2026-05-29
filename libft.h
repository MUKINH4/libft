#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str);
char    *ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);

#endif
