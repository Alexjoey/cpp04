/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:26:07 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:27:10 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called.\n";
}


WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	operator=(src);
	std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called.\n";
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& src)
{
	this->_type = src._type;
	return (*this);
	std::cout << "WrongAnimal copy operator called.\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Generic animal sound.\n";
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
