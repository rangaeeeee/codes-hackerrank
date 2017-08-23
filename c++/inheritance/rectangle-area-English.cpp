class Rectangle {
    public :
    int width;
    int height;
    void Display(void) {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
    public:
    void Display(void) {
        cout << width * height;
    }
    void Input(void) {
        cin >> width >> height;
    }
};