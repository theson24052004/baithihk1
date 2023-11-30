#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "V? m?t h�nh." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "V? m?t h�nh tr�n." << std::endl;
    }
};

int main() {
    Shape* hinh1 = new Shape();
    Shape* hinh2 = new Circle();

    hinh1->draw(); // V? m?t h�nh.
    hinh2->draw(); // V? m?t h�nh tr�n.

    delete hinh1;
    delete hinh2;

    return 0;
}

