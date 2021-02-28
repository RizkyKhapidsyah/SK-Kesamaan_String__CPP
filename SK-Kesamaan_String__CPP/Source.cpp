#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct Kalimat {
    char string[50];
};

struct Kalimat obj;

void function();

int main() {
    cout << "Masukkan string apapun : "; cin >> obj.string;
    function();

    _getch();
    return 0;
}

void function() {
    int i, length;
    int flag = 0;
    length = strlen(obj.string);

    for (i = 0; i < length; i++) {
        if (obj.string[i] != obj.string[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << obj.string << " ini tidak sama" << endl;
    } else {
        cout << obj.string << " ini sama" << endl;
    }

}