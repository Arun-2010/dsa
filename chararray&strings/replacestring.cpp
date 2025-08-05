#include <iostream>
using namespace std;

void replace(char ch[], int n) {
    int i = 0;
    while (ch[i] != '\0') {
        if (ch[i] == '@') {
            ch[i] = ' ';
        }
        i++;
    }
}

int main() {
    char ch[50];
    cin.getline(ch, 50);  
    replace(ch, 50);     
    cout << ch << endl;
    return 0;
}
