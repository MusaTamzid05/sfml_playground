#ifndef CICLE_H
#define CICLE_H

#include "shape.h"

namespace Engine {
    class Circle : public Shape {
        public:
        
            Circle(int pos_x, int pos_y, float radius = 40.0f);
            virtual ~Circle() {}

            void render(Window* window);
            void update(sf::Time elapsed_time);
            void handle_event();

            sf::CircleShape shape;

    };
}

#endif
