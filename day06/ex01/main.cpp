#include "file.hpp"

uintptr_t serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(void){
	Data *ptr = new Data();
	Data *ptr2;
	uintptr_t temp;
	ptr->data = "shall stay non changed";
	std::cout << "before serialization: " << "'" << ptr->data << "'" << std::endl;
	temp = serialize(ptr);
	ptr2 = deserialize(temp);
	std::cout << "after deserialization: " << "'" << ptr2->data << "'" <<  std::endl;
	delete ptr;
	return 0;
}