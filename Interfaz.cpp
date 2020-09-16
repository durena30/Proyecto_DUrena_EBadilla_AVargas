#include <Windows.h>
#include <SFML/Graphics.hpp>

#include <iostream>
using namespace std;
using namespace sf;
class Interfaz {
private:
	int x;
	int y;
public:
	Interfaz() { x = 0; y = 0; };
	Interfaz(int x, int y) { this->x = x; this->y = y; };
	void Inicio(int x, int y) {
		this->x = x;
		this->y = y;
		Event event;
		
		RenderWindow window(sf::VideoMode(x, y), "Ball Sort");
		window.setFramerateLimit(60);
		window.setVerticalSyncEnabled(true);
		int a = x / 2;
		int b = y / 2;
		/*sf::RectangleShape jugarbtn(sf::Vector2f(100, 50));
		jugarbtn.setFillColor(sf::Color::Magenta);
		jugarbtn.setPosition(a-50, b-50);
		*/
		
		window.clear(sf::Color::Black);
		
		//window.draw(jugarbtn);

		window.display();
		while (window.isOpen()) {
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
			}
		}
	}
	void Jugarbtn(sf::RenderWindow rw) {
		int a = x / 2;
		int b = y / 2;
		sf::Text texto;
		sf::RectangleShape jugarbtn(sf::Vector2f(100, 50));
		jugarbtn.setFillColor(sf::Color::White);
		jugarbtn.setPosition(a, b);
		rw.draw(jugarbtn);
	}
};