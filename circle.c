    #include <stdio.h>
    #include <GL/glut.h>
    #include<math.h>

    void display(void){
float x,y;
glColor3f(1, 1, 0);
for(double i =0; i <= 360;){
    glBegin(GL_TRIANGLES);
    x=5*cos(i);
    y=5*sin(i);
    glVertex2d(x, y);
    i=i+.5;
    x=5*cos(i);
    y=5*sin(i);
    glVertex2d(x, y);
    glVertex2d(0, 0);
    glEnd();
    i=i+.5;
}
glEnd();

glutSwapBuffers();
}

    int main(int argc, char **argv)
    {
     printf("hello world\n");
     glutInit(&argc, argv);
     glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

     glutInitWindowPosition(100,100);
     glutInitWindowSize(300,300);
     glutCreateWindow ("square");

     glClearColor(0.0, 0.0, 0.0, 0.0);         // black background
     glMatrixMode(GL_PROJECTION);              // setup viewing projection
     glLoadIdentity();                           // start with identity matrix
     glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);   // setup a 10x10x2 viewing world

     glutDisplayFunc(display);
     glutMainLoop();

     return 0;
    }
