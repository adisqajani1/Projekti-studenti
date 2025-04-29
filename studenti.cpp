#include <iostream>
#include <string>
using namespace std;

// Struktura per student
struct Studenti {
    string emri;
    string mbiemri;
    int mosha;
    float notaMesatare;
};

// Funksioni per regjistrimin e nje studenti
void regjistroStudent(Studenti studentet[], int &numriStudentave) {
    
    cout << "Shkruaj emrin e studentit: ";
    cin >> studentet[numriStudentave].emri;
    cout << "Shkruaj mbiemrin e studentit: ";
    cin >> studentet[numriStudentave].mbiemri;
    cout << "Shkruaj moshen e studentit: ";
    cin >> studentet[numriStudentave].mosha;
    cout << "Shkruaj noten mesatare te studentit: ";
    cin >> studentet[numriStudentave].notaMesatare;
    numriStudentave++;
}

int main(){
  return 0;
        }
