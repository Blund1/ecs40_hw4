#include "dict.h"

Dict::Dict(string f){
  ifstream fin("data.txt");
  string word,phrase,sentence;

  while(getline(fin, sentence, '.'))
  {
    if(sentence[0] == ' ')
    {
      sentence = sentence.substr(1);
    }//if
    if(sentence[0] == '\n')
    {
      sentence = sentence.substr(1);
    }//if
    for(int i=0; i<sentence.length();i++)
    {
      if (sentence[i] == '\n')
      {
        sentence[i] = ' ';
      }//if
    }//for
    
