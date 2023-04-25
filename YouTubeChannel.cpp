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
    ytChennal.ownerName = "Cat";
    ytChennal.SubscribersCount = 2000;
    ytChennal.PublishedVideoTitles = { "C++ for beginners Video 1","HTML & CSS Video 1","C++ OOP Video" };

    cout << "Name:" << ytChennal.Name << endl;
    cout << "ownerName:" << ytChennal.ownerName << endl;
    cout << "SubscribersCount " << ytChennal.SubscribersCount << endl;
    cout << "Videos:" << endl;
    for (string VideoTitles : ytChennal.PublishedVideoTitles) {
        cout << VideoTitles << endl;
    }

    system("pause>0");
}

