/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:07:02 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:17:09 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
protected:
	std::string	_type;	

public:
	Cat();
	Cat(const Cat& src);
	~Cat();

	Cat& operator= (const Cat& src);
	void	makeSound() const;
	std::string	getType() const;
};
