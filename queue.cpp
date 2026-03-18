#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> mashinalar;

    mashinalar.push("Gentra");
    mashinalar.push("Cobalt");
    mashinalar.push("Damas");

    cout << "Navbat boshida: " << mashinalar.front() << endl;
    mashinalar.pop(); // Gentra chiqib ketadi
    
    cout << "Keyingi navbat: " << mashinalar.front() << endl;

    return 0;
}
