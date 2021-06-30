#include "window.h"
#include "circle.h"
#include <SFML/Graphics.hpp>


namespace Engine {

    sf::Time Window::time_per_frame = sf::seconds(1.0f / 60.0f);

    Window::Window(const std::string& window_name, int width, int height):width(width), height(height), running(false) {
        m_window = new sf::RenderWindow(sf::VideoMode(width, height), window_name);
        shapes.push_back(new Circle(width / 2, height / 2));

    }

    Window::~Window() {
        delete m_window;
    }

    void Window::run() {
        running = true;

        sf::Clock clock;
        sf::Time time_since_last_update = sf::Time::Zero;

        while(running) {
            time_since_last_update += clock.restart();

            while(time_since_last_update > time_per_frame) {
                time_since_last_update -= time_per_frame;
                handle_event();
                update(time_per_frame);

            }
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

    void Window::update(sf::Time elapsed_time) {

    }

    void Window::render() {
        m_window->clear();
        for(Shape* shape : shapes)
            shape->render(this);

        m_window->display();
    }
}
