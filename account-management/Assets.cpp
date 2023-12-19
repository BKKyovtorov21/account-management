#include "Assets.hpp"
void Assets::InitializeFonts() {
    if (font.loadFromFile("../res/arial.ttf"))
        return;
    std::cout << "font not loaded";
}
