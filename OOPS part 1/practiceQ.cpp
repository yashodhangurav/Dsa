#include<iostream>
using namespace std;


class User{

    int id;
    string password;

    public:
        string username;

        User(int id){
            this->id = id;
        }

        // setter
        void setter(string password){
            this->password = password;
        }
        // getter
        string getter(){
            return password;
        }
};

int main(){

    User user1(100);

    user1.username = "yashodhan";
    user1.setter("15455");

    cout<<"username : "<<user1.username<<endl;
    cout<<"Password : "<<user1.getter()<<endl;

    return 0;
}