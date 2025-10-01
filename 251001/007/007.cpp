#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int meeting_time;

class Mission {
    public:
        string secret_code;
        char meeting_point;
        int meeting_time;

        Mission(string secret_code, char meeting_point, int meeting_time) {
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->meeting_time = meeting_time;
        }

        void printMission() {
            cout << "secret code : " << secret_code << endl;
            cout << "meeting point : " << meeting_point << endl;
            cout << "time : " << meeting_time << endl;
        }
};

int main() {
    cin >> secret_code >> meeting_point >> meeting_time;

    // Please write your code here.
    Mission mission007(secret_code, meeting_point, meeting_time);
    mission007.printMission();
    return 0;
}