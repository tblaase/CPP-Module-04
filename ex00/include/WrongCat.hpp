/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:30:54 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 10:47:24 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include "WrongAnimal.hpp"

// classes

class WrongCat: public WrongAnimal
{
	private:
		// Private Members

	public:
	// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

	// Deconstructors
		~WrongCat();

	// Overloaded Operators
		WrongCat &operator=(const WrongCat &src);

	// Public Methods

	// Getter

	// Setter

};
