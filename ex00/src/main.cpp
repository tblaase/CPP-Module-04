/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:47:42 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/30 10:51:26 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Animal	*meta = new Animal();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Animal _type: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete meta;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Animal	*catto = new Cat();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Cat _type: " << catto->getType() << std::endl;
	catto->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete catto;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Animal	*doggo = new Dog();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
	doggo->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete doggo;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "Animal _type: " << wrong_meta->getType() << std::endl;
	wrong_meta->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete wrong_meta;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const WrongAnimal	*wrong_catto = new WrongCat();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << "WrongCat _type: " << wrong_catto->getType() <<std::endl;
	wrong_catto->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete wrong_catto;
	std::cout << std::endl;
}
