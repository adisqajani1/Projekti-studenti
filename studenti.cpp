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

// Funksioni per shfaqjen e te gjithe studenteve
void shfaqStudentet(const Studenti studentet[], int numriStudentave) {
    if (numriStudentave == 0) {
        cout << "Nuk ka studente te regjistruar.";
        return;
    }
    cout << "\n--- Lista e Studenteve ---\n";
    for (int i = 0; i < numriStudentave; i++) {
        cout << "Studenti #" << (i + 1) << endl;
        cout << "Emri: " << studentet[i].emri << endl;
        cout << "Mbiemri: " << studentet[i].mbiemri << endl;
        cout << "Mosha: " << studentet[i].mosha << endl;
        cout << "Nota mesatare: " << studentet[i].notaMesatare << "\n";
    }


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
