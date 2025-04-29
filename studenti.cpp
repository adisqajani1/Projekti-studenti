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

// Funksioni per kerkim te studentit
void kerkoStudent(const Studenti studentet[], int numriStudentave) {
    string emerKerkim;
    cout << "Shkruaj emrin e studentit qe deshiron te kerkosh: ";
    cin >> emerKerkim;

    bool gjetur = false;

    for (int i = 0; i < numriStudentave; i++) {
        if (studentet[i].emri == emerKerkim) {
            cout << "\nStudenti u gjet!\n";
            cout << "Emri: " << studentet[i].emri << endl;
            cout << "Mbiemri: " << studentet[i].mbiemri << endl;
            cout << "Mosha: " << studentet[i].mosha << endl;
            cout << "Nota mesatare: " << studentet[i].notaMesatare << "\n";
            gjetur = true;
            break;
        }
    }
    if (!gjetur) {
         cout << "Nuk u gjet asnje student me kete emer.\n";
    }
}

int main(){
  return 0;
        }
