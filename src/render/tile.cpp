#include <render/typedef.hpp>
#include <data/dataMap.hpp>
#include <data/dataset.hpp>
#include <render/tileset.hpp>
#include "tile.hpp"

namespace coldline
{

namespace render
{

Tile::Tile( Dataset const &dataset, DataMap const &dataMap ) :
	tileset( dataset.at< Tileset >( dataMap.getString( "tileset" ))),
	tilesetPosition( dataMap.getDataMap( "position" )->toVector2< render::Coordinate >())
{

}

Tile::Tile( Tileset const &tileset, Point const &tilesetPosition ) noexcept:
	tileset( tileset ),
	tilesetPosition( tilesetPosition )
{

}

}

}
