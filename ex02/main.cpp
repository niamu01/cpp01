/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:44:17 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 19:44:18 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::cout << "print str: " << str << std::endl;

	std::string *stringPTR = &str;

	std::string &stringREF = str;

	std::cout << "print stringPTR: " << stringPTR << std::endl;
	std::cout << "print &stringREF: " << &stringREF << std::endl;

	std::cout << "print *stringPTR: " << *stringPTR << std::endl;
	std::cout << "print stringREF: " << stringREF << std::endl;

	return (0); 
}