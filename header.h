#pragma once
#include "Header1.h"
#include <iostream>
#include <iomanip>
#include <string>
//#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <random>
#include <chrono>
#include <sstream>
#include <array>
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
//using std::vector;
using std::ifstream;
using std::to_string;

class student {
protected:
	string vard, pav;
public:
	string getvard() const { return vard; }
	string getpav() const { return pav; }
	virtual void setvard(string vard) = 0;
	virtual void setpav(string pav) = 0;

	student (string v = "", string p = "") : vard{v}, pav{p}{}
};
class d : public student //data
{
private:
	
	int paz[20],  egz;
	double vidrezult, medrezult;
public: 
	d() {
		egz = 0;
		vidrezult = 0;
		medrezult = 0;
	}

	d(int paz[20], int egz , double vidrezult, double medrezult, string vard, string pav) : student(vard, pav) {}
	        
	~d(); //destruktorius
	d(const d& d); // copy konstruktorius
	d& operator=(const d& d); // copy assignment
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
	//pav
	void setpav(string pavarde);
	
	
};

//---
void ivestis(d& a, int& n);
void galutinisvid(d& a, int& n);
void galutinismed(d& a, int& n, Vector<d>& sarasas);
bool rikiavimas(const d& a, const d& b);
void rezultatai(d& a);
void fskaitymas(d& a, int& n, Vector<d>& sarasas, Vector<d>& kietiakai, Vector<d>& vargsiukai);
void firasimas(d& a, int& n, Vector<d>& sarasas);
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