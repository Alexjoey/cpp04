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
#include "./inc/WrongCat.hpp"
#include "./inc/WrongAnimal.hpp"

int	main(void)
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << i->getType() << ": ";
i->makeSound(); //will output the cat sound!
std::cout << j->getType() << ": ";
j->makeSound();
std::cout << meta->getType() << ": ";
meta->makeSound();

delete i;
delete j;
delete meta;

const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongJ = new WrongCat();

std::cout << wrongJ->getType() << ": ";
wrongJ->makeSound();
std::cout << wrongMeta->getType() << ": ";
wrongMeta->makeSound();

delete wrongJ;
delete wrongMeta;

WrongCat ben;
ben.makeSound();

return 0;
}
