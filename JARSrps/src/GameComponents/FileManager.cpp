#include "FileManager.h"

void FileManager::createGG(){
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
					// cout<<"Just posted "<<current<<endl;
					}
				}
			}	
		}
	}
	myFile.close();
}

vector<string> FileManager::readFromFile(){
    vector<string> ggData;
    vector<string>::iterator it = ggData.begin();
    int i=0;
	string in;
	ifstream myFile("gg.txt");
		while(!myFile.eof()){
		getline(myFile, in);
		ggData.push_back(in);
	}

	// for(int i=0; i<ggData.size(); i++){
	// 	cout<<ggData[i]<<endl;
	// }
	myFile.close();
	return ggData;
}
void FileManager::writeToFile(vector<string> file){
	ofstream myFile("gg.txt");
	if(myFile.is_open())   
    {
        for(int i=0; i< 243; i++){
			for(int j=0; j<7; j++){
				myFile << file[i][j];
				//cout<<file[i][j];
			}
			myFile << endl;
			//cout<<endl;
		}   
		//printf("File Updated\n");       
    }
    else 
    {
        //GG no re we lost our file or it failed to open
		printf("Error file 'gg.txt' didnt open\n");
    }
	myFile.close();
}