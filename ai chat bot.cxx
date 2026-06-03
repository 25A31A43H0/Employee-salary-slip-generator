#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int choice;
    string userInput;

    cout << "=====================================\n";
    cout << "        SIMPLE AI CHATBOT\n";
    cout << "=====================================\n";
    cout << "Developed by BTech 1st Year Student\n";

    while (true)
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Chat with Bot\n";
        cout << "2. Show Current Time\n";
        cout << "3. About AI\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;
        cin.ignore();

        // Exit
        if (choice == 4)
        {
            cout << "\nBot: Thank you for using the chatbot!\n";
            break;
        }

        // Current Time
        else if (choice == 2)
        {
            time_t now = time(0);
            char* dt = ctime(&now);

            cout << "\nCurrent Date and Time:\n";
            cout << dt << endl;
        }

        // About AI
        else if (choice == 3)
        {
            cout << "\nArtificial Intelligence (AI) helps\n";
            cout << "machines think and solve problems.\n";
        }

        // Chat Section
        else if (choice == 1)
        {
            cout << "\nStart chatting with the bot.\n";
            cout << "Type 'exit' to return to menu.\n";

            while (true)
            {
                cout << "\nYou: ";
                getline(cin, userInput);

                // Exit chat
                if (userInput == "exit")
                {
                    cout << "Bot: Returning to main menu.\n";
                    break;
                }

                // Greetings
                else if (userInput == "hello" || userInput == "hi")
                {
                    cout << "Bot: Hello! Nice to meet you.\n";
                }

                // Asking bot name
                else if (userInput == "what is your name")
                {
                    cout << "Bot: My name is AI Chatbot.\n";
                }

                // Asking how are you
                else if (userInput == "how are you")
                {
                    cout << "Bot: I am fine and ready to help.\n";
                }

                // AI question
                else if (userInput == "what is ai")
                {
                    cout << "Bot: AI stands for Artificial Intelligence.\n";
                }

                // Motivation
                else if (userInput == "motivate me")
                {
                    cout << "Bot: Believe in yourself and keep coding.\n";
                }

                // College question
                else if (userInput == "i am studying btech")
                {
                    cout << "Bot: That's great! Engineering is exciting.\n";
                }

                // Thanks
                else if (userInput == "thank you")
                {
                    cout << "Bot: You're welcome.\n";
                }

                // Bye
                else if (userInput == "bye")
                {
                    cout << "Bot: Goodbye! Have a nice day.\n";
                }

                // Default reply
                else
                {
                    cout << "Bot: Sorry, I don't understand that.\n";
                }
            }
        }

        // Invalid Choice
        else
        {
            cout << "\nInvalid choice. Please enter 1 to 4.\n";
        }
    }

    return 0;
}