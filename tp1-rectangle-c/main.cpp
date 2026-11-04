/*
// Created by Efe Cagin Yildirim on 04/11/2026.
*/
#include <iostream>
#include <sstream>
#include "Rectangle_Poo.h"

int main() {


    // Constructeurs
    std::cout << "=== Constructeurs ===" << std::endl;
    Rectangle_Poo ra(10, 20);
    Rectangle_Poo rb(20, 10);
    Rectangle_Poo rc;
    Rectangle_Poo rd(5);
    Rectangle_Poo re(ra);
    std::cout << "ra : " << ra << std::endl;
    std::cout << "rb : " << rb << std::endl;
    std::cout << "rc : " << rc << std::endl;
    std::cout << "rd : " << rd << std::endl;
    std::cout << "re (copie de ra) : " << re << std::endl;

    // Getters
    std::cout << std::endl << "=== Getters ===" << std::endl;
    std::cout << "ra.getWidth()  = " << ra.getWidth() << std::endl;
    std::cout << "ra.getHeight() = " << ra.getHeight() << std::endl;

    // Setters
    std::cout << std::endl << "=== Setters ===" << std::endl;
    rc.setWidth(3);
    rc.setHeight(4);
    std::cout << "rc apres setWidth(3) et setHeight(4) : " << rc << std::endl;

    // area
    std::cout << std::endl << "=== area ===" << std::endl;
    std::cout << "ra.area() = " << ra.area() << std::endl;
    std::cout << "rc.area() = " << rc.area() << std::endl;

    // display
    std::cout << std::endl << "=== display ===" << std::endl;
    ra.display();                    // os = std::cout par defaut
    std::cout << std::endl;
    std::ostringstream oss;
    ra.display(oss);                 // ecriture dans une string
    std::cout << "display dans un ostringstream : \"" << oss.str() << "\"" << std::endl;

    // operator<<
    std::cout << std::endl << "=== operator<< ===" << std::endl;
    std::cout << ra << std::endl << rb << std::endl;

    // equals
    std::cout << std::endl << "=== equals ===" << std::endl;
    std::cout << "ra.equals(rb) = " << ra.equals(rb) << "  (attendu true, rectangle tourne)" << std::endl;
    std::cout << "ra.equals(re) = " << ra.equals(re) << "  (attendu true, identique)" << std::endl;
    std::cout << "ra.equals(rc) = " << ra.equals(rc) << "  (attendu false)" << std::endl;

    // operator==
    std::cout << std::endl << "=== operator== ===" << std::endl;
    std::cout << "(ra == rb) = " << (ra == rb) << "  (attendu true)" << std::endl;
    std::cout << "(ra == rc) = " << (ra == rc) << "  (attendu false)" << std::endl;
    std::cout << "(ra == Rectangle_Poo(20, 10)) = " << (ra == Rectangle_Poo(20, 10)) << "  (objet temporaire)" << std::endl;


    return 0;
}
