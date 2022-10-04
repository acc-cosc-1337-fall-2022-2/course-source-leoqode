//add include statements
#include "func.h"
#include <iostream>

using std::string;
using namespace std;
//add function code here
string reverse_string(string dna)
{
    string reversed_DNA = "";
    for(int i = dna.length()-1; i>=0; i--)
    {
        reversed_DNA += dna[i];
    }
    return reversed_DNA;

}



double get_gc_content(const string& dna)
{
    double char_count = 0;
    for(int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G')
        {
            char_count++;
        }
        if(dna[i] == 'C')
        {
            char_count++;
        }

    }
    return char_count/dna.length();
}

string get_dna_complement(string dna)
{
    
    string rev_dna = reverse_string(dna);
    for(int i = 0; i<rev_dna.length(); i++)
    {
    switch(rev_dna[i])
    {
        case 'A':
            rev_dna[i] = 'T';
            break;
        case 'T':
            rev_dna[i] = 'A';
            break;
        case 'C':
            rev_dna[i] = 'G';
            break;
        case 'G':
            rev_dna[i] = 'C';
            break;
    }
    }   
    return rev_dna;
}