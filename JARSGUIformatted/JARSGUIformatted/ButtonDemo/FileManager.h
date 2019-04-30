/*
 * FileManager.h
 *
 *  Created on: Mar 9, 2019
 *      Author: james
 */




#ifndef JARSRPS_JARSRPS_SRC_FILEMANAGER_H_
#define JARSRPS_JARSRPS_SRC_FILEMANAGER_H_

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;
class FileManager{
public:

static void createGG();
vector<string> readFromFile();
void writeToFile(vector<string> file);

};

#endif /* JARSRPS_JARSRPS_SRC_FILEMANAGER_H_ */
