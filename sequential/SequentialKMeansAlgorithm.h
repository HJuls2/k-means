//
// Created by giuli on 21/08/2024.
//

#ifndef ELABORATO_FINALE_CENTROIDHELPER_H
#define ELABORATO_FINALE_CENTROIDHELPER_H

#include <string>
#include <vector>
#include "../utils/Point.h"
#include "../utils/KMeansAlgorithm.h"

using namespace std;


class SequentialKMeansAlgorithm : public KMeansAlgorithm {
private:
    virtual Point* computeCentroid(unsigned short int label);
    virtual double computeRSS(unsigned short int label);
};


#endif //ELABORATO_FINALE_CENTROIDHELPER_H
