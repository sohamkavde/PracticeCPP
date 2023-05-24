#include<iostream>
#include<vector>
using namespace std;


class User{
    private:
        string user;
        vector<User*>followers;
        vector<User*>following;
        vector<string>post;
    public:
        User(string name){
            user = name;
        }


        string getUser(){
            return user;
        }

        vector<User*> getFollowers(){
            return followers;
        }
        vector<User*> getFollowing(){
            return following;
        }
        
        void follow(User* u){
            following.push_back(u);
            u->addFollower(this);
        }

        void addFollower(User* u){
            followers.push_back(u);
        }
        
        void createpost(string posts){
            post.push_back(posts);
        }
        void displaypost(){
            cout<<"Poste by "<<user<<endl;
            for(auto posts : post){
                cout<<"Post - : "<<posts<<endl;
            }

        }
};


int main(){
    User user1("Soham");
    User user2("Rohit");
    User user3("Yuvan");

    // follow other user by user1 = soham
    user1.follow(&user2);
    user1.follow(&user3);

    // display post of soham
    user1.displaypost();

    //user2 creating some post
    user2.createpost("Hellow this is my new post");

    // displaying post of user1 following
    vector<User*>following = user1.getFollowing();
    for(auto user : following){
        user->displaypost();
    }

  
return 0;
}