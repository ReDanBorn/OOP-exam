#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1251");
    string name;
    cout << "Input your name: ";
    //Или/Или
    //cin >> name;
    getline(cin, name);
    //Или/Или
    cout << "Your name: " << name << std::endl;

    string message
    { 
        "Hello METANIT.COM!" 
    };
    string message2 = "Hello METANIT.COM!";
    string message3("Hello METANIT.COM!");

    string message4(4, 'd');

    string hello{ "hello world" };
    string message5{ hello };

    string message6{ "hello world", 4 };
    string message7{ "hello world", 6, 5 };

    string hello2{ "hello world" };
    string message8{ hello, 4 };
    string message9{ hello, 6, 5 };
    cout << "string message: " << message << endl;
    cout << "string message2: " << message2 << endl;
    cout << "string message3: " << message3 << endl;
    cout << "string message4: " << message4 << endl;
    cout << "string message5: " << message5 << endl;
    cout << "string message6: " << message6 << endl;
    cout << "string message7: " << message7 << endl;
    cout << "string message8: " << message8 << endl;
    cout << "string message9: " << message9 << endl;

    string message10{ "Hello" };
    cout << "message10 = " << message10 << endl;
    cout << "Length 10: " << message10.length() << endl;
    cout << "Size 10: " << message10.size() << endl;

    string message11;
    if (message11.empty())
        cout << "string message11: " << "string is empty " << endl;
    else
        cout << "string is not empty" << endl;

    string hello3{ "hello" };
    string world{ "world" };
    string message12{ hello3 + " " + world };
    cout << "string message12: " << message12 << endl;

    string hello4{ "hello" };
    string message13{ hello4 + " world" "!" };
    //string message13{ "hello " + "world" + "!" }; //ОШИБКА!!!
    string message14{ "hello "s + "world"s + "!"s }; //Однако если после литералов стоит символ S, то всё работает (S преобразует литералы в объекты)
    cout << "string message13: " << message13 << endl;
    cout << "string message14: " << message14 << endl;
    string text{ "Name: \t\"Tom\"\nAge:\t38" };
    cout << "string text: \n" << text << std::endl;
}