/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:00:00 by beauhelmi          #+#    #+#             */
/*   Updated: 2023/03/15 21:41:27 by beauhelmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //use this for write() system call instead of Stdio.h which is used for input/output operations

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