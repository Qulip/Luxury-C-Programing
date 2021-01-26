#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0)
        : xpos(x), ypos(y)
    {
    }
    void ShowPosition() const
    {
        cout << '[' << xpos << "," << ypos << "]" << endl;
    }
    friend bool operator==(const Point &x1, const Point &x2);
    friend bool operator!=(const Point &x1, const Point &x2);
};

bool operator==(const Point &x1, const Point &x2)
{
    if ((x1.xpos == x2.xpos) && (x1.ypos == x2.ypos))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator!=(const Point &x1, const Point &x2)
{
    if ((x1.xpos == x2.xpos) && (x1.ypos == x2.ypos))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3(10, 20);

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    if (pos2 == pos3)
    {
        cout << "pos2, pos3은 같습니다." << endl;
    }
    else
    {
        cout << "pos2, pos3은 같지 않습니다." << endl;
    }

    if (pos1 != pos3)
    {
        cout << "pos1, pos3은 같지 않습니다." << endl;
    }
    else
    {
        cout << "pos1, pos3은 같습니다." << endl;
    }
}