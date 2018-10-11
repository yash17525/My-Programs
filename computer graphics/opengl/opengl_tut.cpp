#include<iostream>
#include<GL/glut.h>

using namespace std;
float counter =0.0;
void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  glTranslatef(-0.5,0.0,0.0);
  glTranslatef(counter/100,0.0,-8.0);
  glRotatef(counter,0.0,1.0,0.0);
  counter+=0.01;
  if(counter>300)
   counter=-200;
  glBegin(GL_TRIANGLES);
     glColor3f(0.0,1.0,0.0);
     glVertex3f(-0.5,-0.5,0.0);
     glColor3f(1.0,0.0,0.0);
     glVertex3f(0.5,-0.5,0.0);
     glColor3f(0.0,0.0,1.0);
     glVertex3f(0.0,0.5,0.0);

  glEnd();

  glLoadIdentity();
  glTranslatef(0.5,0.0,-4.0);
  //glRotatef(0,0.0,1.0,0.0);
  glBegin(GL_TRIANGLES);
     glColor3f(0.0,1.0,0.0);
     glVertex3f(0.0,-0.5,0.0);
     glColor3f(1.0,0.0,0.0);
     glVertex3f(0.5,-0.5,0.0);
     glColor3f(0.0,0.0,1.0);
     glVertex3f(0.0,0.0,0.0);

  glEnd();
  glutSwapBuffers();
  glutPostRedisplay();
}

void reshape(int w, int h )
{
  glViewport(0,0,w,h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60,(float)w/(float)h,1.0,10.0);
  glMatrixMode(GL_MODELVIEW);
}

void initOpenGL()
{
  glClearColor(0.6,0.5,0.0,0.0);
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LEQUAL);
}


 int main(int argc, char *argv[])
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("OPENGL TUT");
  initOpenGL();

  glutDisplayFunc(display);
  //glutIdleFunc(display);
  glutReshapeFunc(reshape);
  glutMainLoop();

  return 0;
}
