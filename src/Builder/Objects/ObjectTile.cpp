#include "ObjectTile.h"

using namespace Builder;

ObjectTile::ObjectTile(int id, int gid, std::string source, float width, float height)
	: Tile(id, gid, source, width, height)
{
}

ObjectTile::~ObjectTile()
{
}