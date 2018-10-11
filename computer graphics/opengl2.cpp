#include<GL/glut.h>
#include<iostream>
using namespace std;

class point
{
  public:
  GLfloat x,y;
};

void init()
{
  glClearColor(0.0,0.0,0.0,0.0);//specifying RGB  values
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0.0,400.0,0.0,300.0);//orthogonal projection to be used in range of x as [0,200] and range of y as [0,150].

}

void make_point()
{
  glClear(GL_COLOR_BUFFER_BIT);//stating that color buffer bit values will be according to values specified by glClearColor().
  glColor3f(0.0,0.8,0.2);//set the object color
  point p1;
  p1.x=250;
  p1.y=250;
  int point1[] = {40,40};
  int point2[] = {60,60};
  glBegin(GL_POINTS);
    glVertex2i(100,100);//selecting x,y coordinate of a vertex.To specify x,y,z coordinates of a point we
    glVertex2i(200,200);//use glVertex3f(x,y,z).
    glVertex2i(p1.x,p1.y);
    glVertex3f(50,50,0);
    glVertex2iv(point1);
    glVertex2iv(point2);
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
    glutDisplayFunc(make_point);
    glutMainLoop();
    return 0;
}
