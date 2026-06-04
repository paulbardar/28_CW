#include "Printer.h"

void Printer::printFile(string text, string fileName, int copy)
{
	for (int i = 0; i < copy; i++) {
		ofstream file("copy_" + to_string(i) + "_" + fileName);
		file << text;
		file.close();
	}
}
