#include <stdlib.h>
#include <stdio.h>

#include <csv.h>

int main(void) {
	CsvDoc * doc = CsvDoc_newFromFile("test.txt");
	CsvDoc_writeToFile("test2.txt");
	CsvDoc_free(&doc);
	return 0;
}
