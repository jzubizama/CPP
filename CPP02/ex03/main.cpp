/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:52:41 by jzubizar          #+#    #+#             */
/*   Updated: 2024/01/10 19:23:29 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include"Point.hpp"

int main( void ) {
	Point	a(0.0f, 0.0f);
	Point	b(10.0f, 0.0f);
	Point	c(0.0f, 10.0f);
	Point	pt(-0.1f, 2.0f);
	
	if (bsp(a, b, c, pt))
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is NOT in triangle" << std::endl;
	return 0;
}
