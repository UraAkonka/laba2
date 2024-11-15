#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

// Функция №1: 111
void read(const string& filename, vector<string>& lines) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    // Для проверки правильности чтения можно выводить содержимое вектора:
    for (const auto& str : lines) {
        cout << str << endl;
    }
}

// Функция №2: 222
void print(const vector<string>& lines) {
    cout << "1,2,3";
}
// Функция №3: 3333333
void write(const vector<string>& lines, const string& filename) {

}
int main() {
    setlocale(LC_ALL,"Russian");
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    vector<string> lines;
    read("input.txt", lines);
    print(lines);
    write(lines, outputFilename);
    return 0;
}
