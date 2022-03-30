/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:57 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 10:04:11 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include "Animal.hpp"

// classes

class Cat: public Animal
{
	private:
		// Private Members

	public:
	// Constructors
		Cat();
		Cat(const Cat &copy);

	// Deconstructors
		~Cat();

	// Overloaded Operators
		Cat &operator=(const Cat &src);

	// Public Methods
		void makeSound(void)const;
	// Getter

	// Setter

};

