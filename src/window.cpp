#include "window.h"
#include <SFML/Graphics.hpp>

namespace Engine {

    Window::Window(const std::string& window_name, int width, int height):width(width), height(height), running(false) {
        m_window = new sf::RenderWindow(sf::VideoMode(width, height), window_name);

    }

    Window::~Window() {
        delete m_window;
    }

    void Window::run() {
        running = true;

        while(running) {
            handle_event();
            update();
            render();

        }

        m_window->close();
    }

    void Window::handle_event() {
        sf::Event event;

        while(m_window->pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                running = false;
        }
    }

    void Window::update() {

    }

    void Window::render() {
        m_window->clear();
        m_window->display();
    }
}
