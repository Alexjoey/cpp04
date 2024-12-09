/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:19:39 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 15:26:34 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): _type("Dog"), _brain(new (Brain))
{
	Animal::_type = "Dog";
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = "Thoughts";
	std::cout << "Dog default constructor called.\n";
}

Dog::Dog(const Dog& src): Animal(src)
{
	operator=(src);
	std::cout << "Dog copy constructor called.\n";
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called.\n";
}

Dog& Dog::operator= (const Dog& src)
{
	this->_type = src._type;
	Brain	*pointer = new Brain(*src._brain);
	delete this->_brain;
	this->_brain = pointer;
	std::cout << "Dog copy operator called.\n";
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof\n";
}

std::string	Dog::getType() const
{
	return (this->_type);
}
