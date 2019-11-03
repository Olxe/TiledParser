#pragma once

#include "Tile.h"

namespace Builder
{
	class ObjectTile: public Tile
	{
	public:
		ObjectTile(int id, int gid, std::string source, float width, float height);
		~ObjectTile();

		void SetName(std::string name);
		void SetPosition(float x, float y);
		void SetSize(float width, float height);
		void SetRotation(float rotation);

		std::string GetName() const { return m_name; }
		float GetX() const { m_x; }
		float GetY() const { m_y; }
		float GetWidth() const { m_width; }
		float GetHeight() const { m_height; }
		float GetRotation() const { m_rotation; }

	private:
		std::string m_name;
		float m_x;
		float m_y;
		float m_width;
		float m_height;
		float m_rotation;

	};
}

