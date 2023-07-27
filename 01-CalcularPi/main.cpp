#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0;
    int iteraciones = 1000000; // iteraciones para precisión 

    for (int i = 0; i < iteraciones; i++) {
        pi += (i % 2 == 0) ? 1 / (2 * i + 1.0) : -1 / (2 * i + 1.0);
    }

    pi *= 4; // para obtener pi y no pi/4 

    cout << fixed << setprecision(6);
    cout << "pi = " << pi << endl;

    return 0;
}
