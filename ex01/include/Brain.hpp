/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:58:58 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/31 12:14:33 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class Brain
{
	private:
		std::string _ideas[100];

	public:
	// Constructors
		Brain();
		Brain(const Brain &copy);

	// Deconstructors
		virtual ~Brain();

	// Overloaded Operators
		Brain &operator=(const Brain &src);

	// Public Methods

	// Getter
		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};
