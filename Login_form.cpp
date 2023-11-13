#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
    private:
        string username, password;
    public:
        User(string name,string pass)
        {
            username=name;
            password=pass;
        }
};

class UserManager
{
    private:
        vector<User> users; 
    public:
        void RegisterUser(){
            string username,password;
            cout<< "Enter username : ";
            cin >> username;
            cout<< "Enter password : ";
            cin >> password;
            User newUser(username,password);
            users.push_back(username,password);

            cout << "\t\t User registered successfully\n";
        }
};

main()
{
    UserManager userM;
    int op;
    cout<< "\n\n\t\t1. Register User";
}