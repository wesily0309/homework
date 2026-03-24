#include <iostream>
#include <string>
using namespace std;
struct Rect {
    string name;
    float x, y;
    float w, h;
};

// 核心逻辑：判断两个矩形是否重叠
bool checkCollision(const Rect& r1, const Rect& r2) {
    return (r1.x < r2.x + r2.w &&
        r1.x + r1.w > r2.x &&
        r1.y < r2.y + r2.h &&
        r1.y + r1.h > r2.y);
}

int main() {
    Rect r1{ "矩形A" }, r2{ "矩形B" };

    cout << "碰撞判定\n";

    // 输入第一个矩形的数据
    cout << "輸入A " << r1.name << " 的數值 (x y 寬 高): ";
    cin >> r1.x >> r1.y >> r1.w >> r1.h;

    // 输入第二个矩形的数据
    cout << "輸入B " << r2.name << "  的數值 (x y 寬 高): ";
    cin >> r2.x >> r2.y >> r2.w >> r2.h;

    cout << "\n結果\n";

    if (checkCollision(r1, r2)) {
        cout << "區域重疊。" << endl;
    }
    else {
        cout << "不重疊" << endl;
    }

    return 0;
}