/*

*This program has been developed to compute and propose at least one and if 
possible the best two tables based on different living room measurements.
*Program: Suitable Dining Table Proposer
*Developers: Yeo Ying Sheng, Edu Sinusi, Challven Japirin
*Contact: yeousm@student.usm.my, sinusiedu@student.usm.my, challven001@student.usm.my

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	//Declaration of the variables
	double roomLen, roomWid; //length and width of the room
	int cnt = 0; //counter
	double space = 2 * (0.6 + 1); //calculate the extra space needed by each table

	cout << "Welcome to the Dining Table Store" << endl;
	cout << "----------------------------------" << endl;
	cout << "\n";
	
	//Get input from the user for the length and width of the room
	cout << "Please enter the length of your room(meter): ";
	cin >> roomLen;
	cout << "Please enter the width of your room(meter): ";
	cin >> roomWid;
	
	//Compare between the length and width of the room
	if(roomLen < roomWid)
	{
		double dimTmp = roomLen;
		roomLen = roomWid;
		roomWid = dimTmp;
	}
	
	//Compare the dimensions of the room with the dimensions of each table
	if(roomLen >= (3 + space) && roomWid >= (1 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Rectangle Shade" << endl; //Display the most suitable table for the room
		cout << "Maximum seaters available: 12 seaters" << endl; //Display the maximum number of seaters
		cnt ++;
	}
	
	if(roomLen >= (3 + space) && roomWid >= (1.3 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Oval Stefan" << endl;
		cout << "Maximum seaters available: 10 seaters" << endl;
		cnt ++;
		if(cnt == 2) //Exit program if cnt == 2
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (2.1 + space) && roomWid >= (1 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Rectangle Bertha" << endl;
		cout << "Maximum seaters available: 8 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (1.5 + space) && roomWid >= (1.5 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Round Nadine" << endl;
		cout << "Maximum seaters available: 8 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (1.35 + space) && roomWid >= (1.35 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Round Emma" << endl;
		cout << "Maximum seaters available: 6 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (1.5 + space) && roomWid >= (0.9 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Rectangle Niklas" << endl;
		cout << "Maximum seaters available: 6 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (1.3 + space) && roomWid >= (0.8 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Rectangle Heinrich" << endl;
		cout << "Maximum seaters available: 6 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (0.9 + space) && roomWid >= (0.9 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Square Lea" << endl;
		cout << "Maximum seaters available: 4 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
	
	if(roomLen >= (0.76 + space) && roomWid >= (0.76 + space))
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Recommended table: Square Finn" << endl;
		cout << "Maximum seaters available: 2 seaters" << endl;
		cnt ++;
		if(cnt == 2)
		{
			cout << "\n" << endl;
			cout << "Thank you for visiting Dining Table Store";
			return 0;
		}
	}
		
	if(cnt == 0)
	{
		cout << "-------------------------------------------------------------------" << endl;
		cout << "Dear customers, sorry, none of the tables fulfil your requirement." << endl;
		cout << "\n" << endl;
		cout << "Thank you for visiting Dining Table Store";
	}
	
	return 0;
}
