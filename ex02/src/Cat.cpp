/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:08:26 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:28:35 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): _type("Cat"), _brain(new (Brain))
{
	AAnimal::_type = "Cat";
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, "Thoughts");
	std::cout << "Cat default constructor called.\n";
}


Cat::Cat(const Cat& src): AAnimal(src)
{
	operator=(src);
	std::cout << "Cat copy constructor called.\n";
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called.\n";
}

Cat& Cat::operator= (const Cat& src)
{
	this->_type = src._type;
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat copy operator called.\n";
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}

std::string	Cat::getType() const
{
	return (this->_type);
}


std::string	Cat::getIdea(int n) const
{
	if (n < 100)
		return (this->_brain->getIdea(n));
	else
		std::cout << "please input a number between 0 and 99.\n";
	return (NULL);
}

void	Cat::setIdea(int n, std::string idea)
{
	if (n < 100)
		this->_brain->setIdea(n, idea);
	else
		std::cout << "please input a number between 0 and 99.\n";
}
