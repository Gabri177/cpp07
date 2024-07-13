/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utiles.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:02:15 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 13:02:16 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_UTILES_HPP
# define HEAD_UTILES_HPP

template <typename T>
void 	swap(T & a, T & b){

	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		min(T num1, T num2){

	if (num2 <= num1)
		return num2;
	return num1;
}

template <typename T>
T		max(T num1, T num2){

	if (num2 >= num1)
		return num2;
	return num1;
}

#endif