#ifndef HEAD_ARRAY_HPP
# define HEAD_ARRAY_HPP
# include <ctime>
# include <cstdlib>

template <typename T>
class Array{

	private:
		T*								_array;
		int								_size;

	public:
										Array(int size);
										Array(const Array & obj);
										~Array();
		Array &							operator=(const Array & obj);
		T &								operator[](int index);
		const T &						operator[](int index) const;
		int								getSize()const;
		void							print() const;

};


template <typename T>
Array<T>::Array(int size): _array(0), _size(size){

	if (size < 0)
		throw std::out_of_range ("Size can not be negative!");
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

template <typename T>
Array<T>::Array(const Array & obj){
	*this = obj;
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
		this->_size = obj.getSize();
		try {
			_array = new T[_size];
		}catch (std::bad_alloc & e){
			std::cerr << "Can not create the array !" << std::endl;
			throw ;
		}catch (...){
			std::cerr << "Error unknow" << std::endl;
			throw ;
		}
		for (int i = 0; i < _size; i ++){
			_array[i] = obj[i];
		}
	}
	return *this;
}

template <typename T>
T &				Array<T>::operator[](int index){

	if (index < 0 || index >= _size){
		std::cerr << "Invalid index!" << std::endl;
	}
	return _array[index];
}

template <typename T>
const T &		Array<T>::operator[](int index) const {

	if (index < 0 || index >= _size){
		std::cerr << "Invalid index!" << std::endl;
	}
	return _array[index];
}

template <typename T>
int				Array<T>::getSize() const {
	return this->_size;
}

template <typename T>
void			Array<T>::print() const {

	for (int i = 0; i < _size; i ++){
		std::cout << _array[i] << " ";
	}
	std::cout << std::endl;
}

#endif