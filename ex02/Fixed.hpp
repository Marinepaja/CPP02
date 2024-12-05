/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:02:41 by mlaporte          #+#    #+#             */
/*   Updated: 2024/10/29 14:02:41 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &fix);
		Fixed(int const i);
		Fixed(float const f);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed &operator= (Fixed const &nb);
		Fixed operator+ (Fixed const &nb);
		Fixed operator- (Fixed const &nb);
		Fixed operator* (Fixed const &nb);
		Fixed operator/ (Fixed const &nb);
		Fixed &operator++ (void);
		Fixed &operator-- (void);
		Fixed operator++ (int);
		Fixed operator-- (int);

		bool operator== (Fixed const &nb) const;
		bool operator!= (Fixed const &nb) const;
		bool operator<= (Fixed const &nb) const;
		bool operator>= (Fixed const &nb) const;
		bool operator> (Fixed const &nb) const;
		bool operator< (Fixed const &nb) const;
		
		Fixed static &min(Fixed &a, Fixed &b);
		Fixed static const &min(Fixed const &a, Fixed const &b);
		Fixed static &max(Fixed &a, Fixed &b);
		Fixed static const &max(Fixed const &a, Fixed const &b);

		int getRawBits( void ) const;
		void setRawBits( int const raw );


	private:
		int	_nb;
		static const int _dec;

};

std::ostream &operator<<(std::ostream &o, Fixed const &fix);

#endif