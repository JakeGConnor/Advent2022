#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main() {

    fstream MyFile("Day2.txt");

    string text;
    char des[4];

    int total = 0;

    while (getline (MyFile, text)){
        strcpy(des, text.c_str());
        if(des[2] == 'X'){
                total = total + 1;
        }
        else if(des[2] == 'Y'){
                total = total + 2;
        }
        else if(des[2] == 'Z'){
                total = total + 3;
        } 
        if(des[0] == 'A' && des[2] == 'X'){
            total = total + 3;
        }
        else if(des[0] == 'B' && des[2] == 'Y'){
            total = total + 3;
        }
        else if(des[0] == 'C' && des[2] == 'Z')
        {
            total = total + 3;
        }
        if(des[0] == 'B' && des[2] == 'Z'){
            total = total + 6;
        }
        else if(des[0] == 'A' && des[2] == 'Y'){
            total = total + 6;
        }
        else if(des[0] == 'C' && des[2] == 'X')
        {
            total = total + 6;
        }
    }

    cout << total << endl;

    return 0;
}
