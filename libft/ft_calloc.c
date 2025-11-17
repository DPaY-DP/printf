/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:27:17 by dpfannen          #+#    #+#             */
/*   Updated: 2025/10/24 18:05:20 by dpfannen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*pnt;

	pnt = malloc(nelem * elsize);
	if (!pnt)
		return (0);
	ft_bzero(pnt, nelem * elsize);
	return (pnt);
}
// int main()
// {
//     int *array = ft_calloc(10, sizeof(int));
//     array[4] = 4;
//     printf("%d", array[4]);
//     free(array);
// }