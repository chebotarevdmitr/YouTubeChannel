#include <iostream>
#include<list>
using namespace std;

class YouTubeChennel {
public:
    string Name;
    string ownerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;

};

int main()
{
    YouTubeChennel ytChennal;
    ytChennal.Name = "namechennel";
    ytChennal.ownerName = "Сat";
    ytChennal.SubscribersCount = 2000;
    ytChennal.PublishedVideoTitles = { "C++ for beginners Video 1","HTML & CSS Video 1","C++ OOP Video" };
    system("pause<0");
}

