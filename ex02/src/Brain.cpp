/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:59:07 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 16:18:49 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

// Overloaded Operators
Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if (src._ideas[i].length() > 0)
			this->_ideas[i].assign(src._ideas[i]);
	}
	return *this;
}

// Public Methods

// Getter
const std::string	Brain::getIdea(size_t i)const
{
	return(this->_ideas[i]);
}

const std::string *Brain::getIdeaAddress(size_t i)const
{
	const std::string	&stringREF = this->_ideas[i];
	return(&stringREF);
}
// Setter
void	Brain::setIdea(size_t i, std::string idea)
{
	this->_ideas[i] = idea;
}
