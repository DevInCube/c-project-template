#ifndef MODULE_H
#define MODULE_H

// paste your module interface here

typedef struct CsvRow CsvRow;
typedef struct CsvDoc CsvDoc;

CsvDoc * CsvDoc_newFromFile(const char * filePath);
void CsvDoc_free(CsvDoc ** selfPtr);
void CsvDoc_writeToFile(const char * filePath);

#endif
