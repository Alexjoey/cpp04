/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:46:35 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:58:47 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called.\n";
}


Brain::Brain(const Brain& src)
{
	operator=(src);
	std::cout << "Brain copy constructor called.\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called.\n";
}

Brain& Brain::operator= (const Brain& src)
{
	int	i = -1;
	while(++i < 100)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain copy operator called.\n";
	return (*this);
}


void	Brain::setIdea(int n, const std::string& thought)
{
	if (n < 100 && n >= 0)
		this->ideas[n] = thought;
	else
		std::cout << "please input a valid number into brain::setIdea";
}

std::string	Brain::getIdea(int n) const
{
	if (n < 100)
		return (this->ideas[n]);
	else
		std::cout << "please input a number between 0 and 99.\n";
	return (NULL);
}

