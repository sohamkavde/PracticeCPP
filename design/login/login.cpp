#include <iostream>
#include <fstream>
using namespace std;

bool isLogin(){
    cout<<"Welcome to Login \n";
    string username,password;
    string un,up;
    cout<<"Select username : ";
    cin>>username;
    cout<<"Select password : ";
    cin>>password;

    ifstream read(username + ".txt");
    getline(read,un);
    getline(read,up);
    if(un == username && up == password){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int choice;
    cout<<"Main Menu"<<endl;
    cout<<"----------------------\n";
    cout<<"1. Registration \n";
    cout<<"2. Login \n";
    cout<<"Your choice :\n";
    cin>>choice;
    if(choice == 1){
        cout<<"Welcome to Registration \n";
        string username,password;
        cout<<"Select username : ";
        cin>>username;
        cout<<"Select password : ";
        cin>>password;


        ofstream Myfile;
        Myfile.open(username+".txt");
        Myfile <<username <<endl<< password;
        Myfile.close();
        cout<<"Registration Successfull\n";
        main();
        
    }else if( choice == 2){
        if(isLogin()){
            int secondChoice;
            cout<<"Login SuccessFull \n";
            cout<<"Dashboard \n";
            cout<<"No message \n";
            cout<<"1. Sign Out \n";
            cout<<"2. Go to main menu \n";
            cout<<"Your choice : ";
            cin>>secondChoice;
            if(secondChoice == 1){
                system("exit");
            }else{
                main();
            }
            return 1;

        }else{
            system("clear");
            cout << endl;
            cout << "Invalid login!" << endl;
            main();
            return 0;
        }
    }
}