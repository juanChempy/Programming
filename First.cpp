

#include <iostream>
#include<string>
using namespace std;

int main()
{
    system("title FIRST 1.0.0");
    string cmd = "quit";
    cin >> cmd;
    while (cmd != "quit") {
        cout << "INPUTING\\[lroot]#";
        
        if (cmd == "ls") {
            system("dir");
            break;
        }
        else if (cmd == "reg") {
            system("regedit");
            break;
        }
        else if (cmd == "dp") {
            system("diskpart");
            break;
        }
        else if (cmd == "ps") {
            system("C:\\Windows\\system32\\Taskmgr.exe");
            break;
        }
        else if (cmd == "quit") {
            system("exit");
        }
        else if (cmd == "poweroff") {
            system("shutdown -s -t 10");
            break;
        }
        else {
            cout << "Error!" << endl;
            break;
        }
    }
    return 0;

}

