#include "Object.h"

using namespace Builder;

Object::Object(std::string name, std::string type, float x, float y, float width, float height, float rotation)
	: m_name(name)
	, m_type(type)
	, m_x(x)
	, m_y(y)
	, m_width(width)
	, m_height(height)
	, m_rotation(rotation)
{
}

Object::~Object()
{
}