#include <string>
#include <iostream>
#include <math.h>
using namespace std;

string home (long long);
string one (int);
string two (int);
string two1 (int);
string three (int);
string F10hundred (long long);

int main() {
    long long a;
    cin >>a;
    cout << home(a);
    return 0;
}

string home (long long x){
    if (x < 10){ //1 raqami
        return one(x);
    }
    else if (x<100){ //2 raqami
        if (x < 20 && x%10 != 0)
            return two1(x);
        else if(x%10 != 0)
            return two(x - x % 10) + " o " + one(x % 10);
        else
            return two(x);
    }
    else if (x < 1000){ //3 raqami
        if (x%100 == 0)
            return three(x);
        else
            return three(x-x%100) + " o " + home(x%100);
    }
    else{
        long long int b = x, c = x;
        int sum = 1;
        while ( b / 10 >= 1) {
            b /= 10;
            sum++;
        }
        while (c / 1000 >= 1) {
            c /= 1000;
        }
        //4 ta 6 raqam
        if (sum<7) {
            if (x % 1000 == 0)
                return home(c) + " " + F10hundred(3);
            else
                return home(c) + " " + F10hundred(3) + " o " + home(x - c * pow(10, 3));
        }
        //7 ta 9 raqam
        if (sum < 10){
            if (x % 1000000==0)
                return home(c)+" "+F10hundred(6);
            else
                return home(c)+" "+F10hundred(6)+" o "+home(x - c * pow(10, 6));
        }
        if (sum < 13){
            if (x%1000000000==0)
                return home(c)+" "+F10hundred(9);
            else
                return home(c)+" "+F10hundred(9)+" o "+home(x - c * pow(10, 9));
        }
    }
    return "inam shod adad?";
}

string one (int a){
    switch (a){
        case (1):
            return "yek";
        case (2):
            return "do";
        case (3):
            return "se";
        case (4):
            return "char";
        case (5):
            return "panj";
        case (6):
            return "shesh";
        case (7):
            return "haft";
        case (8):
            return "hasht";
        case (9):
            return "noh";
        default:
            return "";
    }
}

string two1 (int a){
    switch (a){
        case (11):
            return "yazdah";
        case (12):
            return "davazdah";
        case (13):
            return "sizdah";
        case (14):
            return "chardah";
        case (15):
            return "panzdah";
        case (16):
            return "shanzdah";
        case (17):
            return "hefdah";
        case (18):
            return "hejdah";
        case (19):
            return "noozdah";
        default:
            return "";
    }
}

string two (int a){
    switch (a){
        case (10):
            return "dah";
        case (20):
            return "bist";
        case (30):
            return "si";
        case (40):
            return "chehel";
        case (50):
            return "panjah";
        case (60):
            return "shast";
        case (70):
            return "haftad";
        case (80):
            return "hashtad";
        case (90):
            return "navad";
        default:
            return "";
    }
}

string three (int a){
    switch (a){
        case (100):
            return "sad";
        case (200):
            return "devist";
        case (300):
            return "sisad";
        case (400):
            return "charsad";
        case (500):
            return "pansad";
        case (600):
            return "sheshsad";
        case (700):
            return "haftsad";
        case (800):
            return "hshtsad";
        case (900):
            return "nohsad";
        default:
            return "";
    }
}

string F10hundred (long long a){
    switch (a){
        case (3):
            return "hezar";
        case (6):
            return "milioon";
        case (9):
            return "milyard";
        default:
            return "";
    }
}