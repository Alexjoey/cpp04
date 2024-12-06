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
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongJ = new WrongCat();

std::cout << wrongJ->getType() << " " << std::endl;
wrongJ->makeSound();
wrongMeta->makeSound();


delete wrongJ;
delete wrongMeta;

return 0;
}
