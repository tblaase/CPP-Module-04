/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:04:51 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 10:33:50 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

// Overloaded Operators
Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	return *this;
}

// Public Methods
void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **Woof**" << std::endl;
}
// Getter

// Setter
