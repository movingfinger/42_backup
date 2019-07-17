/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:34:27 by sako              #+#    #+#             */
/*   Updated: 2019/04/16 22:48:03 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_doublestrlen(char **str);
char	*ft_strmalloccpy(char *src);
char	*ft_strmalloccpy2(char *src);

#endif
