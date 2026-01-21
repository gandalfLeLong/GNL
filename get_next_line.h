/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:22:13 by cmathot           #+#    #+#             */
/*   Updated: 2023/11/17 11:27:35 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_strlen(char *s);
int		new_line(char *str);
char	*get_next_line(int fd);
char	*ft_get_content(int fd, char *stock);
char	*ft_get_line(char *stock);
char	*ft_get_rest_n_free(char *stock);
char	*ft_new_array(void);
char	*ft_strjoin_n_free(char *stock, char *buf);
char	*ft_return_n_free(char *str);

#endif
