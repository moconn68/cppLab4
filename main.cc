//Matthew O'Connell
//ECE 2620-001
//Lab 4
//Both extra credit components have been completed

#include <iostream>
#include <fstream>
#include <cmath>
#include "findmax.h"


using namespace std;

template<class T1>T1 findmax(T1 a, T1 b,  T1 c, T1 d, T1 e);

int main()
{
	ifstream infile;
	ofstream outfile;
	infile.open("lab4_input.txt");
	outfile.open("lab4_output.txt");
	if(infile.is_open() && outfile.is_open()){
		int n = 0;
		double x1,x2,x3,x4,x5,linMax;
		//int k = 5;
		string line;
		while(getline(infile,line)){ //gets the number of lines in the input file
			++n;
		}
		cout << n << endl; //PROBLEM: with file of DOUBLES, n is one more than it should be. works fine with ints.
		infile.clear();
		infile.seekg(0, ios::beg); // resets counter to beginning of file so that data can be read again

		double* vals = new double[n];
		     
		if(vals == NULL){ //checks if space in memory was created for dynamic array
			cout << "ERROR: Memory for array not allocated successfully. Try again." << endl;
			return 0; //exits the program if vals[] isn't created properly
		}
		for(int i = 0; i < n; i++){
			infile >> x1 >> x2 >> x3 >> x4 >> x5;
			linMax = findmax(x1,x2,x3,x4,x5);
			vals[i] = linMax;
			//cout << vals[i] << endl;
			outfile << vals[i] << endl;
		}
		infile.close();
		outfile.close();
		delete vals;
	}
	else{
		cout << "Error opening the file; please try again." << endl;
	}
	return 0;
}
