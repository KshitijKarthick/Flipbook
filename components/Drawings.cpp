/*!
    /file Drawings.cpp
    /brief Includes all user defined functions corresponding to the Pages
*/

#include "./headers/Drawings.h"

void level(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
}
 void level1(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/1.08, z);
    glVertex3f(x+width/7, y+height/1.08, z);
    glVertex3f(x+width/7,y+height/1.3, z);
    glVertex3f(x,y+height/1.3,z);
    glEnd();
    glColor3f(1,1,1);
}
 void level2(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/1.3, z);
    glVertex3f(x+width/7, y+height/1.3, z);
    glVertex3f(x+width/7,y+height/1.7, z);
    glVertex3f(x,y+height/1.7,z);
    glEnd();
    glColor3f(1,1,1);
}
void level3(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/1.6, z);
    glVertex3f(x+width/7, y+height/1.6, z);
    glVertex3f(x+width/7,y+height/2.1, z);
    glVertex3f(x,y+height/2.1,z);
    glEnd();
    glColor3f(1,1,1);
}
void level4(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/2.1, z);
    glVertex3f(x+width/7, y+height/2.1, z);
    glVertex3f(x+width/7,y+height/3.1, z);
    glVertex3f(x,y+height/3.1,z);
    glEnd();
    glColor3f(1,1,1);
}
void level5(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
}
 void level6(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y+height/1.08, z);
    glVertex3f(x+width/2.1, y+height/1.08, z);
    glVertex3f(x+width/2.1,y+ height/1.3, z);
    glVertex3f(x+width/7,y+height/1.3,z);
    glEnd();
    glColor3f(0,0,1);

}
 void level7(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y+height/2.1, z);
    glVertex3f(x+width/2.1, y+height/2.1, z);
    glVertex3f(x+width/2.1,y+ height/3.1, z);
    glVertex3f(x+width/7,y+height/3.1,z);
    glEnd();
    glColor3f(0,0,1);

}
 void level8(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);

}
void level9(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y+height/1.08, z);
    glVertex3f(x+width/1.5, y+height/1.08, z);
    glVertex3f(x+width/1.5,y+height/1.3, z);
    glVertex3f(x+width/2.1,y+height/1.3,z);
    glEnd();
    glColor3f(1,1,1);
}
void level10(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y+height/1.3, z);
    glVertex3f(x+width/1.5, y+height/1.3, z);
    glVertex3f(x+width/1.5,y+height/1.7, z);
    glVertex3f(x+width/2.1,y+height/1.7,z);
    glEnd();
    glColor3f(1,1,1);
}
void level11(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y+height/1.6, z);
    glVertex3f(x+width/1.5, y+height/1.6, z);
    glVertex3f(x+width/1.5,y+height/2.1, z);
    glVertex3f(x+width/2.1,y+height/2.1,z);
    glEnd();
    glColor3f(1,1,1);
}
void level12(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
}
void level13(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y+height/1.08, z);
    glVertex3f(x+width/1.2, y+height/1.08, z);
    glVertex3f(x+width/1.2,y+height/1.3, z);
    glVertex3f(x+width/1.5,y+height/1.3,z);
    glEnd();
    glColor3f(1,1,1);
}	
void level14(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y+height/1.6, z);
    glVertex3f(x+width/1.2, y+height/1.6, z);
    glVertex3f(x+width/1.2,y+height/2.1, z);
    glVertex3f(x+width/1.5,y+height/2.1,z);
    glEnd();
    glColor3f(1,1,1);
}	
void level15(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
}
void level16(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7,y+height/1.08, z);
    glVertex3f(x+width/2.1, y+height/1.08, z);
    glVertex3f(x+width/2.1,y+ height/1.3, z);
    glVertex3f(x+width/7,y+height/1.3,z);
    glEnd();
}		
void level17(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7,y+height/1.6, z);
    glVertex3f(x+width/2.1, y+height/1.6, z);
    glVertex3f(x+width/2.1,y+ height/2.1, z);
    glVertex3f(x+width/7,y+height/2.1,z);
    glEnd();
}		
void level18(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7,y+height/3.1, z);
    glVertex3f(x+width/2.1, y+height/3.1, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
}	
void level19(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7,y+height/3.1, z);
    glVertex3f(x+width/2.1, y+height/3.1, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(0,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1,y+height/1.08, z);
    glVertex3f(x+width/1.2,y+height/1.08, z);
    glVertex3f(x+width/1.2,y+ height/1.3, z);
    glVertex3f(x+width/2.1,y+height/1.3,z);
    glEnd();
}			
void level20(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7,y+height/3.1, z);
    glVertex3f(x+width/2.1, y+height/3.1, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(0,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1,y+height/1.6, z);
    glVertex3f(x+width/1.2,y+height/1.6, z);
    glVertex3f(x+width/1.2,y+ height/2.1, z);
    glVertex3f(x+width/2.1,y+height/2.1,z);
    glEnd();
}			
void level21(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y+height/3.1, z);
    glVertex3f(x+width/7, y+height/3.1, z);
    glVertex3f(x+width/7,y+height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7,y+height/3.1, z);
    glVertex3f(x+width/2.1, y+height/3.1, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(0,1,0); 
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1,y+height/3.1, z);
    glVertex3f(x+width/1.2,y+height/3.1, z);
    glVertex3f(x+width/1.2,y+ height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
}			
void level22(GLfloat x,GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/7,y+ height/5.5, z);
    glVertex3f(x,y+height/5.5,z);
    glEnd();
    glColor3f(1,1,1);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/7, y, z);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/2.1,y+ height/5.5, z);
    glVertex3f(x+width/7,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/2.1, y, z);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.5,y+height/5.5, z);
    glVertex3f(x+width/2.1,y+height/5.5,z);
    glEnd();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(x+width/1.5, y, z);
    glVertex3f(x+width/1.2, y, z);
    glVertex3f(x+width/1.2,y+height/5.5, z);
    glVertex3f(x+width/1.5,y+height/5.5,z);
    glEnd();
}			
