#include "Cola.h"



void Cola::DibujarCola(float angulo, float x, float y, float z) {
    glPushMatrix();
    glTranslatef(-0.5, 0.0, 0.0);
    glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPopMatrix();
   

}