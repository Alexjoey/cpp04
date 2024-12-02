/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:19:39 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:20:12 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): _type("Dog")
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
	std::cout << "Dog destructor called.\n";
}

Dog& Dog::operator= (const Dog& src)
{
	this->_type = src._type;
	return (*this);
	std::cout << "Dog copy operator called.\n";
}

void	Dog::makeSound() const
{
	std::cout << "Woof\n";
}

std::string	Dog::getType() const
{
	return (this->_type);
}
