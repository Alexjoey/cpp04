/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:25:04 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:27:16 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;	

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	~WrongAnimal();

	WrongAnimal& operator= (const WrongAnimal& src);

	void	makeSound() const;
	std::string	getType() const;
};
