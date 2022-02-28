// Name:
// USC NetID:
// CSCI 455 PA5
// Fall 2021

/*
 * grades.cpp
 * A program to test the Table class.
 * How to run it:
 *      grades [hashSize]
 * 
 * the optional argument hashSize is the size of hash table to use.
 * if it's not given, the program uses default size (Table::HASH_SIZE)
 *
 */

#include "Table.h"

// cstdlib needed for call to atoi
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{

   // gets the hash table size from the command line

   int hashSize = Table::HASH_SIZE;

   Table *grades; // Table is dynamically allocated below, so we can call
   // different constructors depending on input from the user.

   if (argc > 1)
   {
      hashSize = atoi(argv[1]); // atoi converts c-string to int

      if (hashSize < 1)
      {
         cout << "Command line argument (hashSize) must be a positive number"
              << endl;
         return 1;
      }

      grades = new Table(hashSize);
   }
   else
   { // no command line args given -- use default table size
      grades = new Table();
   }

   grades->hashStats(cout);

   // add more code here
   // Reminder: use -> when calling Table methods, since grades is type Table*

   return 0;
}

void doInsert(Table *&grades)
{
   string name;
   int score;
   cin >> name >> score;
   if (!grades->insert(name, score))
   {
      cout << "Insert failed: Name already exists." << endl;
   }
}

void doChange(Table *&grades)
{
   string name;
   int newScore;
   cin >> name >> newScore;
   if (!grades->lookup(name))
   {
      cout << "Change failed: Name not found." << endl;
   }
   else
   {
      *grades->lookup(name) = newScore;
   }
}

void doLookup(Table *&grades)
{
   string name;
   cin >> name;
   if (!grades->lookup(name))
   {
      cout << "Lookup failed: Name not found." << endl;
   }
   else
   {
      cout << name << "'s score is: " << *grades->lookup(name) << endl;
   }
}

void doRemove(Table *&grades)
{
   string name;
   cin >> name;
   if (!grades->remove(name))
   {
      cout << "Remove failed: Name not found." << endl;
   }
}