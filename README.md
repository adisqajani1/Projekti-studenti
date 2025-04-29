# Projekti Studentet 

Ky eshte nje projekt ne C++ ku mund te regjistrohen, shfaqen dhe kerkohet studente.
Përdorim vetëm struktura (`struct`) dhe funksione (`functions`) në mënyrë profesionale.

## Skedarët

- `main.cpp`: Funksioni kryesor ku fillon programi.
- `README.md`: Dokumentimi i projektit.

## Si ta përdorni?

1. Kompilo:

```bash
g++ main.cpp funksionet.cpp -o programi
```

2. Ekzekuto:

```bash
./programi
```

## Funksionet

- Regjistrimi i studentëve
- Shfaqja e të gjithë studentëve
- Kërkimi i studentëve me emër

## Struktura që përdoret

```cpp
struct Studenti {
    string emri;
    string mbiemri;
    int mosha;
    float notaMesatare;
};
