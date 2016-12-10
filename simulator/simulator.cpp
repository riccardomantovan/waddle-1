#include <fstream>

using namespace std;

int main () {
    ifstream input;
    ofstream output;

    input.open("input.txt");
    output.open("output.txt");

    input.close();
    output.close();

    return 0;
}