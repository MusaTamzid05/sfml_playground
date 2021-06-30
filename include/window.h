#ifndef GAME_H
#define GAME_H

#include <string>

namespace sf {
    class RenderWindow;
};

namespace Engine {
    class Window {

        public:

            Window(const std::string& window_name = "Display", int width = 640, int height = 480);
            virtual ~Window();

            void run();

        private:

            void handle_event();
            void update();
            void render();

            sf::RenderWindow* m_window;
            int width;
            int height;
            bool running;


    };
}

#endif
