/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:02:33 by mlaporte          #+#    #+#             */
/*   Updated: 2024/10/29 14:02:33 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_dec = 8;

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;

}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const &fix)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::Fixed(int const i)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_nb = i << this->_dec;
}

Fixed::Fixed(float const f)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(f * (1 << this->_dec));
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;

}

Fixed &Fixed::operator= (Fixed const &nb)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = nb.getRawBits();
	return (*this);
}

Fixed Fixed::operator+ (Fixed const &nb)
{
	return (this->toFloat() + nb.toFloat());
}

Fixed Fixed::operator- (Fixed const &nb)
{
	return (this->toFloat() - nb.toFloat());
}

Fixed Fixed::operator* (Fixed const &nb)
{
	return (this->toFloat() * nb.toFloat());
}

Fixed Fixed::operator/ (Fixed const &nb)
{
	return (this->toFloat() / nb.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->_nb++;
	return(*this);
}

Fixed &Fixed::operator--(void)
{
	this->_nb--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return(tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	++(*this);
	return(tmp);
}

bool Fixed::operator== (Fixed const &nb) const
{
	return (this->_nb == nb.getRawBits());
}

bool Fixed::operator!= (Fixed const &nb) const
{
	return (this->_nb != nb.getRawBits());
}

bool Fixed::operator<= (Fixed const &nb) const
{
	return (this->_nb <= nb.getRawBits());
}

bool Fixed::operator>= (Fixed const &nb) const
{
	return (this->_nb >= nb.getRawBits());
}

bool Fixed::operator< (Fixed const &nb) const
{
	return (this->_nb < nb.getRawBits());
}

bool Fixed::operator> (Fixed const &nb) const
{
	return (this->_nb > nb.getRawBits());
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) 
{
	if (a >= b)
		return (a);
	return (b);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nb/ (1 << this->_dec));
}

int		Fixed::toInt(void) const
{
	return (this->_nb >> this->_dec);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return o;
}