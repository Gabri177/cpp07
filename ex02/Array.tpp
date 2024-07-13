/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:02:25 by yugao             #+#    #+#             */
/*   Updated: 2024/07/13 13:02:26 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
Array<T>::Array(): _array(0), _size(0) {}


template <typename T>
Array<T>::Array(unsigned int size): _array(0), _size(size){

	if (size < 0)
		throw std::out_of_range ("Size can not be negative!");
	if (size != 0){
		try {
			_array = new T[size];
		}catch (std::bad_alloc & e){
			std::cerr << "Can not create the array !" << std::endl;
			throw ;
		}catch (...){
			std::cerr << "Error unknow" << std::endl;
			throw ;
		}
	}
}

template <typename T>
Array<T>::Array(const Array & obj): _array(0), _size(obj.size()){
	
	if (_size > 0){

		_array = new T[_size];
		for (size_t i = 0; i < _size; i ++){
			_array[i] = obj._array[i];
		}
	}
}

template <typename T>
Array<T>::~Array(){
	if (_array)
		delete [] _array;
	_array = 0;
}

template <typename T>
Array<T> &		Array<T>::operator=(const Array & obj){

	if (this != &obj){

		if (_array){
			delete [] _array;
			_array = 0;
		}
		this->_size = obj.size();
		try {
			_array = new T[_size];
		}catch (std::bad_alloc & e){
			std::cerr << "Can not create the array !" << std::endl;
			throw ;
		}catch (...){
			std::cerr << "Error unknow" << std::endl;
			throw ;
		}
		for (size_t i = 0; i < _size; i ++){
			_array[i] = obj[i];
		}
	}
	return *this;
}

template <typename T>
T &				Array<T>::operator[](long index){

	if (index < 0 || index >= _size)
		throw std::runtime_error("Invalid index");
	return _array[index];
}

template <typename T>
const T &		Array<T>::operator[](long index) const {

	if (index < 0 || index >= _size)
		throw std::runtime_error("Invalid index");
	return _array[index];
}

template <typename T>
unsigned int	Array<T>::size() const {
	return this->_size;
}

template <typename T>
void			Array<T>::print() const {

	for (unsigned i = 0; i < _size; i ++){
		std::cout << _array[i] << " ";
	}
	std::cout << std::endl;
}