# Antroji-uzduotis

##INSTRUKCIJA

Vartotojas turi 3 pasirinkimus:
1. Nuskaityti studentų duomenis iš failo;
2. Įvesti duomenis rankiniu būdu: Įvesti vardą, pavardę, pasirinkti ar pažymius vesti rankiniu būdu ar sugeneruoti;
3. Sugeneruoti studentų duomenų failą: Pasirinkti ar nuskaitytisugeneruotą failą ar ne;

## Ketvirtoji užduotis v2.0
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1.Sukurkita dokumentacija panaudojant Doxygen 1.5 projekto pagrindu.
2.Sukurtas 1.5 versijai automatinis įdiegimo failas (setup.exe)

## Trečioji užduotis v1.5
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1.Vietoje turimos vienos Data klasės sukurtos dvi: bazinė klasė - Student, skirtą bendrai aprašyti žmogų ir tuomet iš jos išvestinė (derived) klasė - Data.
2.Student bazinė klasė - abstrakčioji klasė,

## Antroji užduotis v1.2
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Papildyta: copy constructor, copy assignment operator taip pat destructor.

## Pirmoji užduotis v1.1
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Programos realizaciją (versiją v1.0) pakeista taip, kad vietoje sukurtos data structūros jos pagrindu sukurta class'ę data.
2. Struct ir Class realizacijos sparta (palyginimas):
<img width="524" alt="image" src="https://user-images.githubusercontent.com/99173750/166108077-da231658-35b7-4ccf-91bd-c3a9600196f5.png">
3. Atlikita eksperimentinė analizė priklausomai nuo kompiliatoriaus optimizavimo lygio (palyginimas):
<img width="309" alt="image" src="https://user-images.githubusercontent.com/99173750/166216383-202f313a-63a9-4ef3-9604-1ca8ce019837.png">
         

# Pirmoji-užduotis

##INSTRUKCIJA

Vartotojas turi 3 pasirinkimus:
1. Nuskaityti studentų duomenis iš failo;
2. Įvesti duomenis rankiniu būdu: Įvesti vardą, pavardę, pasirinkti ar pažymius vesti rankiniu būdu ar sugeneruoti;
3. Sugeneruoti studentų duomenų failą: Pasirinkti ar nuskaitytisugeneruotą failą ar ne;

## Pirmoji užduotis v0.1
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Vartotojas įvedą studento vardą ir pavardę. Studentų kiekis nėra ribojamas. Suvedus reikiamus duomenis apie studentą, vartotojas gauna užkalausą: "Ar norite ivesti dar vieno studento duomenis: [y/n]";
2. Vartotojas turi pasirinkimą namų darbų pažymius ir egzamino rezultatą suvesti rankiniu būdų arba sugeneruoti atsitiktinai. Užklausa:  "Ar norite atsitiktinai generuoti pazymius? [y/n]";
  2.2 Jei pazymius vartotojas veda pats. Vartotojas įvedą egzamino pažymį ir taip pat iki 10 namų darbų pažymių;
3. Galutinis pažymys yra apsakičiaujamas tiek su pažymių vidurkiu, tiek ir su mediana;

Programa išvedą studentų vardus ir pavardes bei studentų galutinius pažymius suskaičiuotus su pažymiu vidurkiu ir mediana.

## Antroji užduotis v0.2
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. v0.1 buvo papildyta, tuo kad dabar galima duomenis ne tik įvesti bet ir nuskaityti iš failo. Vartotojui suteikiamas pasirinkimas.
2. Studentai yra surūšiuojami pagal vardus.

## Trečioji užduotis v0.3
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Funkcijos, nauji duomenų tipai buvo perkelti į antraštinius (header) failus, bei sukurti trys nauji .cpp failai.
2. Minimaliai panaudotas išimčių valdymas.

## Ketvirtoji užduotis v0.4
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Atsirado nauja funkcija Failų generacija. Vartotojas pasirenka kiek studentų ir kiek studentų pažymių bus.
2. Studentai yra surušiuojami į dvi grupes; vargšiukai ( x>5 ) ir gudročiai ( x<5 ).
3. Studentai atspausdinami į du skirtingus failus.
4. Laiko skaičiavimas:
<img width="529" alt="4" src="https://user-images.githubusercontent.com/99173750/161427869-a602335f-7628-452c-9173-81698ac3673d.png">

## Penktoji užduotis v0.5
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Buvo sukurtos trys atskiros programos su trijais skirtingais konteineriais: vector, list, deque.
2. Buvo atlikti laiko matavymai šių trijų konteinerių spartumo.
3. Laiko matavimai:
<img width="472" alt="5" src="https://user-images.githubusercontent.com/99173750/161427791-2aa6fcce-2c4d-4d1b-b3e5-b70b0de01c25.png">
Analizė: 
Greičiausias uskirstymas studentu į skirtingus konteinerius - Deque;
Greičiausias failo nuskaitymas ir suskaičiavimas - List;
4. Sistemos parametrai:
CPU - AMD Ryzen 7 x64, 8 CORES, 2000MHz; RAM - 2x8 GB RAM; SSD - 500GB;

## Šeštoji užduotis v1.0
Šioje versijoje yra apskaičiuojamas studento ar studentų galutinis įvertinimas;
1. Buvo ištestuotos 2 strategijos - vector, deque, list konteineriams
<img width="334" alt="image" src="https://user-images.githubusercontent.com/99173750/163687457-6330c15b-7cc7-4e86-941a-a13728880386.png">
Analizė:
1 strategija greitesnė - Vector ir Deque konteineriais;
2 strategija greitesnė - List konteineriu;
2. Pritaikyti algoritmai studentų dalijimo procedūrai paspartinti (vector - konteinerio) - pritaikytas remove_if algoritmas
<img width="388" alt="image" src="https://user-images.githubusercontent.com/99173750/163716564-6bca804b-2c73-4843-b267-342249a44af4.png">
II strategija tris kartus pagreitėjo ir optimizavosi panaudojus remove_if algoritmą.
