/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:22:42 by jzubizar          #+#    #+#             */
/*   Updated: 2023/05/14 17:22:42 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>

int		ft_isin_str(char *str, char ch);
size_t	ft_strlen(const char *s);
char	*ft_strbuf_join(char *s1, char const *s2);
char	*ft_fst_line(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_cut_str(char *str);
char	*get_next_line(int fd);

#endif
