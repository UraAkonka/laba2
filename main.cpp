#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Функция №1: 111
vector<string> readLinesFromFile(const string& filename) {
    vector<string> lines;
    return lines;
}

// Функция №2: 222
void printLines(const vector<string>& lines) {
}
// Функция №3: 3333333
void writeLinesToFile(const vector<string>& lines, const string& filename) {

}
int main() {
    setlocale(LC_ALL,"Russian");
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    vector<string> lines = readLinesFromFile(inputFilename);
    printLines(lines);
    writeLinesToFile(lines, outputFilename);
    cout << "Программа завершена." << endl;
    cout << "Проверка";
    return 0;
}
