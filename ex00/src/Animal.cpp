/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:32:29 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:12:51 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(): _type("default")
{
	std::cout << "Animal default constructor called.\n";
}


Animal::Animal(const Animal& src)
{
	operator=(src);
	std::cout << "Animal copy constructor called.\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called.\n";
}

Animal& Animal::operator= (const Animal& src)
{
	this->_type = src._type;
	return (*this);
	std::cout << "Animal copy operator called.\n";
}

void	Animal::makeSound() const
{
	std::cout << "Generic animal sound.\n";
}

std::string	Animal::getType() const
{
	return (this->_type);
}
