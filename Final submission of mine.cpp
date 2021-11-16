#include<Windows.h>
#include <GL/glut.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i, ccounter = 0, counter = 0,frame=0;
GLfloat cx=0,str=500.0,mn=500.0, ssb=0.0, sssb=0.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
float a=0.0, b=0.0, bb=0.0, cb=0.0, bf=0.0, br =0.0, bbr=0.0;

void init(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800, 0.0, 600);     
    }

void circle(GLdouble rad){
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON); {
        for( i = 0; i <=50; i++, theta += delTheta{
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }      }
    glEnd();
}

void drawstring(float x, float y, float z, char *string)    {
    char *ct;
    glRasterPos3f(x,y,z);

    for(ct=string; *ct!='\0'; ct++)    {
        glColor3f(0.0, 0.0, 0.0);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *ct);    }
    glBegin(GL_LINES);
        glVertex2i(500, 500-sssb);
        glVertex2i(500, 900-sssb);

    if(sb>950){
            sssb=sssb;
            }
        else{
          sssb+=0.15;  }

       glutPostRedisplay();
       glEnd();   }
void spider(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.30f, 0.20f);
        if(a>100)        {
            a=0;    }
        else      {
          a+=0.1;
        }
     glutPostRedisplay();
       glEnd();

       //spider
    glPushMatrix();
        glColor3f(0.329412, 0.329412, 0.329412);
        glTranslatef(500,500-ssb,0);
        circle(8);
    glPopMatrix();


    glPushMatrix();
        glColor3f(0.329412, 0.329412, 0.329412);
        glTranslatef(500,520-ssb,0);
        circle(18);
    glPopMatrix();



    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(700,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(550,480,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(590,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(650,500,0);
    circle(28);
    glPopMatrix();

        glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(40,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(100,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(150,480,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(200,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(250,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(290,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(330,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(385,485,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(440,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(750,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(790,500,0);
    circle(28);
    glPopMatrix();
    glVertex2i(50, 150);
    glVertex2i(80, 150);

    glVertex2i(100, 150);
    glVertex2i(130, 150);

    glVertex2i(150, 150);
    glVertex2i(180, 150);

    glVertex2i(200, 150);
    glVertex2i(230, 150);

    glVertex2i(250, 150);
    glVertex2i(280, 150);

    glVertex2i(300, 150);
    glVertex2i(330, 150);

    glVertex2i(350, 150);
    glVertex2i(380, 150);

    glVertex2i(400, 150);
    glVertex2i(430, 150);

    glVertex2i(450, 150);
    glVertex2i(480, 150);

    glVertex2i(500, 150);
    glVertex2i(530, 150);

    glVertex2i(550, 150);
    glVertex2i(580, 150);

    glVertex2i(600, 150);
    glVertex2i(630, 150);

    glVertex2i(650, 150);
    glVertex2i(680, 150);

    glVertex2i(700, 150);
    glVertex2i(730, 150);

    glVertex2i(750, 150);
    glVertex2i(780, 150);
//row end//

//row start
    glColor3f(0.1, 0.7, 0.5);

    glVertex2i(780, 100);
//row end//
    glEnd();

}

void boat(){

     // sky
    glColor3f(0.5, 0.9, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
        glVertex2i(0, 600);
        glVertex2i(900, 600);
        glVertex2i(900, 500);
        glVertex2i(0, 500);
    glEnd();

    //cloud1
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(500,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(700,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(550,480,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(590,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(385,485,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(440,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(750,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(790,500,0);
    circle(28);
    glPopMatrix();

//boat;
glColor3f(0.0f, 0.30f, 0.20f);
    glBegin(GL_QUADS);
        glVertex3f(0+bb, 300, 0);
        glVertex3f(350+bb, 300, 0);
        glVertex3f(200+bb, 0, 0);
        glVertex3f(0+bb, 50, 0);
    glEnd();
        //sail
        glColor3f(0.0f, 0.30f, 0.20f);
        glLineWidth(10);
        glBegin(GL_LINES);
            glVertex3f(150+bb, 300, 0);
            glVertex3f(150+bb, 550, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
            glVertex3f(20+bb, 520, 0);
            glVertex3f(250+bb, 520, 0);

          bb+=0.1;
        }

       glutPostRedisplay();
       glEnd();

// sea
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
    glVertex2i(0, 200);
    glVertex2i(1300, 200);
    glVertex2i(1300, 0);
    glVertex2i(0, 0);

    glEnd();

    //sea wave
//row start

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 150);
    glVertex2i(30, 150);

    glVertex2i(50, 150);
    glVertex2i(80, 150);

    glVertex2i(100, 150);
    glVertex2i(130, 150);
    glVertex2i(150, 150);
    glVertex2i(180, 150);

    glVertex2i(200, 150);
    glVertex2i(230, 150);

    glVertex2i(250, 150);
    glVertex2i(280, 150);

    glVertex2i(300, 150);
    glVertex2i(330, 150);

    glVertex2i(350, 150);
    glVertex2i(380, 150);

    glVertex2i(330, 100);

    glVertex2i(350, 100);
    glVertex2i(380, 100);

    glVertex2i(400, 100);
    glVertex2i(430, 100);

    glVertex2i(450, 100);
    glVertex2i(480, 100);

    glVertex2i(500, 100);
    glVertex2i(530, 100);

    glVertex2i(550, 100);
    glVertex2i(580, 100);

    glVertex2i(600, 100);
    glVertex2i(630, 100);

    glVertex2i(650, 100);
    glVertex2i(680, 100);

    glVertex2i(700, 100);
    glVertex2i(730, 100);

    glVertex2i(750, 100);
    glVertex2i(780, 100);
//row end//
    glEnd();}

void boat2(){
     // sky
    glColor3f(0.5, 0.9, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
        glVertex2i(0, 600);
        glVertex2i(900, 600);
        glVertex2i(900, 500);
        glVertex2i(0, 500);
    glEnd();

    //cloud1
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(200,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(250,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(290,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(330,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(385,485,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(440,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(750,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(790,500,0);
        glVertex3f(255+cb, 300, 0);
            glVertex3f(255+cb, 345, 0);

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+cb, 365, 0);
            glVertex3f(350+cb, 380, 0);
            glVertex3f(352+cb, 370, 0);
            glVertex3f(290+cb, 345, 0);
        glEnd();

        glColor3f(0.90f, 0.90f, 0.0f);
        glBegin(GL_QUADS);
            glVertex3f(266+cb, 394, 0);
            glVertex3f(250+cb, 409, 0);
            glVertex3f(279+cb, 409, 0);
            glVertex3f(269+cb, 394, 0);

        if(cb>850)
        {
            cb=cb;
        }
        else
        {
          cb+=0.1;
        }

       glutPostRedisplay();
       glEnd();

// sea
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
    glVertex2i(0, 200);
    glVertex2i(1300, 200);
    glVertex2i(1300, 0);
    glVertex2i(0, 0);

    glEnd();

    //sea wave
//row start

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 150);
//row start
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 100);
    glVertex2i(30, 100);

    glVertex2i(50, 100);
    glVertex2i(80, 100);

    glVertex2i(100, 100);
    glVertex2i(130, 100);

    glVertex2i(150, 100);
    glVertex2i(180, 100);

    glVertex2i(200, 100);
    glVertex2i(230, 100);

    glVertex2i(250, 100);
    glVertex2i(280, 100);

    glVertex2i(300, 100);
    glVertex2i(330, 100);

    glVertex2i(350, 100);
    glVertex2i(380, 100);

    glVertex2i(400, 100);
    glVertex2i(430, 100);

    glVertex2i(450, 100);
    glVertex2i(480, 100);

    glVertex2i(500, 100);
    glVertex2i(530, 100);

    glVertex2i(550, 100);
    glVertex2i(580, 100);

    glVertex2i(600, 100);
    glVertex2i(630, 100);

    glVertex2i(650, 100);
    glVertex2i(680, 100);

    glVertex2i(700, 100);
    glVertex2i(730, 100);
       glColor3f(0.90f, 0.90f, 0.0f);
        glBegin(GL_QUADS);
            glVertex3f(266+bf, 394, 0);
            glVertex3f(250+bf, 409, 0);
            glVertex3f(279+bf, 409, 0);
            glVertex3f(269+bf, 394, 0);

        if(bf>850)
        {
            bf=bf;
        }
        else
        {
          bf+=0.1;
        }

       glutPostRedisplay();
       glEnd();

// sea
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
    glVertex2i(0, 200);
    glVertex2i(1300, 200);
    glVertex2i(1300, 0);
    glVertex2i(0, 0);

    glEnd();

    //sea wave
//row start

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 150);
    glVertex2i(30, 150);

    glVertex2i(50, 150);
    glVertex2i(80, 150);

    glVertex2i(100, 150);
    glVertex2i(130, 150);

    glVertex2i(150, 150);
    glVertex2i(180, 150);

    glVertex2i(130, 100);

    glVertex2i(150, 100);
    glVertex2i(180, 100);

    glVertex2i(200, 100);
    glVertex2i(230, 100);

    glVertex2i(250, 100);
    glVertex2i(280, 100);

    glVertex2i(300, 100);
    glVertex2i(330, 100);

    glVertex2i(350, 100);
    glVertex2i(380, 100);

    glVertex2i(400, 100);
    glVertex2i(430, 100);

    glVertex2i(450, 100);
    glVertex2i(480, 100);

    glVertex2i(500, 100);
    glVertex2i(530, 100);

    glVertex2i(550, 100);
    glVertex2i(580, 100);

    glVertex2i(600, 100);
    glVertex2i(630, 100);

    glVertex2i(650, 100);
    glVertex2i(680, 100);

    glVertex2i(700, 100);
    glVertex2i(730, 100);

    glVertex2i(750, 100);
    glVertex2i(780, 100);
//row end//
    glEnd();


}

void home()
{
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(590,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(650,500,0);
    circle(28);
    glPopMatrix();

        glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(40,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(100,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(150,480,0);
    circle(25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(200,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(250,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(290,500,0);
    circle(40);
    glPopMatrix();
if(counter>13000){
     glClear(GL_COLOR_BUFFER_BIT);

    //sky
    glColor3f(0.5, 0.9, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
        glVertex2i(0, 600);
        glVertex2i(900, 600);
        glVertex2i(900, 500);
        glVertex2i(0, 500);
    glEnd();
    //cloud1
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(500,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(700,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(550,480,0);
    circle(25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(590,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(650,500,0);
    circle(28);
    glPopMatrix();

        glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(40,500,0);
    circle(40);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(750,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(790,500,0);
    circle(28);
    glPopMatrix();

         //boat
         glColor3f(0.0f, 0.30f, 0.20f);
    glBegin(GL_QUADS);
        glVertex3f(800-b, 300, 0);
        glVertex3f(420-b, 300, 0);
        glVertex3f(520-b, 0, 0);
        glVertex3f(800-b, 50, 0);
    glEnd();
        //sail
        glColor3f(0.0f, 0.30f, 0.20f);
        glLineWidth(10);
        glBegin(GL_LINES);
            glVertex3f(610-b, 300, 0);
            glVertex3f(410-b, 550, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
            glVertex3f(450-b, 500, 0);
            glVertex3f(750-b, 500, 0);
            glVertex3f(680-b, 430, 0);
            glVertex3f(650-b, 320, 0);
    glEnd();

        //king
        glPushMatrix();
        glColor3f(0.4, 0.4, 0.4);
        glTranslatef(675-b,378,0);
        circle(15);
        glPopMatrix();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
glVertex2i(150, 150);
    glVertex2i(180, 150);

    glVertex2i(200, 150);
    glVertex2i(230, 150);

    glVertex2i(250, 150);
    glVertex2i(280, 150);

    glVertex2i(300, 150);
    glVertex2i(330, 150);

    glVertex2i(350, 150);
    glVertex2i(380, 150);

    glVertex2i(400, 150);
    glVertex2i(430, 150);

    glVertex2i(450, 150);
    glVertex2i(480, 150);

    glVertex2i(500, 150);
    glVertex2i(530, 150);

    glVertex2i(550, 150);
    glVertex2i(580, 150);

    glVertex2i(600, 150);
    glVertex2i(630, 150);

    glVertex2i(650, 150);
    glVertex2i(680, 150);

    glVertex2i(700, 150);
    glVertex2i(730, 150);

    glVertex2i(750, 150);
    glVertex2i(780, 150);
//row end//

//row start
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 100);
    glVertex2i(30, 100);

    glVertex2i(50, 100);
if(counter>21000){
    glColor3f(0.90f, 0.50f, 0.30f);
     drawstring(250, 400, 0.0, "He built a larger fleet and attacked again.");
}

if(counter>23500){
    glClear(GL_COLOR_BUFFER_BIT);
    boat2();
//    boatfollowing();
}

if(counter>32500){
     glColor3f(0.90f, 0.50f, 0.30f);
     drawstring(300, 400, 0.0, "He miserably failed again.");
}

if(counter>33800){
    glClear(GL_COLOR_BUFFER_BIT);

    //sky
    glColor3f(0.5, 0.9, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
        glVertex2i(0, 600);
        glVertex2i(900, 600);
        glVertex2i(900, 500);
        glVertex2i(0, 500);
    glEnd();
    //cloud1
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(500,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(700,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(550,480,0);
    circle(25);
    glPopMatrix();
glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(330,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(385,485,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(440,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(750,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(790,500,0);
    circle(28);
    glPopMatrix();

         //boat
         glColor3f(0.0f, 0.30f, 0.20f);
    glBegin(GL_QUADS);
        glVertex3f(1000-br, 300, 0);
        glVertex3f(420-br, 300, 0);
        glVertex3f(520-br, 0, 0);
        glVertex3f(1000-br, 50, 0);
    glEnd();
        //sail
        glColor3f(0.0f, 0.30f, 0.20f);
        glLineWidth(10);
        glBegin(GL_LINES);
            glVertex3f(610-br, 300, 0);
            glVertex3f(410-br, 550, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
       glEnd();

    //sea wave
//row start

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 150);
    glVertex2i(30, 150);

    glVertex2i(50, 150);
    glVertex2i(80, 150);

    glVertex2i(100, 150);
    glVertex2i(130, 150);

    glVertex2i(150, 150);
    glVertex2i(180, 150);

    glVertex2i(200, 150);
    glVertex2i(230, 150);

    glVertex2i(250, 150);
    glVertex2i(280, 150);

    glVertex2i(300, 150);
    glVertex2i(330, 150);

    glVertex2i(350, 150);
    glVertex2i(380, 150);

    glVertex2i(400, 150);
    glVertex2i(430, 150);

    glVertex2i(450, 150);
    glVertex2i(480, 150);

    glVertex2i(500, 150);
    glVertex2i(530, 150);

    glVertex2i(550, 150);
    glVertex2i(580, 150);

    glVertex2i(600, 150);
    glVertex2i(630, 150);

    glVertex2i(650, 150);

    glVertex2i(600, 100);
    glVertex2i(630, 100);

    glVertex2i(650, 100);
    glVertex2i(680, 100);

    glVertex2i(700, 100);
    glVertex2i(730, 100);

    glVertex2i(750, 100);
    glVertex2i(780, 100);
//row end//
    glEnd();

}

if(counter>43800){
     glColor3f(0.90f, 0.50f, 0.30f);
     drawstring(300, 400, 0.0, "He didn't loose heart and keep trying for 7times.");
}

if(counter>46300){
     glColor3f(0.90f, 0.50f, 0.30f);
     drawstring(300, 350, 0.0, "After his 7th defeat he decided to give up.");
}

if(counter>47500){
    glClear(GL_COLOR_BUFFER_BIT);
    spider();

}

if(counter>49400){
           glColor3f(0.90f, 0.50f, 0.30f);
 drawstring(50, 400, 0.0, "Then one day while resting in cave he saw a spider");
 glColor3f(0.90f, 0.50f, 0.30f);
 drawstring(50, 350, 0.0, " failing 7 times to take a fly just like him.");
}

if(counter>51400){
       glColor3f(0.90f, 0.50f, 0.30f);
 drawstring(50, 200, 0.0, "The spider didn't give up and immediately succeeded.");
}
void spidersuccess(){

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.30f, 0.20f);
        if(a>100){
            a=0;       }
        else        {
          a+=0.1;       }
       glutPostRedisplay();
       glEnd();
       //spider

    glPushMatrix();
        glColor3f(0.329412, 0.329412, 0.329412);
        glTranslatef(500,500-sssb,0);
        circle(8);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.329412, 0.329412, 0.329412);
        glTranslatef(500,520-sssb,0);
        circle(18);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(505,496-sssb,0);
        circle(2);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(500,496-sssb,0);
        circle(2);
    glPopMatrix();

        glColor3f(0.329412, 0.329412, 0.329412);
    glLineWidth(1);
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(505,496-ssb,0);
        circle(2);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(500,496-ssb,0);
        circle(2);
    glPopMatrix();

        glColor3f(0.329412, 0.329412, 0.329412);
    glLineWidth(1);
    glBegin(GL_LINES);
        glVertex2i(500, 500-ssb);
        glVertex2i(500, 900-ssb);

    if(sb>1950){
            ssb=ssb;
            }
        else{
          ssb+=0.15;
        }

       glutPostRedisplay();
       glEnd();

}

void boat3(){
 // sky
    glColor3f(0.5, 0.9, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
        glVertex2i(0, 600);
        glVertex2i(900, 600);
        glVertex2i(900, 500);
        glVertex2i(0, 500);
    glEnd();

    //cloud1
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(500,500,0);
    circle(40);
    glPopMatrix();

//boat;
glColor3f(0.0f, 0.30f, 0.20f);
    glBegin(GL_QUADS);
        glVertex3f(0+bbr, 300, 0);
        glVertex3f(350+bbr, 300, 0);
        glVertex3f(200+bbr, 0, 0);
        glVertex3f(0+bbr, 50, 0);
    glEnd();
        //sail
        glColor3f(0.0f, 0.30f, 0.20f);
        glLineWidth(10);
        glBegin(GL_LINES);
            glVertex3f(150+bbr, 300, 0);
            glVertex3f(150+bbr, 550, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
            glVertex3f(20+bbr, 520, 0);
            glVertex3f(250+bbr, 520, 0);
            glVertex3f(280+bbr, 430, 0);
            glVertex3f(250+bbr, 320, 0);
            glVertex3f(10+bbr, 320, 0);
            glVertex3f(50+bbr, 400, 0);
        glEnd();
    //king
        glPushMatrix();
        glColor3f(0.4, 0.4, 0.4);
        glTranslatef(275+bbr,378,0);
        circle(15);
        glPopMatrix();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+bbr, 365, 0);
            glVertex3f(290+bbr, 345, 0);
            glVertex3f(255+bbr, 345, 0);
            glVertex3f(268+bbr, 365, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(290+bbr, 345, 0);
            glVertex3f(300+bbr, 300, 0);
            glVertex3f(255+bbr, 300, 0);
            glVertex3f(255+bbr, 345, 0);


        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+bbr, 365, 0);
            glVertex3f(350+bbr, 380, 0);
            glVertex3f(352+bbr, 370, 0);
            glVertex3f(290+bbr, 345, 0);
        glEnd();

        glColor3f(0.90f, 0.90f, 0.0f);
        glBegin(GL_QUADS);
            glVertex3f(266+bbr, 394, 0);
            glVertex3f(250+bbr, 409, 0);
            glVertex3f(279+bbr, 409, 0);
            glVertex3f(269+bbr, 394, 0);

        if(bbr>850)
        {
            bbr=bbr;
        }
        else
        {
          bbr+=0.2;
        }

       glutPostRedisplay();
       glEnd();

// sea
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
    glVertex2i(0, 200);
    glVertex2i(1300, 200);
    glVertex2i(1300, 0);
    glVertex2i(0, 0);

    glEnd();

    //sea wave
//row start

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 150);
    glVertex2i(30, 150);

    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 100);
    glVertex2i(30, 100);

    glVertex2i(50, 100);
    glVertex2i(80, 100);

    glVertex2i(100, 100);
    glVertex2i(130, 100);

    glVertex2i(150, 100);
    glVertex2i(180, 100);

    glVertex2i(200, 100);
    glVertex2i(230, 100);

    glVertex2i(250, 100);
    glVertex2i(280, 100);

    glVertex2i(300, 100);
    glVertex2i(330, 100);

    glVertex2i(350, 100);
    glVertex2i(380, 100);

    glVertex2i(400, 100);
    glVertex2i(430, 100);

    glVertex2i(450, 100);
    glVertex2i(480, 100);

    glVertex2i(500, 100);
    glVertex2i(530, 100);

    glVertex2i(550, 100);
    glVertex2i(580, 100);

    glVertex2i(600, 100);
    glVertex2i(630, 100);

    glVertex2i(650, 100);
    glVertex2i(680, 100);

    glVertex2i(700, 100);
    glVertex2i(730, 100);

    glVertex2i(750, 100);
    glTranslatef(650,500,0);
    circle(28);
    glPopMatrix();

        glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(40,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(100,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(150,480,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(200,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(250,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(290,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(330,500,0);
    circle(35);
    glPopMatrix();

glVertex3f(280+bb, 430, 0);
            glVertex3f(250+bb, 320, 0);
            glVertex3f(10+bb, 320, 0);
            glVertex3f(50+bb, 400, 0);
        glEnd();
    //king
        glPushMatrix();
        glColor3f(0.4, 0.4, 0.4);
        glTranslatef(275+bb,378,0);
        circle(15);
        glPopMatrix();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+bb, 365, 0);
            glVertex3f(290+bb, 345, 0);
            glVertex3f(255+bb, 345, 0);
            glVertex3f(268+bb, 365, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(290+bb, 345, 0);
            glVertex3f(300+bb, 300, 0);
            glVertex3f(255+bb, 300, 0);
            glVertex3f(255+bb, 345, 0);

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+bb, 365, 0);
            glVertex3f(350+bb, 380, 0);
            glVertex3f(352+bb, 370, 0);
            glVertex3f(290+bb, 345, 0);
        glEnd();

        glColor3f(0.90f, 0.90f, 0.0f);
        glBegin(GL_QUADS);
            glVertex3f(266+bb, 394, 0);
            glVertex3f(250+bb, 409, 0);
            glVertex3f(279+bb, 409, 0);
            glVertex3f(269+bb, 394, 0);

        if(bb>850)
        {
            bb=bb;
        }
        else
        {
glVertex2i(400, 150);
    glVertex2i(430, 150);

    glVertex2i(450, 150);
    glVertex2i(480, 150);

    glVertex2i(500, 150);
    glVertex2i(530, 150);

    glVertex2i(550, 150);
    glVertex2i(580, 150);

    glVertex2i(600, 150);
    glVertex2i(630, 150);

    glVertex2i(650, 150);
    glVertex2i(680, 150);

    glVertex2i(700, 150);
    glVertex2i(730, 150);

    glVertex2i(750, 150);
    glVertex2i(780, 150);
//row end//

//row start
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 100);
    glVertex2i(30, 100);

    glVertex2i(50, 100);
    glVertex2i(80, 100);

    glVertex2i(100, 100);
    glVertex2i(130, 100);

    glVertex2i(150, 100);
    glVertex2i(180, 100);

    glVertex2i(200, 100);
    glVertex2i(230, 100);

    glVertex2i(250, 100);
    glVertex2i(280, 100);

    glVertex2i(300, 100);
glTranslatef(500,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(700,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(550,480,0);
    circle(25);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(590,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(650,500,0);
    circle(28);
    glPopMatrix();

        glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(40,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(100,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(150,480,0);
    circle(25);
    glPopMatrix();

circle(28);
    glPopMatrix();

//boat;
glColor3f(0.0f, 0.30f, 0.20f);
    glBegin(GL_QUADS);
        glVertex3f(0+cb, 300, 0);
        glVertex3f(550+cb, 300, 0);
        glVertex3f(400+cb, 0, 0);
        glVertex3f(0+cb, 50, 0);
    glEnd();
        //sail
        glColor3f(0.0f, 0.30f, 0.20f);
        glLineWidth(10);
        glBegin(GL_LINES);
            glVertex3f(150+cb, 300, 0);
            glVertex3f(150+cb, 550, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
            glVertex3f(20+cb, 520, 0);
            glVertex3f(250+cb, 520, 0);
            glVertex3f(280+cb, 430, 0);
            glVertex3f(250+cb, 320, 0);
            glVertex3f(10+cb, 320, 0);
            glVertex3f(50+cb, 400, 0);
        glEnd();
    //king
        glPushMatrix();
        glColor3f(0.4, 0.4, 0.4);
        glTranslatef(275+cb,378,0);
        circle(15);
        glPopMatrix();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+cb, 365, 0);
            glVertex3f(290+cb, 345, 0);
            glVertex3f(255+cb, 345, 0);
            glVertex3f(268+cb, 365, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(290+cb, 345, 0);
            glVertex3f(300+cb, 300, 0);
    glVertex2i(30, 150);

    glVertex2i(50, 150);
    glVertex2i(80, 150);

    glVertex2i(100, 150);
    glVertex2i(130, 150);

    glVertex2i(150, 150);
    glVertex2i(180, 150);

    glVertex2i(200, 150);
    glVertex2i(230, 150);

    glVertex2i(250, 150);
    glVertex2i(280, 150);

    glVertex2i(300, 150);
    glVertex2i(330, 150);

    glVertex2i(350, 150);
    glVertex2i(380, 150);

    glVertex2i(400, 150);
    glVertex2i(430, 150);

    glVertex2i(450, 150);
    glVertex2i(480, 150);

    glVertex2i(500, 150);
    glVertex2i(530, 150);

    glVertex2i(550, 150);
    glVertex2i(580, 150);

    glVertex2i(600, 150);
    glVertex2i(630, 150);

    glVertex2i(650, 150);
    glVertex2i(680, 150);

    glVertex2i(700, 150);
    glVertex2i(730, 150);

    glVertex2i(750, 150);
    glVertex2i(780, 150);
//row end//

  glVertex2i(750, 100);
    glVertex2i(780, 100);
//row end//
    glEnd();

}
void boatfollowing(){
glColor3f(0.0f, 0.30f, 0.20f);
    glBegin(GL_QUADS);
        glVertex3f(-20+bf, 300, 0);
        glVertex3f(-380+bf, 300, 0);
        glVertex3f(-380+bf, 0, 0);
        glVertex3f(-150+bf, 50, 0);
    glEnd();
        //sail
        glColor3f(0.0f, 0.30f, 0.20f);
        glLineWidth(10);
        glBegin(GL_LINES);
            glVertex3f(-170+bf, 300, 0);
            glVertex3f(-170+bf, 550, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glLineWidth(1);
        glBegin(GL_LINE_LOOP);
            glVertex3f(-40+bf, 520, 0);
            glVertex3f(-20+bf, 520, 0);
            glVertex3f(-200+bf, 430, 0);
            glVertex3f(-250+bf, 320, 0);
            glVertex3f(-10+bf, 320, 0);
            glVertex3f(-50+bf, 400, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(290+bf, 345, 0);
            glVertex3f(300+bf, 300, 0);
            glVertex3f(255+bf, 300, 0);
            glVertex3f(255+bf, 345, 0);

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(280+bf, 365, 0);
            glVertex3f(350+bf, 380, 0);
            glVertex3f(352+bf, 370, 0);
            glVertex3f(290+bf, 345, 0);
        glEnd();

  glVertex2i(200, 150);
    glVertex2i(230, 150);

    glVertex2i(250, 150);
    glVertex2i(280, 150);

    glVertex2i(300, 150);
    glVertex2i(330, 150);

    glVertex2i(350, 150);
    glVertex2i(380, 150);

    glVertex2i(400, 150);
    glVertex2i(430, 150);

    glVertex2i(450, 150);
    glVertex2i(480, 150);

    glVertex2i(500, 150);
    glVertex2i(530, 150);

    glVertex2i(550, 150);
    glVertex2i(580, 150);

    glVertex2i(600, 150);
    glVertex2i(630, 150);

    glVertex2i(650, 150);
    glVertex2i(680, 150);

    glVertex2i(700, 150);
    glVertex2i(730, 150);

    glVertex2i(750, 150);
    glVertex2i(780, 150);
//row end//

//row start
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 100);
    glVertex2i(30, 100);

    glVertex2i(50, 100);
    glVertex2i(80, 100);

    glVertex2i(100, 100);
   glClear(GL_COLOR_BUFFER_BIT);
    //male-coat
    glColor3f(1.0f, 0.30f, 0.20f);
    glBegin(GL_LINES);
        glVertex3f(400+a, 500, 0);
        glVertex3f(450+a, 500, 0);
        if(a>1000000)
        {
            a=0;
        }
        else
        {
          a+=0.1;
        }

       glutPostRedisplay();
       glEnd();

 // sky
    glColor3f(0.5, 0.9, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
        glVertex2i(0, 600);
        glVertex2i(900, 600);
        glVertex2i(900, 500);
        glVertex2i(0, 500);
    glEnd();
    //cloud1
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(500,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(700,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(550,480,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(330,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(385,485,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(440,500,0);
    circle(28);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(750,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(790,500,0);
    circle(28);
    glPopMatrix();

//spider();
boat();
//boatfollowing();
if(counter>9000){
    glColor3f(0.90f, 0.50f, 0.30f);
     drawstring(250, 400, 0.0, "Robert Bruce attacked his enemy to conquer his homeland back.");

}

if(counter>11000){
   glColor3f(0.90f, 0.50f, 0.30f);
     drawstring(350, 350, 0.0, "He failed in the first attempt");
}
//return-loose
    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(100,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(150,480,0);
    circle(25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(200,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(250,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(290,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(330,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(385,485,0);
    circle(25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(440,500,0);
    circle(28);
glVertex3f(680-b, 365, 0);
            glVertex3f(690-b, 345, 0);
            glVertex3f(660-b, 345, 0);
            glVertex3f(668-b, 365, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(690-b, 345, 0);
            glVertex3f(690-b, 300, 0);
            glVertex3f(660-b, 300, 0);
            glVertex3f(660-b, 345, 0);

        if(b>1950){
            b=b;
        }
        else{
          b+=0.1;
        }

       glutPostRedisplay();
       glEnd();

// sea
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
    glVertex2i(0, 200);
    glVertex2i(1300, 200);
    glVertex2i(1300, 0);
    glVertex2i(0, 0);

    glEnd();

    //sea wave
//row start

    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 150);
    glVertex2i(30, 150);

    glVertex2i(50, 150);
    glVertex2i(80, 150);

    glVertex2i(100, 150);
    glVertex2i(130, 150);
    glVertex2i(80, 100);

    glVertex2i(100, 100);
    glVertex2i(130, 100);

    glVertex2i(150, 100);
    glVertex2i(180, 100);

    glVertex2i(200, 100);
    glVertex2i(230, 100);

    glVertex2i(250, 100);
    glVertex2i(280, 100);

    glVertex2i(300, 100);
    glVertex2i(330, 100);

    glVertex2i(350, 100);
    glVertex2i(380, 100);

    glVertex2i(400, 100);
    glVertex2i(430, 100);

    glVertex2i(450, 100);
    glVertex2i(480, 100);

    glVertex2i(500, 100);
    glVertex2i(530, 100);

    glVertex2i(550, 100);
    glVertex2i(580, 100);

    glVertex2i(600, 100);
    glVertex2i(630, 100);

    glVertex2i(650, 100);
    glVertex2i(680, 100);

    glVertex2i(700, 100);
    glVertex2i(730, 100);

    glVertex2i(750, 100);
    glVertex2i(780, 100);
//row end//
    glEnd();

}

glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(590,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(650,500,0);
    circle(28);
    glPopMatrix();

        glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(40,500,0);
    circle(40);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(100,500,0);
    circle(35);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(150,480,0);
    circle(25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(200,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(250,500,0);
    circle(28);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.9, 0.9, 0.9);
    glTranslatef(290,500,0);
    circle(40);
    glPopMatrix();

glLineWidth(1);
        glBegin(GL_LINE_LOOP);
            glVertex3f(450-br, 500, 0);
            glVertex3f(750-br, 500, 0);
            glVertex3f(680-br, 430, 0);
            glVertex3f(650-br, 320, 0);
    glEnd();

        //king
        glPushMatrix();
        glColor3f(0.4, 0.4, 0.4);
        glTranslatef(675-br,378,0);
        circle(15);
        glPopMatrix();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(680-br, 365, 0);
            glVertex3f(690-br, 345, 0);
            glVertex3f(660-br, 345, 0);
            glVertex3f(668-br, 365, 0);
        glEnd();

        glColor3f(0.30f, 0.30f, 0.20f);
        glBegin(GL_QUADS);
            glVertex3f(690-br, 345, 0);
            glVertex3f(690-br, 300, 0);
            glVertex3f(660-br, 300, 0);
            glVertex3f(660-br, 345, 0);

        if(br>1950){
            br=br;
        }
        else{
          br+=0.13;
        }

       glutPostRedisplay();
       glEnd();

// sea
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(500);
    glBegin(GL_QUADS);
    glVertex2i(0, 200);
    glVertex2i(1300, 200);
    glVertex2i(1300, 0);
    glVertex2i(0, 0);
    glVertex2i(680, 150);

    glVertex2i(700, 150);
    glVertex2i(730, 150);

    glVertex2i(750, 150);
    glVertex2i(780, 150);
//row end//

//row start
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 100);
    glVertex2i(30, 100);

    glVertex2i(50, 100);
    glVertex2i(80, 100);

    glVertex2i(100, 100);
    glVertex2i(130, 100);

    glVertex2i(150, 100);
    glVertex2i(180, 100);

    glVertex2i(200, 100);
    glVertex2i(230, 100);

    glVertex2i(250, 100);
    glVertex2i(280, 100);

    glVertex2i(300, 100);
    glVertex2i(330, 100);

    glVertex2i(350, 100);
    glVertex2i(380, 100);

    glVertex2i(400, 100);
    glVertex2i(430, 100);

    glVertex2i(450, 100);
    glVertex2i(480, 100);

    glVertex2i(500, 100);
    glVertex2i(530, 100);

    glVertex2i(550, 100);
    glVertex2i(580, 100);

if(counter>53400){
    glClear(GL_COLOR_BUFFER_BIT);
    spidersuccess();
}

if(counter>55400){
       glColor3f(0.90f, 0.50f, 0.30f);
 drawstring(30, 300, 0.0, "He felt inspired and decided to attack again.");
}
if(counter>57400){
    glClear(GL_COLOR_BUFFER_BIT);
    boat3();
}


if(counter>60400){
       glColor3f(0.90f, 0.50f, 0.30f);
 drawstring(30, 300, 0.0, "Finally this time he conquered his kingdom back.");
}


counter++;
glFlush();

}
int main(int argc, char ** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1300, 900);
    glutCreateWindow("Robert Bruce");
    init();
    glutDisplayFunc(home);

    glutMainLoop();
}}
}
