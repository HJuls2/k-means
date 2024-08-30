#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

#include <bits/stdc++.h>

#include "utils/Point.h"

using namespace std;

vector<Point *> getPointsFromFile(const string& filename);

int main(int argc, char *argv[]){
    const string filename = "dataset_1000_docs.csv";
    vector <Point*> points = getPointsFromFile(filename);

    return 0;
}

vector<Point *> getPointsFromFile(const string& filename) {
    vector<Point*> points;
    ifstream file;
    file.open("../" + filename, ifstream::in);
    if(!file.is_open())
        throw runtime_error("Could not open file");

    string line;
    if(file.good()){
        getline(file,line);
    }

    double x,y,z;

    while(getline(file, line)){
        const int lineLenght = line.length();
        char *charArray = new char[lineLenght + 1];
        strcpy(charArray, line.c_str());

        char *wordPtr;
        wordPtr = strtok(charArray, ",");

        unsigned short int i = 0;
        while(wordPtr != NULL && i < 3 ){
            if(i == 0)
                x = strtod(charArray,NULL);
            else if (i == 1)
                y = strtod(charArray,NULL);
            else
                z = y = strtod(charArray,NULL);
            i++;
        }

        auto point = new Point(x,y,z);

        cout << point->toString() << endl;

        points.push_back(point);
        //cout << line << endl;
    }

    file.close();

    return points;
}

