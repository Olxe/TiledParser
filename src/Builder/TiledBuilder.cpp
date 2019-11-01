#include "TiledBuilder.h"

using namespace Builder;

TiledBuilder::TiledBuilder()
{
}

TiledBuilder::~TiledBuilder()
{
	clearVector(m_tiles);
}

void Builder::TiledBuilder::Build(Parser::MapNode* map)
{
	clearVector(m_tiles);

	for (auto map_child_node : map->GetChildNodes()) {
		if (Parser::TilesetNode* tileset = dynamic_cast<Parser::TilesetNode*>(map_child_node)) {
			TilesetBuilder tilesetBuilder;
			std::vector< Tile* > tiles = tilesetBuilder.Build(tileset, map->GetDirectory());
			m_tiles.insert(m_tiles.end(), tiles.begin(), tiles.end());
		}
		else if (Parser::LayerNode* layer = dynamic_cast<Parser::LayerNode*>(map_child_node)) {
			display("layer");
		}
		if (Parser::ObjectGroupNode* objectGroup = dynamic_cast<Parser::ObjectGroupNode*>(map_child_node)) {
			display("objectGroup");
		}
	}
}
