#include <memory>

class Widget{};

int priority();

void processWidget(std::shared_ptr<Widget> pw, int priority);