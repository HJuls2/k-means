//
// Created by giuli on 21/08/2024.
//

#include "Point.h"

Point::Point(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

unsigned int Point::getId() const {
    return id;
}

unsigned short Point::getLabel() const {
    return label;
}

void Point::setLabel(unsigned short label) {
    Point::label = label;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

std::string Point::toString() {
    return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}

