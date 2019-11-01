#ifndef __DATANODE__
#define __DATANODE__

#include "Node.h"

namespace Parser
{
	class DataNode: public Node
	{
	public:
		DataNode(Node* parent = nullptr);
		~DataNode();

		std::string GetEncoding() const { return m_encoding; }
		//std::vector< int > GetData() const { return m_data; }
		std::string GetData() const { return m_data; }

	protected:
		void ParseAttribute(const tinyxml2::XMLElement* eAttribute) override;
		void ParseChildTag(const tinyxml2::XMLElement* eChild) override {}

	private:
		//void parseCVS(const char* data);

	private:
		std::string m_encoding;
		std::string m_data;
		//std::vector< int > m_data;

	};
}

#endif