/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

////////////////Birds
     glBegin(GL_TRIANGLE_FAN);
            {

            glColor3f(0.28f,0.25f,0.22f);
            glVertex2f(0.046f, 0.01f);
            glVertex2f(0.040f, -0.002f);
            glVertex2f(0.077f, 0.125f);
            glVertex2f(0.157f, 0.204f);
            glVertex2f(0.280f, 0.306f);
            glVertex2f(0.222f, 0.196f);
            glVertex2f(0.182f, 0.152f);
            glVertex2f(0.142f, 0.097f);
            glVertex2f(0.109f, 0.018f);
            glVertex2f(0.082f, -0.042f);
            glVertex2f(0.095f, -0.073f);
            glVertex2f(0.120f, -0.097f);
            glVertex2f(0.144f, -0.101f);
            glVertex2f(0.135f, -0.117f);
            glVertex2f(0.102f, -0.113f);
            glVertex2f(0.082f, -0.109f);
            glVertex2f(0.033f, -0.121f);
            glVertex2f(0.009f, -0.121f);
            glVertex2f(-0.011f, -0.101f);
            glVertex2f(-0.029f, -0.081f);
            glVertex2f(-0.045f, -0.073f);
            glVertex2f(-0.071f, -0.069f);
            glVertex2f(-0.049f, -0.049f);
            glVertex2f(-0.047f, -0.038f);
            glVertex2f(-0.018f, -0.03f);
            glVertex2f(-0.040f, 0.038f);
            glVertex2f(-0.063f, 0.073f);
            glVertex2f(-0.096f, 0.136f);
            glVertex2f(-0.163f, 0.219f);
            glVertex2f(-0.089f, 0.176f);
            glVertex2f(-0.045f, 0.156f);
            glVertex2f(0.000f, 0.101f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.28f,0.25f,0.22f);
            glVertex2f(0.046f, 0.01f);
            glVertex2f(0.040f, -0.002f);
            glVertex2f(0.077f, 0.125f);
            glVertex2f(0.157f, 0.204f);
            glVertex2f(0.280f, 0.306f);
            glVertex2f(0.222f, 0.196f);
            glVertex2f(0.182f, 0.152f);
            glVertex2f(0.142f, 0.097f);
            glVertex2f(0.109f, 0.018f);
            glVertex2f(0.082f, -0.042f);
            glVertex2f(0.095f, -0.073f);
            glVertex2f(0.120f, -0.097f);
            glVertex2f(0.144f, -0.101f);
            glVertex2f(0.135f, -0.117f);
            glVertex2f(0.102f, -0.113f);
            glVertex2f(0.082f, -0.109f);
            glVertex2f(0.033f, -0.121f);
            glVertex2f(0.009f, -0.121f);
            glVertex2f(-0.011f, -0.101f);
            glVertex2f(-0.029f, -0.081f);
            glVertex2f(-0.045f, -0.073f);
            glVertex2f(-0.071f, -0.069f);
            glVertex2f(-0.049f, -0.049f);
            glVertex2f(-0.047f, -0.038f);
            glVertex2f(-0.018f, -0.03f);
            glVertex2f(-0.040f, 0.038f);
            glVertex2f(-0.063f, 0.073f);
            glVertex2f(-0.096f, 0.136f);
            glVertex2f(-0.163f, 0.219f);
            glVertex2f(-0.089f, 0.176f);
            glVertex2f(-0.045f, 0.156f);
            glVertex2f(0.000f, 0.101f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.28f,0.25f,0.22f);
            glVertex2f(-0.011f, 0.247f);
            glVertex2f(0.013f, 0.314f);
            glVertex2f(0.024f, 0.334f);
            glVertex2f(0.053f, 0.37f);
            glVertex2f(0.111f, 0.449f);
            glVertex2f(0.086f, 0.358f);
            glVertex2f(0.053f, 0.31f);
            glVertex2f(0.031f, 0.287f);
            glVertex2f(0.026f, 0.247f);
            glVertex2f(0.015f, 0.227f);
            glVertex2f(0.031f, 0.211f);
            glVertex2f(0.055f, 0.196f);
            glVertex2f(0.033f, 0.148f);
            glVertex2f(0.022f, 0.18f);
            glVertex2f(0.009f, 0.18f);
            glVertex2f(-0.005f, 0.168f);
            glVertex2f(-0.029f, 0.18f);
            glVertex2f(-0.045f, 0.204f);
            glVertex2f(-0.054f, 0.211f);
            glVertex2f(-0.069f, 0.219f);
            glVertex2f(-0.060f, 0.227f);
            glVertex2f(-0.054f, 0.243f);
            glVertex2f(-0.071f, 0.243f);
            glVertex2f(-0.098f, 0.239f);
            glVertex2f(-0.120f, 0.251f);
            glVertex2f(-0.136f, 0.275f);
            glVertex2f(-0.096f, 0.259f);
            glVertex2f(-0.063f, 0.275f);
            glVertex2f(-0.034f, 0.255f);
            glVertex2f(-0.020f, 0.247f);
            glVertex2f(-0.018f, 0.251f);
            glEnd();
            }

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
