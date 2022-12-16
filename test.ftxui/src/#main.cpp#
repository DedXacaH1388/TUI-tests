#include <ftxui/dom/elements.hpp>  // for operator|, text, Element, hcenter, Fit, hbox, size, window, Elements, bold, dim, EQUAL, WIDTH
#include <ftxui/screen/screen.hpp>  // for Screen
#include <memory>                   // for allocator, shared_ptr
#include <string>                   // for string, to_string
#include <utility>                  // for move
 
#include "ftxui/dom/node.hpp"      // for Render
#include "ftxui/screen/color.hpp"  // for ftxui
 
int main(int argc, const char* argv[]) {
    using namespace ftxui;
 
    Elements content;
    content.push_back(window(text("title") | hcenter | bold, text("test text") | hcenter | dim) | size(WIDTH, EQUAL, 180));

    auto document = hbox(std::move(content));
    auto screen = Screen::Create(Dimension::Full());
    Render(screen, document);
    screen.Print();
 
    return 0;
}
