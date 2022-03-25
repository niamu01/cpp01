/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:55:49 by yeju              #+#    #+#             */
/*   Updated: 2022/03/25 20:56:07 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};


#endif