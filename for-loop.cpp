#include <iostream>
using namespace std;

class prog {
public:
    int n, m;

    void input() {
        cin >> n;
        cin >> m;
    }

    void display() {
        string ones[] = {"zero", "one", "two", "three", "four",
                         "five", "six", "seven", "eight", "nine"};

        for (int i = n; i <= m; i++) {
            if (i >= 1 && i <= 9) {
                cout << ones[i] << endl;
            } else {
                if (i % 2 == 0)
                    cout << "even" << endl;
                else
                    cout << "odd" << endl;
            }
        }
    }
};

int main() {
    prog obj;
    obj.input();
    obj.display();
    return 0;
}
