/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:02:23 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 13:02:24 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_ARRAY_HPP
# define HEAD_ARRAY_HPP
# include <ctime>
# include <cstdlib>

template <typename T>
class Array{

	private:
		T*								_array;
		unsigned int					_size;

	public:
										Array();
										Array(unsigned int size);
										Array(const Array & obj);
										~Array();
		Array &							operator=(const Array & obj);
		T &								operator[](long index);
		const T &						operator[](long index) const;
		unsigned int					size()const;
		void							print() const;

};

# include "Array.tpp"

#endif