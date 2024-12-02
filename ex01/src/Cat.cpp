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
	Animal::_type = "Cat";
	std::cout << "Cat default constructor called.\n";
}


Cat::Cat(const Cat& src): Animal(src)
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
	Brain	*pointer = new Brain(*src._brain);
	delete this->_brain;
	this->_brain = pointer;
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
