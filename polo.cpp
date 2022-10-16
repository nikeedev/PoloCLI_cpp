#include <iostream>
#include <string>
#include <hash_map>



//#include <fstream>

//ofstream users ("users.txt");

void version() {
    std::cout << "Polo CLI C++ \nv0.5" << std::endl;
}


int main()
{

    version();
    
    std::string user, pswrd, checkuser, checkpswrd;
    
    bool whileTerminal = true,
        
        while_login = true,
        
        while_pswrd = true,
        
        while_user = true;

    while (while_user) {
        std::cout << "Write new username: ";
        std::cin >> user;
        std::cout << "Save username? Write y or n: ";
        std::string yesno;
  
        std::cin >> yesno;
        if ("yes" == yesno || "y" == yesno) {
            while_user = false;
            std::cout << "Saved!" << std::endl;
        }
        else {
            continue;
        }
    }
    while (while_pswrd) {
        std::cout << "Write new password: ";
        std::cin >> pswrd;
        std::cout << "Save password? Write y or n: ";
        std::string yesno2;
        std::cin >> yesno2;

        if ("yes" == yesno2 || "y" == yesno2) {
            while_pswrd = false;
            std::cout << "Saved!" << std::endl;
        }
        else {
            continue;
        }
    }
  
    system("cls");


    while (while_login) {
        std::cout << "Login: " << std::endl;
        std::cout << "Write username: ";
        std::cin >> checkuser;
        std::cout << std::endl;
        std::cout << "Write password: ";
        std::cin >> checkpswrd;
        std::cout << std::endl;
        if (checkuser == user) {  
            if (checkpswrd == pswrd) {
                system("cls");
                system("cls");
                while_login = false;
                std::cout << "Login Complete!" << std::endl;   
            }
            else {
                std::cout << "Incorrect password or username" << std::endl;
                std::cout << std::endl;
            }   
        }
        else {
            std::cout << "Incorrect username or password" << std::endl;
            std::cout << std::endl;                
        }
    }


    while (whileTerminal) {
        std::cout << std::endl;
       
        std::cout << "polo - " << user << " />";
        
        std::string commands;
        std::getline(std::cin, commands);
        
        
        if (commands == "exit")
        {
            std::cout << std::endl;
            std::cout << "Confirming exit..." << std::endl;
            system("pause");
            whileTerminal = false;
        }

        else if (commands == "print")
        {
            std::string printinput;
            std::cout << "print | Input: ";

            std::getline(std::cin, printinput);

            std::cout << std::endl;
            std::cout << "print | Output: " << printinput << std::endl;
        }

        else if (commands == "user")
        {
            std::cout << "Current user logged in is: " << user;
        }

        else if (commands == "version" || commands == "about")
        {
            version();
        }

        else if (commands == "help")
        {
            std::cout << std::endl;
            std::cout << "You can use these commands: " << std::endl;
            std::cout << "version or about: All they show current version of the terminal." << std::endl;
            std::cout << "help: Shows this page. " << std::endl;
            std::cout << "user: Shows current user logged in. " << std::endl;
            std::cout << "exit: Exits current session. " << std::endl;
            std::cout << "echo: Prints out input. " << std::endl;
        }
    
        else {
    	    continue;
        }
    }
}
