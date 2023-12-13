/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:04:46 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/11 17:12:52 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<unistd.h>
#include<fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
