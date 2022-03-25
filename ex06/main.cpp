/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:55:54 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:55:55 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv )
{
	Harl Harl;

    if (argc != 2)
    {
		std::cout << "This program requires one factor." << std::endl;
        return (0);
    }
	Harl.complain(argv[1]);

    return (0);
}
