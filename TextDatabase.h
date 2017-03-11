//
//  TextDatabase.h
//  Projec1
//
//  Created by Scott English on 3/10/17.
//  Copyright © 2017 Scott English. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "sqlite3.h"


#ifndef TextDatabase_h
#define TextDatabase_h


typedef struct sqlite3 sqlite3;
typedef struct sqlite3_stmt sqlite3_stmt;

class textdatabase
{
public:
    textdatabase(const char*);
    ~textdatabase();
    static int callback(void*, int, char**, char**);
    void getstatement(char*);
    void getQuote();
protected:
    sqlite3 *db;
    char *ErrMsg;
    char *sql;
    const char *data= "Callback function called";
    char *values;
};


#endif /* TextDatabase_h */
