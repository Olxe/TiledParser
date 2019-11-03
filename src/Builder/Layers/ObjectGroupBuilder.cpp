#include "ObjectGroupBuilder.h"

using namespace Builder;

ObjectGroupBuilder::ObjectGroupBuilder(Parser::ObjectGroupNode* objectGroup, std::vector< Tile* >& tiles)
{
	for (auto it : objectGroup->GetSpecificListOfChild(Parser::NodeType::OBJECT)) {
		if (Parser::ObjectNode* objNode = dynamic_cast<Parser::ObjectNode*>(it)) {
			if (objNode->GetGid() > 0) {
				if (ObjectTile* tile = dynamic_cast<ObjectTile*>(this->getTileWithGid(objNode->GetGid(), tiles))) {
					tile->SetName(objNode->GetName());
					tile->SetPosition(objNode->GetX(), objNode->GetY());
					tile->SetSize(objNode->GetWidth(), objNode->GetHeight());
					tile->SetRotation(objNode->GetRotation());
					m_layout.push_back(tile);
				}
			}
			else {

			}
		}
	}
}

ObjectGroupBuilder::~ObjectGroupBuilder()
{
}