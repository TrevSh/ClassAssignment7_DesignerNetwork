
#include <iostream>
#include <string>                                                       //Library that deals in strings. Enables getline.

int main()
{
    std::string username;
    std::string password;
    bool success;

    std::cout << "\tGame Designer's Network\n";

    do {                                                                //The start of the do-while loop. Will repeat loop aslong as condition is met.
        std::cout << "\nUsername: ";
        std::getline(std::cin, username);

        std::cout << "Password: ";
        std::getline(std::cin, password);                               //getline grabs the user input and stores it in the variable. "password" in this case.

        if (username == "Sid Meyers" && password == "Civilization") {
            std::cout << "My dawg Sid, welcome in!";
            success = true;
        }
        else if (username == "Tom Clancy" && password == "SplinterCell") {
            std::cout << "Sup Tom.";
            success = true;
        }
        else if (username == "guest" || password == "guest") {
            std::cout << "Welcome, Guest. Make an account, dont be a stranger.\n\n";
            success = true;
        }
        else {
            std::cout << "\nLogin failed. Try again";
            success = false;
        }
    } while (!success);                                                 //End of do-while loop. Contains loop condition. "!" behind a bool means "false".
    return 0;
}
