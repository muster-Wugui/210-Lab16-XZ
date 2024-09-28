// COMSC-210 | Lab 15 | Xiao Zhang

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    int year;
    string writer;

public:
    // Default constructor
    Movie() : title(""), year(0), writer("") {
        
    }

    // Parameterized constructor
    Movie(string t, int y, string w) : title(t), year(y), writer(w) {
        
    }

    // Setters
    void setTitle(const string& t) {
        title = t;
    }
    void setYear(int y) {
        year = y;
    }
    void setWriter(const string& w) {
        writer = w;
    }

    // Getters
    string getTitle() const {
        return title;
    }
    int getYear() const {
        return year;
    }
    string getWriter() const {
        return writer;
    }

    void show() const {
        cout << "Movie: " << title << endl;
        cout << "    Year released: " << year << endl;
        cout << "    Screenwriter: " << writer << endl;
    }
};
