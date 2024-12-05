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

class Fixed
{

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &fix);
		Fixed &operator= (Fixed const &nb);
		int getRawBits( void ) const;
		void setRawBits( int const raw );


	private:
		int	_nb;
		static const int _dec;

};

#endif