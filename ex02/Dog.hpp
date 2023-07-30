/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:05:54 by aaslan            #+#    #+#             */
/*   Updated: 2023/07/30 19:13:41 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *brain;

public:
	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	void makeSound(void) const;
	Brain* getBrain(void) const;
};

#endif
