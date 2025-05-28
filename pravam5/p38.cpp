#include <iostream>
using namespace std;

class Camera{
public:
    void takePhoto()
    {
        cout << "Taking Photo... " << endl;
    }
};

class Phone{
    public:
        void makeCall()
        {
            cout << " making a call.." << endl;
        }
};

class SmartPhone : public Camera, public Phone{
    public:
        void browzeInternet()
        {
            cout << "Browzing internet... " << endl;
        }
};

int main (){
    SmartPhone s1;
    s1.takePhoto();
    s1.makeCall();
    s1.browzeInternet();
    return 0;
}
