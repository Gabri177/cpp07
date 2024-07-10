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