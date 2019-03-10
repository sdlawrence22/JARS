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
static void createGG(){
		ofstream myFile("gg.txt");

		//string current;
		char current[7];
		current[5]=':';
		current[6]='0';
		int a, b, c, d, e;
		for (a=0; a<3; a++){
			switch(a){
				case(0):{current[0] = 'R'; break;}
				case(1):{current[0] = 'P'; break;}
				case(2):{current[0] = 'S'; break;}
			}
		for (b=0; b<3; b++){
			switch(b){
				case(0):{current[1] = 'R'; break;}
				case(1):{current[1] = 'P'; break;}
				case(2):{current[1] = 'S'; break;}
			}
		for (c=0; c<3; c++){
			switch(c){
				case(0):{current[2]= 'R'; break;}
				case(1):{current[2]= 'P'; break;}
				case(2):{current[2]= 'S'; break;}
			}
		for (d=0; d<3; d++){
			switch(d){
				case(0):{current[3]= 'R'; break;}
				case(1):{current[3]= 'P'; break;}
				case(2):{current[3]= 'S'; break;}
			}
		for (e=0; e<3; e++){
			switch(e){
				case(0):{current[4]= 'R'; break;}
				case(1):{current[4]= 'P'; break;}
				case(2):{current[4]= 'S'; break;}
			}
				myFile<<current<<endl;
				//cout<<"Just posted "+current<<endl;

		}}}	}
	}
		myFile.close();
}

	vector<string> readFromFile(){
		vector<string> ggData;
		string in;
		ifstream myFile("gg.txt");
		while(myFile){
			cout<< char(myFile.get());
		}
		return ggData;
	}

};

#endif /* JARSRPS_JARSRPS_SRC_FILEMANAGER_H_ */
