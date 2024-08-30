//
// Created by giuli on 28/08/2024.
//

#include <vector>
#include "Point.h"

using namespace std;

class KMeansAlgorithm {
public:
    virtual void execute() = 0;

    KMeansAlgorithm(vector<Point*> dataset){
        this-> dataset = dataset;
    }

protected:
    vector<Point*> dataset;
    virtual Point* computeCentroid(unsigned short int label) = 0;
    virtual double computeRSS(unsigned short int label) = 0;
};

#ifndef UNTITLED_ALGORITHM_H
#define UNTITLED_ALGORITHM_H

#endif //UNTITLED_ALGORITHM_H
