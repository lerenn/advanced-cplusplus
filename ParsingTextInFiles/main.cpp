#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename = "ParsingTextInFiles/stats.txt";
    ifstream input;

    input.open(filename);

    if (!input.is_open()) {
        return 1;
    }

    while(input) {
        string line;
        int population;

        getline(input, line, ':');
        input >> population;
        input >> ws; // Avoid line return

        if (!input)
            break;

        cout << "'" << line << "' -- " << population << endl;
    }

    input.close();

    return 0;
}