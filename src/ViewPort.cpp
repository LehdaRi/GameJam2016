#include "ViewPort.hpp"


ViewPort::ViewPort(float width, float height,
                   const Vector2Glf& position) :
    width_(width), height_(height), position_(position)
{}

void ViewPort::setPosition(const Vector2Glf& position) {
    position_ = position;
}

Matrix4Glf ViewPort::getMatrix(void) const {
    Matrix4Glf m;
    m << 1.0f/width_, 0.0f, 0.0f, -position_(0)/width_,
         0.0f, 1.0f/height_, 0.0f, -position_(1)/height_,
         0.0f, 0.0f, 1.0f, 0.0f,
         0.0f, 0.0f, 0.0f, 1.0f;

    return m;
}
