#include<iostream>

struct Stypendium {
    std::string rodzaj = "naukowe";
    float wysokosc = 500;
};

struct Student {
    std::string imie = "Jan";
    std::string nazwisko = "Kowalski";
    std::string rok_studiow = "2";
    Stypendium* stypendium;
};

int main () {

    Student* student_1 = new Student;

    Stypendium* s_1 = new Stypendium;
    s_1->rodzaj = "socjalne";
    s_1->wysokosc = 750;
    student_1->stypendium = s_1;

    return 0;
}

