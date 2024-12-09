/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:06:05 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:18:35 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	_type;	

public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();

	Animal& operator= (const Animal& src);

	virtual void	makeSound() const;
	virtual std::string	getType() const;
};
