#include <iostream>
#include <string>

//#include <fstream>

using namespace std;

//ofstream users ("users.txt");

void version() {
    cout << "NikPolo Command Terminal \nv0.5" << endl;
}


int main()
{

    version();
    
    string user, pswrd, checkuser, checkpswrd;
    
    bool whileterminal = true;
    bool while_login = true;
    bool while_pswrd = true;
    bool while_user = true;

    while (while_user) {
        cout << "Write new username: ";
        cin >> user;
        cout << "Save username? Write yes or no: ";
        string yesno;
  
        cin >> yesno;
        if ("yes" == yesno || "y" == yesno) {
            while_user = false;
            cout << "Saved!" << endl;
        }
        else {
            continue;
        }
    }
    while (while_pswrd) {
        cout << "Write new password: ";
        cin >> pswrd;
        cout << "Save password? Write yes or no: ";
        string yesno2;
        cin >> yesno2;
        if ("yes" == yesno2 || "y" == yesno2) {
            while_pswrd = false;
            cout << "Saved!" << endl;
        }
        else {
            continue;
        }
    }
  
    system("cls");


    while (while_login) {
        cout << "Login: " << endl;
        cout << "Write username: ";
        cin >> checkuser;
        cout << endl;
        cout << "Write password: ";
        cin >> checkpswrd;
        cout << endl;
        if (checkuser == user) {  
            if (checkpswrd == pswrd) {
                system("cls");
                system("cls");
                while_login = false;
                cout << "Login Complete!" << endl;   
            }
            else {
                cout << "Incorrect password or username" << endl;
                cout << endl;
            }   
        }
        else {
            cout << "Incorrect username or password" << endl;
            cout << endl;                
        }
    }


    while (whileterminal) {
        cout << endl;
        string commands;
        cout << "polo - " << user << "/>";
        getline(cin >> ws, commands);
        if (commands == "exit") {
            cout << endl;
            cout << "Confirming exit..." << endl;
            system("pause");
            whileterminal = false;
        }
        else if (commands == "start print") {
            string printinput;
            cout << "print | Input: ";
            getline(cin, printinput);
            cout << endl;
            cout << "print | Output: " << printinput << endl;
        }

        else if (commands == "user") {
            cout << "Current user logged in is: " << user;
        }
        else if (commands == "version" || commands == "--version" || commands == "about" || commands == "-v" || commands == "--v" ||commands == "-ver") {
            version();
        }
        else if (commands == "help")
        {
            cout << endl;
            cout << "You can use Following commands: " << endl;
            cout << "version, --version, --v, -ver, -v and about: All they show current version." << endl;
            cout << "help: Shows this page. " << endl;
            cout << "user: Shows current user logged in. " << endl;
            cout << "exit: Exits current session. " << endl;
            cout << "start print: You can write input so it replys it back. " << endl;
        }

        else if (commands == "") {
            
        }
    
        else {
    	    continue;
        }
    }
}
