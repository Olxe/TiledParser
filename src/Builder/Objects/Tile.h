#pragma once

#include <vector>

#include "../../Tools/utility.h"
#include "Image.h"
#include "Object.h"

namespace Builder
{
	class Tile: public Customizable
	{
	public:
		Tile(int id, int gid, std::string source, float width, float height);
		virtual ~Tile();

		void SetType(std::string value) { m_type = value; }
		void AddObject(Object* object) { m_objects.push_back(object); }

		int GetId() const { return m_id; }
		int GetGid() const { return m_gid; }
		std::string GetType() const { return m_type; }
		Image GetImage() { return m_image; }
		std::vector<Object*> GetObjects() { return m_objects; }

	private:
		int m_id;
		int m_gid;
		std::string m_type;
		Image m_image;
		std::vector<Object*> m_objects;
	};

}
