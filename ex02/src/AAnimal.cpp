
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:32:29 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:12:51 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called.\n";
}


AAnimal::AAnimal(const AAnimal& src)
{
	operator=(src);
	std::cout << "AAnimal copy constructor called.\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called.\n";
}

AAnimal& AAnimal::operator= (const AAnimal& src)
{
	this->_type = src._type;
	return (*this);
	std::cout << "AAnimal copy operator called.\n";
}

void	AAnimal::makeSound() const
{
	std::cout << "Generic animal sound.\n";
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}
