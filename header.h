#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <random>
#include <chrono>
#include <sstream>
//
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::string;
using std::setw;
using std::endl;
using std::setprecision;
using std::fixed;
using std::sort;
using std::vector;
using std::ifstream;
using std::to_string;


class data
{
private:
	string vard, pav;
	int paz[20],  egz;
	double vidrezult, medrezult;
public: 
	data() {
		egz = 0;
		vidrezult = 0;
		medrezult = 0;
	}
	//destruktorius
	//~data();
	data(const data& d); // copy konstruktorius
	data& operator=(const data& d); //
	// vid
	void setvid(double sk);
	double getvid() const;
	// med
	void setmed(double sk);
	double getmed() const;
	// egz
	void setegz(double sk);
	int getegz() const;
	//paz
	void setpaz(int i, double sk);
	int getpaz(int i) const;
	//vard
	void setvard(string vardas);
	string getvard() const;
	//pav
	void setpav(string pavarde);
	string getpav() const;
	
};

//---
void ivestis(data& a, int& n);
void galutinisvid(data& a, int& n);
void galutinismed(data& a, int& n, vector<data>& sarasas);
bool rikiavimas(const data& a, const data& b);
void rezultatai(data& a);
void fskaitymas(data& a, int& n, vector<data>& sarasas, vector<data>& kietiakai, vector<data>& vargsiukai);
void firasimas(data& a, int& n, vector<data>& sarasas);
void generacija(std::stringstream& my_buffer, int& n, int& s);

//---

const char CDfv[] = "kursiokai.txt";


class Timer {
private:
	std::chrono::time_point<std::chrono::high_resolution_clock> start;
public:
	Timer() : start{ std::chrono::high_resolution_clock::now() } {}
	void reset() {
		start = std::chrono::high_resolution_clock::now();
	}
	double elapsed() const {
		return std::chrono::duration<double>
			(std::chrono::high_resolution_clock::now() - start).count();
	}
};