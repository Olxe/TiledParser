#include "datanode.h"

using namespace Parser;

DataNode::DataNode(Node* parent)
	: Node(NodeType::DATA, parent)
{
}

DataNode::~DataNode()
{
}

void DataNode::ParseAttribute(const tinyxml2::XMLElement* eAttribute)
{
	const char* encoding = eAttribute->Attribute("encoding");
	if (encoding) m_encoding = encoding;
	const char* data = eAttribute->GetText();
	if (data) m_data = data;
	/*if (m_encoding == "csv") {
		const char* data = eAttribute->GetText();
		if (data) parseCVS(data);
	}*/
}

//void DataNode::parseCVS(const char* data)
//{
//	const char* delim = ",";
//	char* input = (char*)data;
//	char* next_token = nullptr;
//	char* token = strtok_s(input, delim, &next_token);
//
//	while (token) {
//		m_data.push_back(atoi(token));
//		token = strtok_s(NULL, delim, &next_token);
//	}
//}