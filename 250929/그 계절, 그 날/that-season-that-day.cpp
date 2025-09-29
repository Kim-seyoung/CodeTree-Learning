#include <iostream>

using namespace std;

int Y, M, D;

bool isYoonYear(int y) {
    bool result = false;
    if(y % 4 == 0)
        result = true;
    if(y % 100 == 0 && y % 400 != 0)
        return false;
    return result;
}

bool isExist(int month, int day, bool YoonYear) {
    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        if(day <= 30) return true;
        else return false;
    }
    else if (month == 2)
    {
        if(YoonYear) {
            if(day <= 29) return true;
            else return false;
        } else {
            if(day <= 28) return true;
            else return false;
        }
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if(day <= 31) return true;
        else return false;
    }
    else
        return false;
}

void PrintSeason(int year, int month, int day) {
    // 윤년 체크
    bool YoonYear = isYoonYear(year);

    // 날짜 존재 체크
    if(isExist(month, day, YoonYear))
    {
        // 계절 출력, 없으면 -1
        switch(month) {
            case 1:
            case 2:
            case 12:
                cout << "Winter" << endl;
                break;
            case 3:
            case 4:
            case 5:
                cout << "Spring" << endl;
                break;
            case 6:
            case 7:
            case 8:
                cout << "Summer" << endl;
                break;
            case 9:
            case 10:
            case 11:
                cout << "Fall" << endl;
                break;
        }
    } else cout << -1 << endl;
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.

    PrintSeason(Y, M, D);

    return 0;
}