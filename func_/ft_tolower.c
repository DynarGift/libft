/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:28:31 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/17 17:37:57 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
	{
		return (arg + 32);
	}
	else
		return (arg);
}
