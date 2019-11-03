#pragma once

#include "Layer.h"

#include <vector>

class TileLayer: public Layer
{
public:
	TileLayer();
	~TileLayer();

	//void Build(Parser::LayerNode* layerNode, std::vector< Tile* >& tiles);

private:
	std::vector< std::vector< int > > m_layout;

};

