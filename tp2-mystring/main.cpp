#include <iostream>
#include "mystring.h"
#include <exception>

using namespace std;

void display_MyString_as_in_C(const MyString & s) {
//only for pedagogical purpose, operator<< should be used otherwise
    cout<<"******** Mystring content : ";
    for (int i = 0; i<s.length() ; ++i)
        cout<<s[i]<<" ";
    cout<<endl;
}

int main() {
    //Constructors
    /*
    MyString ss0;
    MyString ss1("Hello");
    MyString ss2(ss1);
    */

    //Stream operator
    /*
    cout<<"ss0 (default constructor)#"<<ss0<<"#"<<endl;
    cout<<"ss1 (c-string initialization)(Hello)#"<<ss1<<"#"<<endl;
    cout<<"ss2 (copy constructor of s1)#"<<ss2<<"#"<<endl;
    */

    //Test of operator=
    /*
    MyString ch1("abc");
    cout<<"ch1 before self-assignment (abc)#"<<ch1<<"#"<<endl;
    ch1 = ch1;
    cout<<"ch1 after self-assignment (abc)#"<<ch1<<"#"<<endl;
    */

    // Constructors and copy assignment operator
    /*
    MyString ch2 = "abc";
    cout<<"ch2(abc)#"<<ch2<<"#"<<endl;
    MyString ch3;
    cout<<"ch3 before copy assignment#"<<ch3<<"#"<<endl;
    ch3 = "abc";
    cout<<"ch3 after copy assignment(abc)#"<<ch3<<"#"<<endl;
    */


    //Operator[]
    /*
    MyString ch5("bbb");
    cout<<"ch2(abc)#"<<ch2<<"#"<<endl;
    cout<<"ch5(bbb)#"<<ch5<<"#"<<endl;
    ch5[0] = ch2[0];
    cout<<"ch2(abc)#"<<ch2<<"#"<<endl;
    cout<<"ch5(abb)#"<<ch5<<"#"<<endl;
    ch5[0] = 'A';
    cout<<"ch2(abc)#"<<ch2<<"#"<<endl;
    cout<<"ch5(Abb)#"<<ch5<<"#"<<endl;

    display_MyString_as_in_C(ch5);
    */

    //Boolean operators
    /*
    cout<<"ss1(Hello)#"<<ss1<<"#"<<endl;
    cout<<"ss2(Hello)#"<<ss2<<"#"<<endl;
    cout<<"ss1<ss2: "<<(ss1<ss2)<<", ss1>ss2: "<<(ss1>ss2)<<", ss1<=ss2: "<<(ss1<=ss2)<<", ss1>=ss2: "<<(ss1>=ss2)<<", ss1==ss2: "<<(ss1==ss2)<<endl;
    ss2="World";
    cout<<"ss1(Hello)#"<<ss1<<"#"<<endl;
    cout<<"ss2(World)#"<<ss2<<"#"<<endl;
    cout<<"ss1<ss2: "<<(ss1<ss2)<<", ss1>ss2: "<<(ss1>ss2)<<", ss1<=ss2: "<<(ss1<=ss2)<<", ss1>=ss2: "<<(ss1>=ss2)<<", ss1==ss2: "<<(ss1==ss2)<<endl;
    ss2="Harry Potter";
    cout<<"ss1(Hello)#"<<ss1<<"#"<<endl;
    cout<<"ss2(Harry Potter)#"<<ss2<<"#"<<endl;
    cout<<"ss1<ss2: "<<(ss1<ss2)<<", ss1>ss2: "<<(ss1>ss2)<<", ss1<=ss2: "<<(ss1<=ss2)<<", ss1>=ss2: "<<(ss1>=ss2)<<", ss1==ss2: "<<(ss1==ss2)<<endl;
    */

    //operator+
    /*
    MyString s1("Hello");
    MyString s2("World");
    MyString s3=s1+s2; // RVO here
    cout<<"s1#"<<s1<<"#"<<endl;
    cout<<"s2#"<<s2<<"#"<<endl;
    cout<<"s3=s1+s2#"<<s3<<"#"<<endl;
    s3=" "+s2; // implicit conversion
    cout<<"s3= \" \" +s2#"<<s3<<"#"<<endl;
    s3=s1+s3;
    cout<<"s3=s1+s3#"<<s3<<"#"<<endl;
    s3=s3+"!";
    cout<<"s3=s3+\"!\"#"<<s3<<"#"<<endl;
    */

    //toUpper
    /*
    cout<<"s1#"<<s1<<"#"<<endl;
    cout<<"s2(world)#"<<s2<<"#"<<endl;
    ( s1 = s2).toUpper();
    cout<<"s1(WORLD)#"<<s1<<"#"<<endl;
    cout<<"s2(world)#"<<s2<<"#"<<endl;
    */

    return EXIT_SUCCESS;

}
