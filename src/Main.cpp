#include "Parser/TiledParser.h"
#include "Builder/TiledBuilder.h"

int main(void)
{
	int cpt = 1;

	while(cpt > 0){
		Parser::TiledParser parser;
		Parser::MapNode* map = parser.ParseTMX("data/Maps/", "stage_2.tmx");

		Builder::TiledBuilder builder;
		builder.Build(map);

		cpt--;
		std::cout << cpt << std::endl;
	}

	/*while (1) {

	}*/


	//todo
	//	-> Error management
	return 0;
}