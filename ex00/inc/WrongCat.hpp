/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:28:23 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:29:11 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
protected:
	std::string	_type;	

public:
	WrongCat();
	WrongCat(const WrongCat& src);
	~WrongCat();

	WrongCat& operator= (const WrongCat& src);
	void	makeSound() const;
	std::string	getType() const;
};
