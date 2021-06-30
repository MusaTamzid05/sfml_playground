#include "window.h"
#include "circle.h"


int main(int argc, char** argv) {
    Engine::Window window;
    window.add(new Engine::Circle(100, 100, 10));
    window.run();
    return 0;
}
