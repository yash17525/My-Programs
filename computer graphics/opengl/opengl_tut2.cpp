#include<iostream>
#include<GL/glut.h>


using namespace std;
GLuint VBOID;
GLfloat vertices[] =  { -0.5,-0.5,0.0,
                         1.0,0.0,0.0,//color 1
                         0.5,-0.5,0.0,
                         0.0,1.0,0.0,//color 2
                         0.0,0.5,-0.5,
                         0.0,0.0,1.0,//color 3

                        0.0,0.0,0.1,
                        0.9,0.0,1.0,//color 1
                        0.5,0.0,0.5,
                        0.0,0.0,1.0,//color 2
                        0.9,0.5,0.5,
                        0.9,0.0,1.0//color 3
                      };


void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnableClientState(GL_VERTEX_ARRAY);
  glEnableClientState(GL_COLOR_ARRAY);

  glBindBuffer(GL_ARRAY_BUFFER,VBOID);
        glVertexPointer(3,GL_FLOAT,6*sizeof(GL_FLOAT),0);
        glColorPointer(3,GL_FLOAT,6*sizeof(GL_FLOAT),(GLVoid*)+3);
        glDrawArrays(GL_TRIANGLES,0,6);
  glBindBuffer(GL_ARRAY_BUFFER,0);

  glDisableClientState(GL_VERTEX_ARRAY);
  glDisableClientState(GL_COLOR_ARRAY);
  glutSwapBuffers();
  glutPostRedisplay();
}

void reshape(int w, int h )
{
  glViewport(0,0,w,h);
}

void initOpenGL()
{
  glClearColor(0.6,0.5,0.0,0.0);
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LEQUAL);

  //COPYING DATA TO GRAPHIC CARD

  glGenBuffers(1,&VBOID);//1. generating a bufffer
  glBindBuffer(GL_ARRAY_BUFFER,VBOID);//2.binfing buffer to store data of an array
                                                        //stating that data will be static
  glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);//3.copying data of array to buffer
  glBindBuffer(GL_ARRAY_BUFFER,0);//unbinding a buffer.
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
