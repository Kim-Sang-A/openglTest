#include <GL/glut.h>

void renderCB() {
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void initWindow() {
    glClearColor(0.5f, 0.8f,0.0f, 0.0f);

}

int main() {
   
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(5,5);
    glutInitWindowSize(500, 500);
    glutCreateWindow("¾È³ç");

    initWindow();
    glutDisplayFunc(renderCB);
    glutMainLoop();

    return 0;
}
