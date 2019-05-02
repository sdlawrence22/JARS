#ifndef CpuML_H_
#define CpuML_H_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Choice2.h"
#include "CpuPlayer.h"
#include "FileManager.h"
#include <vector>
using namespace std;

class CpuML : public CpuPlayer	
{
	public:
	CpuML() : counter(0) {}
	int last_choice;
	void Decision(){
		FileManager File;
        ggData = File.readFromFile();

		if(counter > 4){
			//execute brilliance      
			int i = findPosition(ggData);
			if((int(ggData[i][6]) >= int(ggData[i+1][6])) && (int(ggData[i][6]) >= int(ggData[i+2][6]))){
				//They will choose rock lets choose paper
				choiceSetter(Choice2::PAPER);
				
				cout<<"The CPU chose paper\n";
			}else if((int(ggData[i+1][6]) >= int(ggData[i][6])) && (int(ggData[i+1][6]) >= int(ggData[i+2][6]))){
				//They will choose paper lets choose scissor
				choiceSetter(Choice2::SCISSOR);
				cout<<"The CPU chose scissors\n";
				
			}
			else{
				//They will choose scissor lets choose rock
				choiceSetter(Choice2::ROCK);
				
				cout<<"The CPU chose rock\n";
			}
		}else{
			//do random
			int CpuChoice = (rand()%3) + 1;
			switch(CpuChoice){
				case 1: choiceSetter(Choice2::ROCK); break;
				case 2: choiceSetter(Choice2::PAPER); break;
				case 3: choiceSetter(Choice2::SCISSOR); break;
				default: choiceSetter(Choice2::INVALID); break;

			}	
		}
	}
	
	void Modifylast5(Choice2 lastchoice){
		if(counter >= 5){
			switch(lastchoice){
				case(Choice2::ROCK): shifterInsert('R'); break;
				case(Choice2::PAPER): shifterInsert('P'); break;
				case(Choice2::SCISSOR): shifterInsert('S'); break;
			}
		}
		else{
			switch(lastchoice){
				case(Choice2::ROCK): last5[counter] = 'R'; break;
				case(Choice2::PAPER): last5[counter] = 'P'; break;
				case(Choice2::SCISSOR): last5[counter] = 'S'; break;
			}
			counter ++;
			if(counter == 5){
				//increment vector
				//put back in file
				FileManager File;
				int temp = findPosition2(ggData);
				if(ggData[temp][6] == '9'){
					//dont add will break
				}
				else{
					ggData[temp][6] +=1;
				}
				
				File.writeToFile(ggData);
			}
		}
	}	

	private:
	int counter;
	
	char last5[4];
	vector<string> ggData;

	void shifterInsert(char RPS){
		for(int i = 0; i<4;i++){
			last5[i] = last5[i+1];
		}
		last5[4] = RPS;
		//increment vector
		//put back in file
		FileManager File;
		int temp = findPosition2(ggData);
		// int temp2 = int(ggData[temp][6]);
		// temp2 +=1;

		if(ggData[temp][6] == '9'){
			//dont add will break
		}else{
			ggData[temp][6] +=1;
		}
		File.writeToFile(ggData);
	}

	int findPosition(vector<string> ggData){
		int i = 0;
		int mover = 81;
		//cout<<"error"<<endl;
		//cout<<"Testing___________________";
			
		for(int z = 0; z<4; z++){
			while(ggData[i][z] != last5[z+1]){
				i += mover;
				
				
			}
			//cout<<last5[z+1];
			mover = mover/3;
			

		}
		//cout<<endl<<"The line above does not count users most recent input"<<endl;
		if(i>240){
			printf("Something is wrong i is too big %i\n", i);
		}
		return i;
	}

	int findPosition2(vector<string> ggData){
		int i = 0;
		int mover = 81;
		//cout<<"error2"<<endl;
		for(int z = 0; z<5; z++){
			while(ggData[i][z] != last5[z]){
				i += mover;
				if(mover == 0){
					i+=1;
				}				
			}
			mover = mover/3;		
		}
		//cout<<"error2"<<endl;
		if(i>242){
			printf("Something is wrong i is too2 big\n");
		}
		return i;
	}
	
};

#endif /* CpuR_H_ */
