/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:14 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 10:04:39 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include "Animal.hpp"

// classes

class Dog: public Animal
{
	private:
		// Private Members

	public:
	// Constructors
		Dog();
		Dog(const Dog &copy);

	// Deconstructors
		~Dog();

	// Overloaded Operators
		Dog &operator=(const Dog &src);

	// Public Methods
		void makeSound(void)const;
	// Getter

	// Setter

};

