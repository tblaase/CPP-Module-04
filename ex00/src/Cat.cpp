/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:40 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/29 18:54:03 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


// Constructors
Cat::Cat(): _type("cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	/*CODE*/
}

// Overloaded Operators
Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

// Public Methods

// Getter

// Setter

// Overload for ostream
std::ostream &operator<<(std::ostream &o, Animal const animal)
{
	o << &animal << " is a " << animal.getType() << std::endl;
	return (o);
}
