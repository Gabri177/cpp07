/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:02:18 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 13:02:19 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_ARRAY_HPP
# define HEAD_ARRAY_HPP
# include <ctime>
# include <cstdlib>
# include <string>

template <typename T>
void		iter(T *arr, size_t size, void(* func)(T &)){

	if (arr && func){
		for (size_t i = 0; i < size; i ++){

			func(arr[i]);
		}
	}
}

#endif