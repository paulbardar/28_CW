#include "Scanner.h"

Scanner::Scanner()
{
    text = "empty";

}

void Scanner::setText(string text)
{
    this->text = text;

}

string Scanner::getText() const
{
    return text;
}

void Scanner::scanFile(string fileName)
{
    ifstream file(fileName);
    if (file.is_open()) {
        text = "";
        string buffer;
        while (!file.eof()) {
            getline(file, buffer);
            text += buffer + "\n";
        }
        file.close();
    }
}
