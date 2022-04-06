/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:24:03 by tblaase           #+#    #+#             */
/*   Updated: 2022/04/06 11:44:09 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal():_type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

// Overloaded Operators
Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

// Public Methods
void Animal::makeSound(void)const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

// Getter
std::string	Animal::getType(void)const
{
	return (this->_type);
}

// Setter
