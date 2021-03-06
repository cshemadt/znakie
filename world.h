#pragma once
#include <SFML/Graphics.hpp>
#include "snake.h"
enum AppleTypes{
	Red,
	Purple,
	Green
};
class World{
public:
	struct Grid{
		sf::Vector2u size;
		Grid(const int &x, const int &y) : size(x,y){};
		Grid(){};
	};
	World(sf::Vector2u);
	~World();
	int get_block_size() const;
	void respawn_apple();
	void update(Snake&);
	void render(sf::RenderWindow&);
	AppleTypes get_apple_type();
	Grid get_grid() const;
private:
	int m_block_size;
	sf::Vector2u m_window_size;
	sf::Vector2i m_item;
	sf::CircleShape m_apple;
	sf::RectangleShape m_bounds[4];
	AppleTypes m_apple_type;
	Grid grid;
};
