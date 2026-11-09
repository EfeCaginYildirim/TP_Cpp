/*
// Created by Efe Cagin Yildirim on 06/11/2026.
*/

#ifndef TP3_FIGURE2D_FIGURE2D_H
#define TP3_FIGURE2D_FIGURE2D_H

#include <iostream>

class Figure2D {
private:
    const unsigned int id_;
    static unsigned int compteur_id_;
public:
    Figure2D() : id_(compteur_id_++) {};
    Figure2D(const Figure2D & ) : id_(compteur_id_++) {};
    Figure2D& operator=(const Figure2D &) { return *this; }

    virtual ~Figure2D() = default;
    virtual void display() const = 0;
    virtual double area() const = 0;

    unsigned int getId() const;
};

inline unsigned int Figure2D::getId() const { return id_; }



#endif //TP3_FIGURE2D_FIGURE2D_H
