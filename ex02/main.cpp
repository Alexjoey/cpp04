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
#include "./inc/AAnimal.hpp"

int	main(void)
{
//	AAnimal b;

	std::cout << "leak test:\n";
	const AAnimal* j = new Dog();
	const AAnimal* c = new Cat();

	delete j;//should not create a leak
	delete c;

	std::cout << "\n\narray test:\n";
	AAnimal	*Animals[4];
	int	i = 0;

	while (i < 2)
		Animals[i++] = new Dog();
	while (i < 4)
		Animals[i++] = new Cat();
	i = 0;
	while (i < 4)
		delete Animals[i++];

	std::cout << "\ncat deep/shallow copy test:\n";
	Cat	ben;
	Cat	yom;
	yom = ben;
	std::cout << "ben is copied from  yom\n";
	std::cout << "ben's idea[1] is: " << ben.getIdea(1) << ".\n";
	std::cout << "yom's idea[1] is: " << yom.getIdea(1) << ".\n";
	yom.setIdea(1, "hohoho");
	std::cout << "ben's idea[1] is: " << ben.getIdea(1) << ".\n";
	std::cout << "yom's idea[1] is: " << yom.getIdea(1) << ".\n";
	std::cout << "\ndog deep/shallow copy test:\n";
	Dog	ven;
	Dog	tom;
	tom = ven;
	std::cout << "tom is copied from  ven\n";
	std::cout << "ven's idea[1] is: " << ven.getIdea(1) << ".\n";
	std::cout << "tom's idea[1] is: " << tom.getIdea(1) << ".\n";
	tom.setIdea(1, "hohoho");
	std::cout << "ven's idea[1] is: " << ven.getIdea(1) << ".\n";
	std::cout << "tom's idea[1] is: " << tom.getIdea(1) << ".\n";
}
