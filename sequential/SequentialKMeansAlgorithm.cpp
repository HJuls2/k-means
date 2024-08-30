//
// Created by giuli on 21/08/2024.
//

#include "SequentialKMeansAlgorithm.h"
#include <cmath>
#include <algorithm>

using namespace std;


Point* SequentialKMeansAlgorithm::computeCentroid(unsigned short int label) {
    vector<Point*> points;
    copy_if(dataset.begin(), dataset.end(), back_inserter(points), [label](auto a) {return (a->getLabel() == label); });

    double x = 0, y = 0 , z = 0;
    for (const auto &point: points) {
        x += point->getX();
        y += point -> getY();
        z += point->getZ();
    }

    x = x / (double) points.size();
    y = y / (double) points.size();
    z = z / (double) points.size();

    auto centroid =  new Point(x, y, z);
    return centroid;
}

double SequentialKMeansAlgorithm::computeRSS(unsigned short int label) {
    //Step 0. Get the centroid
    auto centroid = computeCentroid(label);


    vector<Point*> points;
    copy_if(dataset.begin(), dataset.end(), back_inserter(points), [label](auto a) {return (a->getLabel() == label); });

    // Step 1. Compute squared distance of each point from the centroid and store in vector
    vector <double> squaredDistances;
    for (const auto &point: points) {
        double squaredDistance =
                pow((centroid->getX() - point -> getX()),2) +
                pow((centroid->getY() - point -> getY()),2) +
                pow((centroid->getZ() - point -> getZ()),2);
        squaredDistances.push_back(squaredDistance);
    }
    // Step 2. Sum all the squared distances and assign it to the cluster RSS variable
    double sumOfSquaredDistances = 0;

    for(const auto &squaredDistance: squaredDistances){
        sumOfSquaredDistances += squaredDistance;
    }

    return sumOfSquaredDistances;
}