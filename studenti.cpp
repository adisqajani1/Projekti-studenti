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

// Funksioni per shfaqjen e te gjithe studenteve
void shfaqStudentet(const Studenti studentet[], int numriStudentave) {
    if (numriStudentave == 0) {
        cout << "Nuk ka studente te regjistruar.
";
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

// Funksioni per menune
void menu() {
    cout << "\n--- MENU ---\n";
    cout << "1. Regjistro student\n";
    cout << "2. Shfaq te gjithe studentet\n";
    cout << "3. Kerko student\n";
    cout << "4. Dil nga programi\n";
    cout << "Zgjedhja juaj: ";
}

int main() {
    const int maksimumStudent = 100;
    Studenti studentet[maksimumStudent];
    int numriStudentave = 0;
    int zgjedhje;

    do {
        menu();
        cin >> zgjedhje;

        switch (zgjedhje) {
            case 1:
                regjistroStudent(studentet, numriStudentave);
                break;
            case 2:
                shfaqStudentet(studentet, numriStudentave);
                break;
            case 3:
                kerkoStudent(studentet, numriStudentave);
                break;
            case 4:
                cout << "Duke dale nga programi...\n";
                break;
            default:
                cout << "Zgjedhje e pavlefshme. Ju lutem provoni perseri.\n";
        }
    } while (zgjedhje != 4);
    return 0;
}
