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
