/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:22:17 by mlaporte          #+#    #+#             */
/*   Updated: 2024/10/30 11:22:17 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
Fixed const b(0.5f);
Fixed c = a * b;
std::cout << a << std::endl;
std::cout << (a == b) << std::endl;
std::cout << (a + b) << std::endl;
std::cout << (a - b) << std::endl;
std::cout << c << std::endl;
std::cout << (a / b) << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}