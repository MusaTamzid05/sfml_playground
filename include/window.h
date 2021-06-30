#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include <SFML/Graphics.hpp>
#include "shape.h"

namespace sf {
    class RenderWindow;
    class Time;
    struct Shape;
};

namespace Engine {
    class Window {

        public:

            Window(const std::string& window_name = "Display", int width = 640, int height = 480);
            virtual ~Window();

            void run();


            void handle_event();
            void update(sf::Time elapsed_time);
            void render();

            sf::RenderWindow* m_window;
            int width;
            int height;
            bool running;

            static sf::Time time_per_frame;

            std::vector<Shape*> shapes;


    };
}

#endif
