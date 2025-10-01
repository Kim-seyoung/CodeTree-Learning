#include <iostream>
#include <string>

using namespace std;

class User {
    public:
        string user_id;
        int user_level;

        User(string user_id, int user_level) {
            this->user_id = user_id;
            this->user_level = user_level;
        } 

};


int main() {
    string user2_id;
    int user2_level;    

    cin >> user2_id >> user2_level;

    // Please write your code here.
    User user1 = User("codetree", 10);
    User user2 = User(user2_id, user2_level);

    cout << "user " << user1.user_id << " lv " << user1.user_level << endl;
    cout << "user " << user2.user_id << " lv " << user2.user_level << endl;
    return 0;
}