/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:56:35 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:56:35 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int	main( void )
{
	Harl Harl;

    std::cout << "[debug]: ";
	Harl.complain("debug");
    std::cout << "[info]: ";
	Harl.complain("info");
    std::cout << "[warning]: ";
	Harl.complain("warning");
    std::cout << "[error]: ";
	Harl.complain("error");
}
