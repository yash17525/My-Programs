#include<GL/glut.h>
#include<iostream>
using namespace std;

void init()
{
  glClearColor(0.0,0.0,0.0,0.0);//specifying RGB  values
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0,400.0,0.0,300.0);//orthogonal projection to be used in range of x as [0,200] and range of y as [0,150].

}

void linesegment()
{
  glClear(GL_COLOR_BUFFER_BIT);//stating that color buffer bit values will be according to values specified by glClearColor().
  glColor3f(0.5,1.0,0.2);//set the object color
  int point1[] = {100,50};
  int point2[] = {150,50};
  int point3[] = {200,100};
  int point4[] = {250,200};
  int point5[] = {30,250};
  glBegin(GL_LINE_LOOP);//GL_LINES , GL_LINE_STRIP ,GL_LINE_LOOP
    glVertex2iv(point1);
    glVertex2iv(point2);
    glVertex2iv(point3);
    glVertex2iv(point4);
    glVertex2iv(point5);
  glEnd();

  glFlush();/*process all OpenGL routines as quickly as possible.glFLush() function forces all buffers to be emptied
             and the openGL functions to be processed which are stored by computer systems in different locations.
            */
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//single buffer mode and RGB color mode.
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OPEN_GL");

    init();
    glutDisplayFunc(linesegment);
    glutMainLoop();
    return 0;
}
