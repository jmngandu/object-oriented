#include <iostream>
using namespace std;

class rectangle{
    private:
    float length;
    float width;
    float result;

    public:
    void dimensions(float l, float w){
        length = l;
        width = w;
    }
    void perimeter(){
        result = 2 * (length * width);
        cout <<result<<endl;
        
    }
};
int main(){
    rectangle rectangle1;
    rectangle1.dimensions(5.4, 6.9);
    rectangle1.perimeter();
//cout<< rectangle1.dimensions(45.4, 78.4);
  
  return 0;
}