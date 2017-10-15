/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017
** File description:
** What language is this ?
*/

#ifndef	LIB_MY_H
#define	LIB_MY_H

void	my_putchar(char);
int	my_isneg(int);
int	my_put_nbr(int);
void	my_swap(int *, int *);
int	my_putstr(char const *);
int	my_strlen(char const *);
int	my_getnbr(char const *);
void	my_sort_int_array(int *, int);
int	my_compute_power_rec(int, int);
int	my_compute_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char *, char const *);
char	*my_strncpy(char *, char const *, int);
char	*my_revstr(char *);
char	*my_strstr(char *, char const *);
int	my_strcmp(char const *, char const *);
int	my_strncmp(char const *, char const *, int);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
int	my_str_isalpha(char const *);
int	my_str_isnum(char const *);
int	my_str_islower(char const *);
int	my_str_isupper(char const *);
int	my_str_isprintable(char const *);
int	my_showstr(char const *);
int	my_showmem(char const *, int);
char	*my_strcat(char *, char const *);
char	*my_strncat(char *, char const *, int);
char	**my_str_to_word_array(char const *);
int	check_prime(int);
int	my_len(char *);
void	check_last_char(char *, int);
void	lowercase_char(char *, int );
char	*check_param(char *, char const *);
int	my_dest_len(char *);
char	*check_n_param(char *, char const *);
int	my_dest_n_len(char *);
int	cpy_strlen(char const *);
int	len_strstr(char const *);
int	check_alpha(char);
int	cpt_pos(char const *, int);
int	find_word(char const *);
char	*put_word_in_tab(char const *, int);

#endif	/* LIB_MY_H */
