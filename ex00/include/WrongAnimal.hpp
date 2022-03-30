/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:30:17 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 10:39:09 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class WrongAnimal
{
	protected:
		std::string _type;

	public:
	// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

	// Deconstructors
		virtual ~WrongAnimal();

	// Overloaded Operators
		WrongAnimal &operator=(const WrongAnimal &src);

	// Public Methods
		virtual void makeSound(void)const;
	// Getter
		std::string getType(void)const;
	// Setter

};

