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
	AAnimal::_type = "Dog";
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(i, "thoughts");
	std::cout << "Dog default constructor called.\n";
}

Dog::Dog(const Dog& src): AAnimal(src)
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
	delete this->_brain;
	this->_brain = new Brain(*src._brain);
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

std::string	Dog::getIdea(int n) const
{
	if (n < 100)
		return (this->_brain->getIdea(n));
	else
		std::cout << "please input a number between 0 and 99.\n";
	return (NULL);
}

void	Dog::setIdea(int n, std::string idea)
{
	if (n < 100)
		this->_brain->setIdea(n, idea);
	else
		std::cout << "please input a number between 0 and 99.\n";
}
