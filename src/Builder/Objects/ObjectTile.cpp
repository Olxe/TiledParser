#include "ObjectTile.h"

using namespace Builder;

ObjectTile::ObjectTile(int id, int gid, std::string source, float width, float height)
	: Tile(id, gid, source, width, height)
	, m_x(0.f)
	, m_y(0.f)
	, m_width(0.f)
	, m_height(0.f)
	, m_rotation(0.f)
{
}

ObjectTile::~ObjectTile()
{
}

void Builder::ObjectTile::SetName(std::string name)
{
	m_name = name;
}

void Builder::ObjectTile::SetPosition(float x, float y)
{
	m_x = x;
	m_y = y;
}

void Builder::ObjectTile::SetSize(float width, float height)
{
	m_width = width;
	m_height = height;
}

void Builder::ObjectTile::SetRotation(float rotation)
{
	m_rotation = rotation;
}
