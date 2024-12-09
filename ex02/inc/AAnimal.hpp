
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:06:05 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:18:35 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
protected:
	std::string	_type;	

public:
	AAnimal();
	AAnimal(const AAnimal& src);
	virtual ~AAnimal() = 0;

	AAnimal& operator= (const AAnimal& src);

	virtual void	makeSound() const;
	virtual std::string	getType() const;
};
