#pragma once

#include "../../Parser/Nodes/objectgroupnode.h"
#include "Layout.h"
#include "../Objects/ObjectTile.h"

namespace Builder
{
	class ObjectGroupBuilder: public Layout
	{
	public:
		ObjectGroupBuilder(Parser::ObjectGroupNode* objectGroup, std::vector< Tile* >& tiles);
		~ObjectGroupBuilder();

	private:
		std::vector< Tile* > m_layout;

	};
}

