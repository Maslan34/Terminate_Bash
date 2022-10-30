#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	    char  command1[10000];
	    char  processName[10000];
		char  number[10000]; 
		cout << "Type a PID Number to terminate it: ";  
		cin >> number;
		cout << "Your  PID Number: " << number; 
		
		
		char  command2[10000]="kill -9 ";
		strcpy(command1,command2);
		strcat(command1,number);
		
		
		
		strcpy(processName,"ps -p ");
		strcat(processName,number);
		strcat(processName," -o comm=");
		
		
		if(system(command1)== 0){// on succesful returns 0
			cout << " DONE ! "; 
			}
		else{ 
				cout << " The PID YOU ENTERED NOT A ACTIVE PROCESS ! "; 	
			}
		
		system(processName);
		system(command1);
	


	}
