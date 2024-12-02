/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:29:26 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:30:17 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(): _type("WrongCat")
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "WrongCat default constructor called.\n";
}


WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	operator=(src);
	std::cout << "WrongCat copy constructor called.\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called.\n";
}

WrongCat& WrongCat::operator= (const WrongCat& src)
{
	this->_type = src._type;
	return (*this);
	std::cout << "WrongCat copy operator called.\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meow\n";
}

std::string	WrongCat::getType() const
{
	return (this->_type);
}
