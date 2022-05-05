#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array{
	public:

		Array<T>(void): _size(0), _array(NULL){
			std::cout << "default constructor called" << std::endl;
		}
		Array<T>(unsigned int n): _size(n){
			std::cout << "assignation constructor called" << std::endl;
			if (this->_size < 0)
				throw std::out_of_range("Index out of range");
			this->_array = new T[n];
		}
		Array<T>(const Array<T> & src){
			std::cout << "copy constructor called" << std::endl;
			if(this == &src)
				return;
			this->_size = src.size();
			this->_array = new T[this->_size]();
			for(int i = 0;i < this->_size; i++)
				this->_array[i] = src._array[i];
		}
		~Array<T>(void){
			std::cout << "destructor called" << std::endl;
			if(this->_size > 0)
				delete [] this->_array;
		}

		Array<T> &operator=(const Array<T> & src){
			std::cout << "operator= function called" << std::endl;
			if(this == &src)
				return *this;
			this->_array = new T[src.size()]();
			this->_size = src.size();
			for(int i = 0; i < this->size();i++)
				this->_array[i] = src._array[i];
			return *this;
		}

		T &operator[](const unsigned int i){
			if (i > static_cast<unsigned int>(this->_size) - 1)
				throw std::out_of_range("Index out of range");
			return(this->_array[i]);
		}
		int size(void)const{
			return this->_size;
		}
	private:

		int _size;
		T *_array;
};

template<typename T>
std::ostream	&operator<<( std::ostream &ostr, const Array<T> &instance );

#endif //ARRAY_H //