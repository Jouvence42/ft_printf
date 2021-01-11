#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

char	*ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strdup(char *s1);
char	*ft_itoa(int n);
int		ft_strlen(char *str);
void	ft_putstrprint(char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char *str, int *i);
int		ft_intlen(int i);

#endif
