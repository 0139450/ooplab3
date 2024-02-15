/*Write a C++ class 'Box' and its members as the following :
* void boxArea(float length, float width) : as a member function defiend inside class
* void boxVolume(float length, float width, float height) : as a member function defined oustide class
* void displayBoxDimensions() : as a friend function
* void displayWelcomeMessage() : as an inline function
Note: Take the input from the user*/
#include<iostream>
using namespace std;
class Box{
        public:
                void boxArea(float length,float width){
                cout<<"area is:"<<length*width<<endl;
                }
                void boxvolume(float length,float width,float height){}
                friend void displayBoxDimension(Box)
                {
                        cout<<"noo";
                }

};
inline void displaywelcomemsg()
                {
                   cout<<"welcome"<<endl;     
                }
int main()
{
        Box obj;
        obj.boxArea(1,3);
        inline void displayWelcomeMsg()
        void displayBoxDimension(Box obj)


}
