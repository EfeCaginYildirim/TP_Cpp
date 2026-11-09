#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include <vector>
#include <memory>

using namespace std;

int main(){
    Rectangle r(10,10);
    Circle c(10);
    Square s(9);

    cout << endl;

    r.display();
    c.display();
    s.display();

    cout << endl;

    cout<<"This figure has an area of :"<<r.area()<<endl;
    cout<<"This figure has an area of :"<<c.area()<<endl;
    cout<<"This figure has an area of :"<<s.area()<<endl;

    vector<Figure2D*> figures;
    figures.push_back(&r);
    figures.push_back(&c);

    for (vector<Figure2D*>::const_iterator it = figures.cbegin(); it !=figures.cend(); ++it) {
        (*it)->display();
        // cout<<"succesfully writen on console"<<endl;
    }

    for (auto element : figures) {
        cout << "This Figure has an area of: " << element->area() << endl;
    }


    //code for the paragraph about smart pointer 
    cout << "--Smart Pointers--" << endl;
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

    cout << "--Smart Pointers--" << endl;
    return 0;
}
