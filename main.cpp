/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Judah Libera
 */

//use vector,Name_value instead of two vectors

#include "header.h";

using namespace std;

class Name_value{
public:
    string name;
    double value;
};

int main() {
    cout << "Hello, World!" << endl;

    vector<Name_value> v;
    string name;
    string str;
    string vals;
    double val;

    while (true)
    {
        getline(cin, str);
        string name = str.substr(0, str.find(" "));
        str.erase(0, str.find(" ") + 1);
        string vals = str.substr(0, str.find(" "));
        try {
            val = stof(vals);
        }
        catch(exception &err){
            continue;
        }

        if (name == "NoName" || val == 0)
            break;

        for(auto i = v.begin(); i != v.end(); i++)
        {
            if (i->name == name)
                continue;
        }

        Name_value nv;
        nv.name = name;
        nv.value = val;

        v.push_back(nv);
    }

    for(auto i = v.begin(); i != v.end(); i++)
        cout << "(" << i->name << "," << i->value << ")" << endl;

    return 0;
}