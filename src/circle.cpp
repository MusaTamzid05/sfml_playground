#include "circle.h"
#include "window.h"
#include <iostream>

namespace Engine {

    Circle::Circle(int pos_x, int pos_y, float radius):
        Shape(pos_x, pos_y) {
            std::cout << "Circle radius " << radius << "\n";
            shape.setRadius(radius);
            shape.setPosition(pos_x, pos_y);
            shape.setFillColor(sf::Color::Cyan);
        }

    void Circle::render(Window* window) {
        window->m_window->draw(shape);
    }

    void Circle::update(sf::Time elapsed_time) {

    }


    void Circle::handle_event() {

    }
}
