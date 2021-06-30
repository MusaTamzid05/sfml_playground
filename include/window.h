#ifndef GAME_H
#define GAME_H

#include <string>
#include <SFML/Graphics.hpp>

namespace sf {
    class RenderWindow;
    class Time;
};

namespace Engine {
    class Window {

        public:

            Window(const std::string& window_name = "Display", int width = 640, int height = 480);
            virtual ~Window();

            void run();

        private:

            void handle_event();
            void update(sf::Time elapsed_time);
            void render();

            sf::RenderWindow* m_window;
            int width;
            int height;
            bool running;

            static sf::Time time_per_frame;


    };
}

#endif
