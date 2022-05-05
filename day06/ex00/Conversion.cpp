#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(const Conversion&) {}

Conversion::~Conversion() {}

Conversion & Conversion::operator=(const Conversion& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}

float Conversion::makeTreatable(std::string const & treat){
	float treatable;
	if(treat.length() == 1)
	{
		int temp = static_cast<int>(treat[0]);
		treatable = static_cast<float>(temp);
	}
	else
	{
		treatable = atof(treat.c_str());
		if(treatable == 0 && treat.length() > 1)
			throw cannotConvert();
	}
	return (treatable);
}

float Conversion::toFloat(float f){
	return (static_cast<float>(f));
}

int Conversion::toInt(float f){
	int i = static_cast<int>(f);
	if(i != 0 && (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity() || std::isnan(f)))
		throw invalidFloat();
	return (i);

}
char Conversion::toChar(float f){
	char c = static_cast<char>(f);
	if(f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity() || std::isnan(f))
		throw invalidFloat();
	else if(f < 32 || f > 126)
		throw invalidChar();
	return(c);
}
double Conversion::toDouble(float f){
	return(static_cast<double>(f));
}