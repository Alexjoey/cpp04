/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:18:49 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 15:25:08 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{

private:
	std::string	_type;	
	Brain	*_brain;

public:
	Dog();
	Dog(const Dog& src);
	~Dog();

	Dog& operator= (const Dog& src);
	void	makeSound() const;

	std::string	getType() const;
	std::string	getIdea(int n) const;
	void	setIdea(int n, std::string idea);
};
