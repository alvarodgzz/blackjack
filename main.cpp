#include <bits/stdc++.h>
using namespace std;

void intro() {
    for (int i = 0; i < 20; i++) {
        cout << " *** ";
    } cout << endl;
    cout << "                                      WELCOME TO 21 BLACK JACK                  " << endl;
    for (int i = 0; i < 20; i++) {
        cout << " *** ";
    } cout << endl;
    string start;
    do {
      cout << "                                    TYPE 'GO' COMMAND TO CONTINUE                  " << endl;
      cin >> start;
    } while (start != "go" && start != "Go" && start != "GO");
    system("cls");
}
int main() {
    intro();
    return 0;
}
