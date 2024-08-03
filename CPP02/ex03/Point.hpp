/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josu <josu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:42:20 by jzubizar          #+#    #+#             */
/*   Updated: 2023/12/25 22:33:17 by josu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include"Fixed.hpp"
#include<iostream>
#include<cmath>

class Point{
	private:
		Fixed const	_x;
		Fixed const _y;

	public:
		Point(void);
		Point(const float f1, const float f2);
		Point (const Point &pnt);
		Point	&operator = (const Point &pnt);
		~Point(void);
		Fixed get_x(void) const;
		Fixed get_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif