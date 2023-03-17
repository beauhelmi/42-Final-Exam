/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:38:04 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc != 2) //check argument, if not 2, print a
		write(1, "a", 1); //3 arguments- file descriptor, the string to be written, number of bytes to be written
	else
	{
		while (*argv[1])
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				argv[1]++;
				break;
			}
	}
	write(1, "\n", 1);
	return (0);
}
