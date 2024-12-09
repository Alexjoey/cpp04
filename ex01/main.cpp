/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:20:48 by amylle            #+#    #+#             */
/*   Updated: 2024/12/02 14:21:56 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Cat.hpp"
#include "./inc/Dog.hpp"
#include "./inc/Animal.hpp"

int	main(void)
{
	std::cout << "leak test:\n";
	const Animal* j = new Dog();
	const Animal* c = new Cat();

	delete j;//should not create a leak
	delete c;

	std::cout << "array test:\n";
	Animal	*Animals[4];
	int	i = 0;

	while (i < 2)
		Animals[i++] = new Dog();
	while (i < 4)
		Animals[i++] = new Cat();
	i = 0;
	while (i < 4)
		delete Animals[i++];

	std::cout << "deep/shallow copy test:\n";
	Cat	ben;
	Cat	yom;
	yom = ben;
	std::cout << "ben is copied from  yom";
	std::cout << "ben's idea[1] is: " << ben.getIdea(1) << ".\n";
	std::cout << "yom's idea[1] is: " << yom.getIdea(1) << ".\n";
	yom.setIdea(1, "hohoho");
	std::cout << "ben's idea[1] is: " << ben.getIdea(1) << ".\n";
	std::cout << "yom's idea[1] is: " << yom.getIdea(1) << ".\n";
}
