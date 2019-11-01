#pragma once

#include "../Parser/Nodes/mapnode.h"
#include "TilesetBuilder.h"

namespace Builder
{
	class TiledBuilder
	{
	public:
		TiledBuilder();
		~TiledBuilder();

		void Build(Parser::MapNode* map);

	private:
		std::vector< Tile* > m_tiles;
	};
}

