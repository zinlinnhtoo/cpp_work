#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //fstream file("example.txt", ios::in | ios::out | ios::trunc); // Open file for read/write
    //if (!file) {
    //    cout << "File could not be opened!" << endl;
    //    return 1;
    //}

    // Write some data
    //file << "0123456789ABCDEF";

    //// Move to 5th byte from the beginning
    //file.seekg(5, ios::beg);
    //char ch;
    //file.get(ch); // Read the character
    //cout << "Character at 5th byte: " << ch << endl;

    //// Move 3 bytes ahead from current position
    //file.seekg(3, ios::cur);
    //file.get(ch);
    //cout << "Character 3 bytes ahead: " << ch << endl;

    //// Move 5 bytes before the end
    //file.seekg(-5, ios::end);
    //file.get(ch);
    //cout << "Character 5 bytes from end: " << ch << endl;

    //file.close();
    int a = 123;
    ofstream fout;
    fout.open("mydata.txt");
    fout << a << endl;
    fout.close();
    return 0;

   
    ifstream fin;
    fin.open("mydata.txt");
    fin >> a;
    fin.close();
}
