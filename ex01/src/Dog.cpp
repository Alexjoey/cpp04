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
	std::cout << "Dog copy operator called.\n";
	Brain	*pointer = new Brain(*src._brain);
	delete this->_brain;
	this->_brain = pointer;
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
