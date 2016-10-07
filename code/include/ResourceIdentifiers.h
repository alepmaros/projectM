#ifndef RESOURCEIDENTIFIERS_HPP
#define RESOURCEIDENTIFIERS_HPP


namespace sf
{
	class Texture;
	class Font;
}


namespace Textures
{
	enum ID
	{
		Player,
		Kib,
		Sky,
		Ground,
		TileMap1,
		PickupCoin,
	};
}

namespace Fonts
{
	enum ID
	{
		Main,
	};
}

template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;
typedef ResourceHolder<sf::Font, Fonts::ID>		  FontHolder;
#endif