#ifndef __UTILITY__
#define __UTILITY__

#include <vector>
#include <iostream>

template<class T>
inline void clearVector(std::vector< T* >& v)
{
	while(!v.empty()){
		if (v.back()) {
			delete v.back();
			v.back() = NULL;
		}
		
		v.pop_back();
	}
}

template<class T>
inline void clearPtr(T*& v)
{
	if(v){
		delete v;
		v = nullptr;
	}
}

template<class T>
inline void display(T v)
{
	std::cout << v << std::endl;
}

inline bool isStrOnlyDigit(const std::string& str)
{
	for(auto it = str.begin(); it != str.end(); ++it){
		if(!isdigit(*it)) return false;
	}

	return true;
}

#endif