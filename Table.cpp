// Name:
// USC NetID:
// CSCI 455 PA5
// Fall 2021

// Table.cpp  Table class implementation


#include "Table.h"

#include <iostream>
#include <string>
#include <cassert>

// for hash function called in private hashCode method defined below
#include <functional>

using namespace std;


// listFuncs.h has the definition of Node and its methods.  -- when
// you complete it it will also have the function prototypes for your
// list functions.  With this #include, you can use Node type (and
// Node*, and ListType), and call those list functions from inside
// your Table methods, below.

#include "listFuncs.h"


//*************************************************************************


Table::Table() {

}


Table::Table(unsigned int hSize) {

}


int * Table::lookup(const string &key) {
   return NULL;   // dummy return value for stub
}


bool Table::remove(const string &key) {
   return false;  // dummy return value for stub
}


bool Table::insert(const string &key, int value) {
   return false;  // dummy return value for stub
}


int Table::numEntries() const {
   return 0;      // dummy return value for stub
}


void Table::printAll() const {

}


void Table::hashStats(ostream &out) const {

}


// hash function for a string
// (we defined it for you)
// returns a value in the range [0, hashSize)
unsigned int Table::hashCode(const string &word) const {

   // Note: calls a std library hash function for string (it uses the good hash
   //   algorithm for strings that we discussed in lecture).
   return hash<string>()(word) % hashSize;

}


// add definitions for your private methods here

