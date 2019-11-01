#pragma once

#include "Tile.h"

namespace Builder
{
	class ObjectTile: public Tile
	{
	public:
		ObjectTile(int id, int gid, std::string source, float width, float height);
		~ObjectTile();

	private:

	};
}

