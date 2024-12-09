/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:43:02 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:46:26 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Brain
{
public:
	std::string	ideas[100];
	Brain();
	Brain(const Brain& src);
	~Brain();

	Brain& operator= (const Brain& src);
};
