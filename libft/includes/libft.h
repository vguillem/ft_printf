/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:51:12 by vguillem          #+#    #+#             */
/*   Updated: 2017/11/26 12:28:34 by vguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <wchar.h>
# include <stdint.h>

# define ABS(p)	(p) < 0 ? ((p) * -1) : (p)

void				ft_putchar(char c);
void				ft_putstr(char const *s);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlen(const char *str);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *s, int c, size_t n);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strdup(const char *s);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *src, const char *x);
char				*ft_strnstr(const char *src, const char *x, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *nptr);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_iswhitespace(int c);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
int					ft_countwords(const char *s, char c);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void(*dell)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *nl);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_printwordstables(char **tab);
void				ft_swap(int *a, int *b);
void				ft_foreach(int *tab, int lengh, void (*f)(int));
char				*ft_ulltoabase(unsigned long long nb, int base, int neg);
char				*ft_lltoabase(long long nb, int base);
void				ft_wputchar_fd(wchar_t c, int fd);
char				*ft_touppers(char *str);
char				*ft_tolowers(char *str);
void				ft_putunbr(unsigned long int n);
void				*ft_realloc(void *s1, int sizes1, int sizes2);
void				*ft_memconcat(void *s1, void *s2, int sizes1, int sizes2);
int					ft_nbrlen(intmax_t nb, int base);
void				ft_putnchar(char *str, int n);
int					ft_charlen(int str);

#endif
