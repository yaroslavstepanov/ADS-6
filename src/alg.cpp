// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"
BST<std::string> makeTree(const char* filename) {
ifstream file;
file.open(filename);
BST<string> TREE;
string word;
string line;
while (file)
{
file >> word;
int i = 0;
while (i < word.size())
{
int k = 0;
while ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') && (i < word.size()))
{
if (word[i] >= 'A' && word[i] <= 'Z')
word[i] += 32;
line += word[i];
i++;
k++;
}
if (k != 0)
{
TREE.add(line);
line = "";
}
else
i++;
}
}
return TREE;
}
