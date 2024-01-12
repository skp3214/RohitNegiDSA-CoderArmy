#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("zoom.txt");

    if (!fin.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    // Read the contents of the file into a string
    string content;
    char c;
    while (fin >> c) {
        content += c;
    }

    // Close the input file
    fin.close();

    // Sort the string in ascending order
    sort(content.begin(), content.end());

    // Open the file for writing
    fout.open("zoom_sorted.txt");

    if (!fout.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    // Write the sorted content back to the file
    fout << content;

    // Close the output file
    fout.close();

    cout << "File 'zoom_sorted.txt' created with sorted content." << endl;

    return 0;
}
