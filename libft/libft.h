/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:59:30 by jyim              #+#    #+#             */
/*   Updated: 2014/03/27 12:37:37 by ael-kadh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <libftprintf.h>
# include "get_next_line.h"
# include "lst.h"

char		**ft_strsplit_mult(char const *s);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
char		*ft_strncpy(char *s1, const char *s2, size_t n);
void		ft_putendl(char const *s);
char		*ft_strnew(size_t size);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *s1, const char *s2, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memmove(void *s1, const void *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		*ft_memalloc(size_t size);
int			ft_strequ(const char *s1, const char *s2);
void		ft_strclr(char *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strtrim(char const *s);
void		ft_striter(char *s, void(*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		**ft_strsplit(char const *s, char c);
t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void		ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		ft_lstadd(t_list **alst, t_list *new);
void		aff_list_str(t_list *new);
void		aff_rev_list_str(t_list *new);
t_list		*inser_tri(char *s1, t_list *first);
char		*ft_strinjoin(char const *s1, char const *s2, int pos);
int			is_t(int c);
int			verif_token_m(char c, int q, char *qt);
int			mult_1(char const *s, t_mult m);
int			mult_2(char const *s, t_mult m);

#endif
