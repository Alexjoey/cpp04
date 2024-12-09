/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:18:49 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:19:27 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
protected:
	std::string	_type;	

public:
	Dog();
	Dog(const Dog& src);
	~Dog();

	Dog& operator= (const Dog& src);
	void	makeSound() const;
	std::string	getType() const;
};
