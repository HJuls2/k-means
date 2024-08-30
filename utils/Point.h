//
// Created by giuli on 21/08/2024.
//

#ifndef ELABORATO_FINALE_POINT_H
#define ELABORATO_FINALE_POINT_H


#include <string>

class Point {

public:

    Point(double x, double y, double z);

    unsigned int getId() const;

    unsigned short getLabel() const;

    void setLabel(unsigned short label);

    double getX() const;

    double getY() const;

    double getZ() const;

    std::string toString();


private:
    unsigned int id;
    unsigned short int label;
    double x;
    double y;
    double z;
};


#endif //ELABORATO_FINALE_POINT_H
