//
// Created by giuli on 28/08/2024.
//

#include <vector>
#include "Point.h"

using namespace std;

class Algorithm {
public:
    virtual void kmeans();
private:
    vector<Point*> dataset;
    virtual void
    virtual Point computeCentroid(unsigned short int label);
    virtual double computeRSS(unsigned short int label);
};

#ifndef UNTITLED_ALGORITHM_H
#define UNTITLED_ALGORITHM_H

#endif //UNTITLED_ALGORITHM_H
