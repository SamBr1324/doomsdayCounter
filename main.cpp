#include <iostream>
#include <math.h>

int main () {

int date[3];
int selection;
double daysLeft;
int monthDay;
//int currentDay;

std::cout << "What's the date?\n";
std::cout << "Month: ";
std::cin >> date[0];
std::cout << "\n";

std::cout << "Day: ";
std::cin >> date[1];
std::cout << "\n";

std::cout << "year: ";
std::cin >> date[2];
std::cout << "\n";

switch (date[0]) {
case 1:
monthDay = 0;
break;
case 2:
monthDay = 31;
break;
case 3:
monthDay = 59;
break;
case 4:
monthDay = 90;
break;
case 5:
monthDay = 120;
break;
case 6:
monthDay = 151;
break;
case 7:
monthDay = 181;
break;
case 8:
monthDay = 212;
break;
case 9:
monthDay = 243;
break;
case 10:
monthDay = 273;
break;
case 11:
monthDay = 304;
break;
case 12:
monthDay = 334;
break;
};
int currentDay = (date[2] * 365) + date[1] + monthDay;


std::cout << "Please select an event: 1. The Return of Halley's Comet  2. The Last BitCoin Being Mined  3. The Antares Supernova \n";
std::cin >> selection;

std::cout << date[0];
std::cout << "/";
std::cout << date[1];
std::cout << "/";
std::cout << date[2];

std::cout << " is roughly ";

switch (selection) {
case 1: daysLeft = 1543768 - currentDay;
std::cout << round(daysLeft);
break;
case 2: daysLeft = 1518583 - currentDay;
std::cout << round(daysLeft);
break;
case 3: daysLeft = 4387483 - currentDay;
std::cout << round(daysLeft);
break;
};

 std::cout << " days away from ";

switch (selection) {
case 1:
std::cout << "the return of Halley's Comet";
break;
case 2:
std::cout << "the last BitCoin being mined";
break;
case 3:
std::cout << "the Antares supernova";
break;
};
}