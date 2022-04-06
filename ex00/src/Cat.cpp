/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:41:40 by tblaase           #+#    #+#             */
/*   Updated: 2022/04/06 11:42:32 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
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
void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}

// Getter

// Setter
