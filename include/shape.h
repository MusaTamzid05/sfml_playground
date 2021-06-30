#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include "vector.h"

namespace Engine {
    class Window;

    struct Shape {
        Shape(int pos_x, int pos_y);
        virtual ~Shape() {}

        virtual void render(Window* window) = 0;
        virtual void update(sf::Time elapsed_time) = 0;
        virtual void handle_event() = 0;
        
        Vector2 pos;

    };
}

#endif
