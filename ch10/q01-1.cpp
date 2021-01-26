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
    friend Point operator-(const Point &x1, const Point &x2);
};

Point operator-(const Point &x1, const Point &x2)
{
    Point pos(x1.xpos - x2.xpos, x1.ypos - x2.ypos);
    return pos;
}

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos2 - pos1;

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();
}