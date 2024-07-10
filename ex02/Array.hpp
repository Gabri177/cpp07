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