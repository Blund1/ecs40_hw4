#ifndef DICT_H
#ifndef DICT_H

#include <string>
#include<iostream>
using namespace std;

class Dict
{
  public:
    Dict(string);
    set<string> getwords();
    set<string> get_phrases();
    set <string> get_sentences();
  private:
    set <string> sentences;
    set <string> words;
    set <string> phrases;
};
#endif
