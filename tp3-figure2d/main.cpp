#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main(){
    Rectangle r(10,10);
    Circle c(10);
    r.display(); cout<<endl;
    c.display(); cout<<endl;
    cout<<"This figure has an area of :"<<r.area()<<endl;
    cout<<"This figure has an area of :"<<c.area()<<endl;
    
    //code for the paragraph about smart pointer 
    /*
     vector<unique_ptr<Figure2D>> tab2;
    tab2.push_back(make_unique<Rectangle>(10,10));
    tab2.push_back(make_unique<Circle>(10));
    tab2.push_back(make_unique<Square>(10));

    for(auto it=tab2.cbegin();it !=tab2.cend();++it)
    {
        (*it)->display(); cout<<endl;
    }
    
    for(auto & element : tab2)
        cout<<"This figure has an area of :"<<element->area()<<endl;
    */

    return 0;
}
