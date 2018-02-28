#include "headers.h"

class Output {
	// fields declaration
	int c;

public:
	// constructor with all fields
	Output(int c) : c(c) {}

	// write output to file
	void write(string &fileName) {
	    ofstream out(fileName.c_str());
		write(out);
	}

	// write output to file or console
	void write(ostream &out) {
		out << c << endl;
	}
};
