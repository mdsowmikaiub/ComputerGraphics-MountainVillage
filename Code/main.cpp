#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#define PI           3.14159265358979323846


////void Idle()
////{
////    glutPostRedisplay();//// marks the current window as needing to be redisplayed
////}


GLfloat speed = 0.009f;


void daySky()
{
	glBegin(GL_POLYGON);
        glColor3ub(174, 214, 241);
        glVertex2f(-1.0f, 0.35f);
        glVertex2f(1.0f, 0.35f);
        glVertex2f(1.0f, 1.0f);
        glColor3f( 0, 0, 1 ); // blue
        glVertex2f(-1.0f, 1.1f);
	glEnd();
	glFlush();
}
void nightSky()
{
	glBegin(GL_POLYGON);
        glColor3ub(1, 8, 14);
        glVertex2f(-1.0f, 0.35f);
        glVertex2f(1.0f, 0.35f);
        glVertex2f(1.0f, 1.0f);
        glColor3ub(66, 75, 81); //color mixing
        glVertex2f(-1.0f, 1.1f);
	glEnd();
	glFlush();
}
void rainySky()
{
	glBegin(GL_POLYGON);
            glColor3ub(202, 207, 210);
        glVertex2f(-1.0f, 0.35f);
        glVertex2f(1.0f, 0.35f);
            glColor3ub(81, 90, 90);
        glVertex2f(1.0f, 1.0f);
            glColor3ub(81, 90, 90); //color mixing
        glVertex2f(-1.0f, 1.1f);
	glEnd();
	glFlush();
}

void star()
{
//star-1
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.3f, 0.7f);
        glVertex2f(0.32f, 0.7f);
        glVertex2f(0.31f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.32f, 0.72f);
        glVertex2f(0.31f, 0.69f);
	glEnd();

    //star-2
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.5f, 0.7f);
        glVertex2f(0.52f, 0.7f);
        glVertex2f(0.51f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.5f, 0.72f);
        glVertex2f(0.52f, 0.72f);
        glVertex2f(0.51f, 0.69f);
	glEnd();

    //star-3
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.8f);
        glVertex2f(0.42f, 0.8f);
        glVertex2f(0.41f, 0.835f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.82f);
        glVertex2f(0.42f, 0.82f);
        glVertex2f(0.41f, 0.79f);
	glEnd();

    //star-4
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.4f);
        glVertex2f(0.42f, 0.4f);
        glVertex2f(0.41f, 0.435f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.42f);
        glVertex2f(0.42f, 0.42f);
        glVertex2f(0.41f, 0.39f);
	glEnd();

    //star-5
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.8f, 0.4f);
        glVertex2f(0.82f, 0.4f);
        glVertex2f(0.81f, 0.435f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.8f, 0.42f);
        glVertex2f(0.82f, 0.42f);
        glVertex2f(0.81f, 0.39f);
	glEnd();

    //star-6
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.9f, 0.6f);
        glVertex2f(0.92f, 0.6f);
        glVertex2f(0.91f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.9f, 0.62f);
        glVertex2f(0.92f, 0.62f);
        glVertex2f(0.91f, 0.59f);
	glEnd();

    //star-7
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.6f);
        glVertex2f(-0.92f, 0.6f);
        glVertex2f(-0.91f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.62f);
        glVertex2f(-0.92f, 0.62f);
        glVertex2f(-0.91f, 0.59f);
	glEnd();

    //star-8
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.5f, 0.7f);
        glVertex2f(-0.52f, 0.7f);
        glVertex2f(-0.51f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.5f, 0.72f);
        glVertex2f(-0.52f, 0.72f);
        glVertex2f(-0.51f, 0.69f);
	glEnd();

    //star-9
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.7f, 0.7f);
        glVertex2f(-0.72f, 0.7f);
        glVertex2f(-0.71f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.7f, 0.72f);
        glVertex2f(-0.72f, 0.72f);
        glVertex2f(-0.71f, 0.69f);
	glEnd();

    //star-10
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.8f, 0.5f);
        glVertex2f(-0.82f, 0.5f);
        glVertex2f(-0.81f, 0.535f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.8f, 0.52f);
        glVertex2f(-0.82f, 0.52f);
        glVertex2f(-0.81f, 0.49f);
	glEnd();

    //star-11
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.2f, 0.6f);
        glVertex2f(-0.22f, 0.6f);
        glVertex2f(-0.21f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.2f, 0.62f);
        glVertex2f(-0.22f, 0.62f);
        glVertex2f(-0.21f, 0.59f);
	glEnd();

    //star-12
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(-0.02f, 0.7f);
        glVertex2f(-0.01f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(-0.02f, 0.72f);
        glVertex2f(-0.01f, 0.69f);
	glEnd();

    //star-13
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.05f, 0.9f);
        glVertex2f(0.07f, 0.9f);
        glVertex2f(0.06f, 0.935f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.05f, 0.92f);
        glVertex2f(0.07f, 0.92f);
        glVertex2f(0.06f, 0.89f);
	glEnd();

    //star-14
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.9f);
        glVertex2f(-0.92f, 0.9f);
        glVertex2f(-0.91f, 0.935f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.92f);
        glVertex2f(-0.92f, 0.92f);
        glVertex2f(-0.91f, 0.89f);
	glEnd();

    //star-15
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.7f, 0.8f);
        glVertex2f(0.72f, 0.8f);
        glVertex2f(0.71f, 0.835f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.7f, 0.82f);
        glVertex2f(0.72f, 0.82f);
        glVertex2f(0.71f, 0.79f);
	glEnd();
	glFlush();
}

GLfloat positionBird = -0.7f;
GLfloat speedz = 0.01f;
void updateBird(int value) {

    if(positionBird >1.0)
        positionBird = -1.0f;

    positionBird += speed;

	glutPostRedisplay();


	glutTimerFunc(100, updateBird, 0);
}
void bird1(){
//bird-1
    glPushMatrix();
     glTranslatef(positionBird,0.0f, 0.0f);
    //bird left wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.37f, 0.42f);
        glVertex2f(0.32f, 0.44f);
        glVertex2f(0.37f, 0.4f);
	glEnd();

    //bird leaps
	glBegin(GL_TRIANGLES);
        glColor3ub(34, 153, 84); //green
        glVertex2f(0.45f, 0.41f);
        glVertex2f(0.45f, 0.43f);
        glVertex2f(0.47f, 0.41f);
	glEnd();

    //bird legs
	glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.37f, 0.36f);
        glVertex2f(0.39f, 0.37f);
	glEnd();
    glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.39f, 0.35f);
        glVertex2f(0.41f, 0.37f);
	glEnd();


	//circle-1 --- bird body
	int i;
	GLfloat x=.4f; GLfloat y=.4f; GLfloat radius =.04f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(213, 244, 13); //yellow
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //circle-2 --- bird head
    int i1;
	GLfloat x1=.44f; GLfloat y1=.42f; GLfloat radius1 =.02f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(243, 156, 18); //orange
		glVertex2f(x1, y1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f(
		            x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    //circle-3 --- bird eye
    int i11;
	GLfloat x11=.45f; GLfloat y11=.42f; GLfloat radius11 =.005f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(39, 55, 70); //black
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11 <= triangleAmount11;i11++) {
			glVertex2f(
		            x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
			);
		}
	glEnd();

    //bird right wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.4f, 0.42f);
        glVertex2f(0.35f, 0.45f);
        glVertex2f(0.4f, 0.4f);
	glEnd();

	glPopMatrix();

	glFlush();
}


GLfloat positionBird2 = -0.6f;
GLfloat speedzz = 0.01f;

void updateBird2(int value) {

    if(positionBird2 >1.0)
        positionBird2 = -1.0f;

    positionBird2 += speedzz;

	glutPostRedisplay();


	glutTimerFunc(100, updateBird2, 0);
}
void bird2(){
//bird-2

    glPushMatrix();
    glTranslatef(positionBird2,0.0f, 0.0f);

    //bird left wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.57f, 0.62f);
        glVertex2f(0.52f, 0.63f);
        glVertex2f(0.57f, 0.6f);
	glEnd();

    //bird leaps
	glBegin(GL_TRIANGLES);
        glColor3ub(34, 153, 84); //green
        glVertex2f(0.65f, 0.61f);
        glVertex2f(0.65f, 0.63f);
        glVertex2f(0.67f, 0.61f);
	glEnd();

    //bird legs
	glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.57f, 0.56f);
        glVertex2f(0.59f, 0.57f);
	glEnd();
    glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.59f, 0.55f);
        glVertex2f(0.61f, 0.57f);
	glEnd();


	//circle-1 --- bird body
	int i2;
	GLfloat x2=.6f; GLfloat y2=.6f; GLfloat radius2 =.04f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(213, 244, 13); //yellow
		glVertex2f(x2, y2); // center of circle
		for(i2 = 0; i2 <= triangleAmount2;i2++) {
			glVertex2f(
		            x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();




    //circle-2 --- bird head
    int i12;
	GLfloat x12=.64f; GLfloat y12=.62f; GLfloat radius12 =.02f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(243, 156, 18); //orange
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12 <= triangleAmount12;i12++) {
			glVertex2f(
		            x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();



    //circle-3 --- bird eye
    int i112;
	GLfloat x112=.65f; GLfloat y112=.62f; GLfloat radius112 =.005f;
	int triangleAmount112 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(39, 55, 70); //black
		glVertex2f(x112, y112); // center of circle
		for(i112 = 0; i112 <= triangleAmount112;i112++) {
			glVertex2f(
		            x112 + (radius112 * cos(i112 *  twicePi112 / triangleAmount112)),
			    y112 + (radius112 * sin(i112 * twicePi112 / triangleAmount112))
			);
		}
	glEnd();

    //bird right wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.6f, 0.62f);
        glVertex2f(0.55f, 0.65f);
        glVertex2f(0.6f, 0.6f);
	    glEnd();


		glPopMatrix();
        glFlush();
}


GLfloat position = 0.6f;
void CloudLeft(int value)
{

    if(position <-1.4)
        position = 1.4f;

    position -= speed;

	glutPostRedisplay();

	glutTimerFunc(100, CloudLeft, 0);
}

void leftCloud()
{
    glPushMatrix();
    glTranslatef(-position, 0.0f, 0.0f);
	//circle-1
	int j;

	GLfloat p=-.5f; GLfloat q=.77f; GLfloat radius1 =.09f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p, q); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            p + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    q + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	//circle-2
	int jj;

	GLfloat p2=-.4f; GLfloat q2=.77f; GLfloat radius2 =.09f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p2, q2); // center of circle
		for(jj = 0; jj <= triangleAmount1;jj++) {
			glVertex2f(
		            p2 + (radius2 * cos(jj *  twicePi2 / triangleAmount2)),
			    q2 + (radius2 * sin(jj * twicePi2 / triangleAmount2))
			);
		}
	glEnd();




	//circle-3
	int jjj;

	GLfloat p3=-.3f; GLfloat q3=.77f; GLfloat radius3 =.09f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p3, q3); // center of circle
		for(jjj = 0; jjj <= triangleAmount1;jjj++) {
			glVertex2f(
		            p3 + (radius3 * cos(jjj *  twicePi3 / triangleAmount3)),
			    q3 + (radius3 * sin(jjj * twicePi3 / triangleAmount3))
			);
		}
	glEnd();



	//circle-4
	int jfour;

	GLfloat p4=-.2f; GLfloat q4=.77f; GLfloat radius4 =.09f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p4, q4); // center of circle
		for(jfour = 0; jfour <= triangleAmount4;jfour++) {
			glVertex2f(
		            p4 + (radius4 * cos(jfour *  twicePi4 / triangleAmount4)),
			    q4 + (radius4 * sin(jfour * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	//circle-5
	int jfive;

	GLfloat p5=-.25f; GLfloat q5=.82f; GLfloat radius5 =.09f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p5, q5); // center of circle
		for(jfive = 0; jfive <= triangleAmount5; jfive++) {
			glVertex2f(
		            p5 + (radius5 * cos(jfive *  twicePi5 / triangleAmount5)),
			    q5 + (radius5 * sin(jfive * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	//circle-6
	int jsix;

	GLfloat p6=-.35f; GLfloat q6=.86f; GLfloat radius6 =.09f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p6, q6); // center of circle
		for(jsix = 0; jsix <= triangleAmount6; jsix++) {
			glVertex2f(
		            p6 + (radius6 * cos(jsix *  twicePi6 / triangleAmount6)),
			    q6 + (radius6 * sin(jsix * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	//circle-7
	int jsvn;

	GLfloat p7=-.45f; GLfloat q7=.82f; GLfloat radius7 =.09f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(248, 249, 249);
		glVertex2f(p7, q7); // center of circle
		for(jsvn = 0; jsvn <= triangleAmount7; jsvn++) {
			glVertex2f(
		            p7 + (radius6 * cos(jsvn *  twicePi7 / triangleAmount7)),
			    q7 + (radius6 * sin(jsvn * twicePi7 / triangleAmount7))
			);
		}
	glEnd();
	glPopMatrix();
	glFlush();
}

GLfloat position1 = 0.5f;
void CloudRight(int value)
{
    if(position1 <-1.5)
        position1 = 1.1f;

    position1 -= speed;

	glutPostRedisplay();

	glutTimerFunc(100, CloudRight, 0);
}

void rightCloud()
{
    glPushMatrix();
    glTranslatef(-position1, 0.0f, 0.0f);
	//circle-1
	int jeight;

	GLfloat p8=.6f; GLfloat q8=.71f; GLfloat radius8 =.09f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//yellow
		glVertex2f(p8, q8); // center of circle
		for(jeight = 0; jeight <= triangleAmount8; jeight++) {
			glVertex2f(
		            p8 + (radius8 * cos(jeight *  twicePi8 / triangleAmount8)),
			    q8 + (radius8 * sin(jeight * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

	//circle-2
	int jnine;

	GLfloat p9=.5f; GLfloat q9=.73f; GLfloat radius9 =.09f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//yellow
		glVertex2f(p9, q9); // center of circle
		for(jnine = 0; jnine <= triangleAmount9; jnine++) {
			glVertex2f(
		            p9 + (radius9 * cos(jnine *  twicePi9 / triangleAmount9)),
			    q9 + (radius9 * sin(jnine * twicePi9 / triangleAmount9))
			);
		}
	glEnd();

	//circle-3
	int jten;

	GLfloat p10=.55f; GLfloat q10=.63f; GLfloat radius10 =.07f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//yellow
		glVertex2f(p10, q10); // center of circle
		for(jten = 0; jten <= triangleAmount10; jten++) {
			glVertex2f(
		            p10 + (radius10 * cos(jten *  twicePi10 / triangleAmount10)),
			    q10 + (radius10* sin(jten * twicePi10 / triangleAmount10))
			);
		}
	glEnd();

	//circle-4
	int jeleven;

	GLfloat p11=.42f; GLfloat q11=.64f; GLfloat radius11 =.1f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//yellow
		glVertex2f(p10, q10); // center of circle
		for(jeleven = 0; jeleven <= triangleAmount11; jeleven++) {
			glVertex2f(
		            p11 + (radius11 * cos(jeleven *  twicePi11 / triangleAmount11)),
			    q11 + (radius11* sin(jeleven * twicePi11 / triangleAmount11))
			);
		}
	glEnd();
	glPopMatrix();
	glFlush();
}


void dayMountain()
{
    //mountain from left to right - 1
	glBegin(GL_POLYGON);
        glColor3f(0.8f, 0.75f, 0.55f); //brown light
        glVertex2f(-1.1f, 0.35f);
        glVertex2f(-0.80f, 0.35f);
        glVertex2f(-0.98f, 0.7f);
	glEnd();

	//mountain from left to right - 3
	glBegin(GL_POLYGON);
        glColor3f(0.8f, 0.8f, 0.8f); //light grey
        glVertex2f(-0.70, 0.35f);
            glColor3f(0.5f, 0.67f, 0.6f); //color mixing --- light green
        glVertex2f(-0.42, 0.35f);
        glVertex2f(-0.57f, 0.58f);
	glEnd();

	//mountain from left to right - 2
	glBegin(GL_POLYGON);
            glColor3f(0.6f, 0.6f, 0.8f); //blue high
        glVertex2f(-0.90, 0.35f);
            glColor3f(0.4f, 0.6f, 0.4f); //green high
        glVertex2f(-0.61, 0.35f);
            glColor3f(0.5f, 0.4f, 0.4f); //red high
        glVertex2f(-0.76f, 0.65f);
	glEnd();

	//mountain from left to right - 4
	glBegin(GL_POLYGON);
        glColor3f(0.8f, 0.8f, 0.8f); //brown light
        glVertex2f(-0.45, 0.35f);
        glVertex2f(-0.25, 0.35f);
        glVertex2f(-0.35f, 0.5f);
	glEnd();

	//right complex mountain - 1
	glBegin(GL_POLYGON);
        glColor3f(0.6f, 0.6f, 0.6f); //brown light
        glVertex2f(-0.29, 0.35f);
        glVertex2f(-0.18, 0.50f);
        glVertex2f(-0.09f, 0.4f);
        glVertex2f(0.0, 0.55f);
        glVertex2f(0.07, 0.7f);
            glColor3f(0.78f, 0.7f, 0.72f); //color mixing --- main priority red
        glVertex2f(0.17, 0.75f);
        glVertex2f(0.22, 0.52f);
        glVertex2f(0.28, 0.49f);
        glVertex2f(0.32, 0.45f);
        glVertex2f(0.45, 0.35f);
	glEnd();

	//right complex mountain - 2
	glBegin(GL_POLYGON);
        glColor3f(0.68f, 0.68f, 0.68f); //brown light
        glVertex2f(0.48, 0.35f);
            glColor3f(0.75f, 0.62f, 0.7f);
        glVertex2f(0.78, 0.75f);
        glVertex2f(0.88, 0.5f);
        glVertex2f(1.0, 0.6f);
            glColor3f(0.6f, 0.62f, 0.68f); //color mixing --- blue+green mixing high
        glVertex2f(1.1, 0.35f);
	glEnd();
	glFlush();

}

void nightMountain()
{
    //mountain from left to right - 1
	glBegin(GL_POLYGON);
            glColor3ub(73, 44, 11); //brown light
        glVertex2f(-1.1f, 0.35f);
        glVertex2f(-0.80f, 0.35f);
            glColor3ub(144, 103, 54);
        glVertex2f(-0.98f, 0.7f);
	glEnd();

	//mountain from left to right - 3
	glBegin(GL_POLYGON);
        glColor3f(0.45f, 0.45f, 0.45f); //mid dark grey
        glVertex2f(-0.70, 0.35f);
            glColor3f(0.4f, 0.5f, 0.52f); //color mixing --- blue high
        glVertex2f(-0.42, 0.35f);
        glVertex2f(-0.57f, 0.58f);
	glEnd();

	//mountain from left to right - 2
	glBegin(GL_POLYGON);
            glColor3f(0.3f, 0.3f, 0.37f); //blue high
        glVertex2f(-0.90, 0.35f);
            glColor3f(0.4f, 0.4f, 0.47f); //blue high
        glVertex2f(-0.61, 0.35f);
            glColor3f(0.4f, 0.4f, 0.4f); //red high
        glVertex2f(-0.76f, 0.65f);
	glEnd();

	//mountain from left to right - 4
	glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.4f, 0.45f); //brown light
        glVertex2f(-0.45, 0.35f);
        glVertex2f(-0.25, 0.35f);
        glVertex2f(-0.35f, 0.5f);
	glEnd();

	//right complex mountain - 1
	glBegin(GL_POLYGON);
        glColor3f(0.4f, 0.4f, 0.4f); //brown light
        glVertex2f(-0.29, 0.35f);
        glVertex2f(-0.18, 0.50f);
        glVertex2f(-0.09f, 0.4f);
        glVertex2f(0.0, 0.55f);
        glVertex2f(0.07, 0.7f);
            glColor3f(0.62f, 0.64f, 0.68f); //color mixing --- main priority blue
        glVertex2f(0.17, 0.75f);
        glVertex2f(0.22, 0.52f);
        glVertex2f(0.28, 0.49f);
        glVertex2f(0.32, 0.45f);
        glVertex2f(0.45, 0.35f);
	glEnd();

	//right complex mountain - 2
	glBegin(GL_POLYGON);
            glColor3f(0.55f, 0.59f, 0.68f); //brown light
        glVertex2f(0.48, 0.35f);
            glColor3f(0.55f, 0.55f, 0.61f);
        glVertex2f(0.78, 0.75f);
        glVertex2f(0.88, 0.5f);
            //glColor3ub(52, 73, 94);
        glVertex2f(1.0, 0.6f);
            glColor3f(0.55f, 0.58f, 0.66f); //color mixing --- blue+green mixing high
        glVertex2f(1.1, 0.35f);
	glEnd();
    glFlush();
}
void rainyMountain()
{
    //mountain from left to right - 1
	glBegin(GL_POLYGON);
        glColor3f(0.8f, 0.65f, 0.55f); //brown light
        glVertex2f(-1.1f, 0.35f);
        glVertex2f(-0.80f, 0.35f);
        glVertex2f(-0.98f, 0.7f);
	glEnd();

	//mountain from left to right - 3
	glBegin(GL_POLYGON);
        glColor3f(0.57f, 0.5f, 0.57f); //light grey
        glVertex2f(-0.70, 0.35f);
            glColor3f(0.5f, 0.62f, 0.6f); //color mixing --- light green
        glVertex2f(-0.42, 0.35f);
        glVertex2f(-0.57f, 0.58f);
	glEnd();

	//mountain from left to right - 2
	glBegin(GL_POLYGON);
            glColor3f(0.4f, 0.4f, 0.6f); //blue high
        glVertex2f(-0.90, 0.35f);
            glColor3f(0.4f, 0.5f, 0.3f); //green high
        glVertex2f(-0.61, 0.35f);
            glColor3f(0.5f, 0.4f, 0.4f); //red high
        glVertex2f(-0.76f, 0.65f);
	glEnd();

	//mountain from left to right - 4
	glBegin(GL_POLYGON);
        glColor3f(0.6f, 0.6f, 0.6f); //brown light
        glVertex2f(-0.45, 0.35f);
        glVertex2f(-0.25, 0.35f);
        glVertex2f(-0.35f, 0.5f);
	glEnd();

	//right complex mountain - 1
	glBegin(GL_POLYGON);
        glColor3f(0.55f, 0.55f, 0.55f); //brown light
        glVertex2f(-0.29, 0.35f);
        glVertex2f(-0.18, 0.50f);
        glVertex2f(-0.09f, 0.4f);
        glVertex2f(0.0, 0.55f);
        glVertex2f(0.07, 0.7f);
            glColor3ub(116, 121, 121); //color mixing
        glVertex2f(0.17, 0.75f);
            glColor3ub(165, 161, 165); //color mixing
        glVertex2f(0.22, 0.52f);
        glVertex2f(0.28, 0.49f);
        glVertex2f(0.32, 0.45f);
        glVertex2f(0.45, 0.35f);
	glEnd();

	//right complex mountain - 2
	glBegin(GL_POLYGON);
        glColor3f(0.6f, 0.6f, 0.6f); //brown light
        glVertex2f(0.48, 0.35f);
            glColor3ub(157, 160, 161); //color mixing
        glVertex2f(0.78, 0.75f);
        glVertex2f(0.88, 0.5f);
        glVertex2f(1.0, 0.6f);
            glColor3ub(157, 160, 161); //color mixing
        glVertex2f(1.1, 0.35f);
	glEnd();
    glFlush();
}

void dayField()
{
	glBegin(GL_POLYGON);
            glColor3ub(118, 196, 17); //green high
        glVertex2f(-1.1f, 0.35f);
        glVertex2f(1.1f, 0.35f);
            glColor3ub(90, 90, 85); //blue high
        glVertex2f(1.1f, -1.1f);
            glColor3ub(167, 90, 60); //red high
        glVertex2f(-1.1f, -1.1f);
	glEnd();
	glFlush();
}
void nightField()
{
	glBegin(GL_POLYGON);
            glColor3ub(56, 93, 9);
        glVertex2f(-1.1f, 0.35f);
        glVertex2f(1.1f, 0.35f);
            glColor3ub(78, 100, 86);
        glVertex2f(1.1f, -1.1f);
            glColor3ub(9, 71, 30);
        glVertex2f(-1.1f, -1.1f);
	glEnd();
	glFlush();
}
void rainyField()
{
	glBegin(GL_POLYGON);
            glColor3ub(39, 154, 65);
        glVertex2f(-1.1f, 0.35f);
        glVertex2f(1.1f, 0.35f);
            glColor3ub(96, 171, 129); //color mixing
        glVertex2f(1.1f, -1.1f);
            glColor3ub(23, 160, 54); //color mixing
        glVertex2f(-1.1f, -1.1f);
	glEnd();
	glFlush();
}

void dayRoad()
{
    //full road
	glBegin(GL_POLYGON);
        glColor3ub(220, 136, 128); //red priority high
        glVertex2f(-0.18f, -0.8f);
        glVertex2f(-1.1f, -0.9f);
        glVertex2f(-1.1f, -0.75f);
        glVertex2f(-0.2f, -0.65f);
        glVertex2f(0.0f, -0.58f);
        glVertex2f(1.1f, 0.40f);
            glColor3ub(220, 176, 170); //red priority high
        glVertex2f(1.1f, 0.25f);
        glVertex2f(0.4f, -0.64f);
        glVertex2f(0.0f, -0.72f);
	glEnd();
	glFlush();
}
void nightRoad()
{
	glBegin(GL_POLYGON);
            glColor3ub(97, 106, 115);
        glVertex2f(-0.18f, -0.8f);
        glVertex2f(-1.1f, -0.9f);
        glVertex2f(-1.1f, -0.75f);
        glVertex2f(-0.2f, -0.65f);
        glVertex2f(0.0f, -0.58f);
            glColor3ub(127, 140, 141); //color mixing
        glVertex2f(1.1f, 0.40f);
            glColor3ub(128, 139, 150); //color mixing
        glVertex2f(1.1f, 0.25f);
        glVertex2f(0.4f, -0.64f);
        glVertex2f(0.0f, -0.72f);
	glEnd();
	glFlush();
}
void rainyRoad()
{
    //full road
	glBegin(GL_POLYGON);
        glColor3ub(197, 182, 147);
        glVertex2f(-0.18f, -0.8f);
        glVertex2f(-1.1f, -0.9f);
            glColor3ub(164, 163, 132);
        glVertex2f(-1.1f, -0.75f);
        glVertex2f(-0.2f, -0.65f);
            glColor3ub(164, 156, 132);
        glVertex2f(0.0f, -0.58f);
        glVertex2f(1.1f, 0.40f);
            glColor3ub(191, 181, 148); //color mixing
        glVertex2f(1.1f, 0.25f);
        glVertex2f(0.4f, -0.64f);
        glVertex2f(0.0f, -0.72f);
	glEnd();
	glFlush();
}


void highwayWhiteBars()
{
    //highway white bar LTR-1
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(-1.1f, 0.3f);
        glVertex2f(-0.94f, 0.3f);
        glVertex2f(-0.94f, 0.29f);
        glVertex2f(-1.1f, 0.29f);
	glEnd();
	//highway white bar LTR-2
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(-0.84f, 0.3f);
        glVertex2f(-0.74f, 0.3f);
        glVertex2f(-0.74f, 0.29f);
        glVertex2f(-0.84f, 0.29f);
	glEnd();
	//highway white bar LTR-3
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(-0.64f, 0.3f);
        glVertex2f(-0.54f, 0.3f);
        glVertex2f(-0.54f, 0.29f);
        glVertex2f(-0.64f, 0.29f);
	glEnd();
	//highway white bar LTR-4
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(-0.44f, 0.3f);
        glVertex2f(-0.34f, 0.3f);
        glVertex2f(-0.34f, 0.29f);
        glVertex2f(-0.44f, 0.29f);
	glEnd();
	//highway white bar LTR-5
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(-0.24f, 0.3f);
        glVertex2f(-0.14f, 0.3f);
        glVertex2f(-0.14f, 0.29f);
        glVertex2f(-0.24f, 0.29f);
	glEnd();
	//highway white bar LTR-6
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(-0.04f, 0.3f);
        glVertex2f(0.06f, 0.3f);
        glVertex2f(0.06f, 0.29f);
        glVertex2f(-0.04f, 0.29f);
	glEnd();
	//highway white bar LTR-7
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(0.16f, 0.3f);
        glVertex2f(0.26f, 0.3f);
        glVertex2f(0.26f, 0.29f);
        glVertex2f(0.16f, 0.29f);
	glEnd();
	//highway white bar LTR-8
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(0.36f, 0.3f);
        glVertex2f(0.46f, 0.3f);
        glVertex2f(0.46f, 0.29f);
        glVertex2f(0.36f, 0.29f);
	glEnd();
	//highway white bar LTR-9
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(0.56f, 0.3f);
        glVertex2f(0.66f, 0.3f);
        glVertex2f(0.66f, 0.29f);
        glVertex2f(0.56f, 0.29f);
	glEnd();
	//highway white bar LTR-10
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(0.76f, 0.3f);
        glVertex2f(0.86f, 0.3f);
        glVertex2f(0.86f, 0.29f);
        glVertex2f(0.76f, 0.29f);
	glEnd();
	//highway white bar LTR-10
	glBegin(GL_POLYGON);
            glColor3ub(242, 243, 244); //highway white bar
        glVertex2f(0.96f, 0.3f);
        glVertex2f(1.0f, 0.3f);
        glVertex2f(1.0f, 0.29f);
        glVertex2f(0.96f, 0.29f);
	glEnd();
    glFlush();
}

void dayHighway()
{

	//main highway
	glBegin(GL_POLYGON);
            glColor3ub(182, 177, 170); //highway color
        glVertex2f(-1.1f, 0.34f);
        glVertex2f(1.1f, 0.34f);
        glVertex2f(1.1f, 0.24f);
        glVertex2f(-1.1f, 0.24f);
	glEnd();

	//highway label UP
	glBegin(GL_LINES);
            glColor3ub(119, 116, 113); //highway color
        glVertex2f(-1.1f, 0.34f);
        glVertex2f(1.1f, 0.34f);
	glEnd();
	//highway label DOWN
	glBegin(GL_LINES);
            glColor3ub(119, 116, 113); //highway color
        glVertex2f(-1.1f, 0.24f);
        glVertex2f(1.1f, 0.24f);
	glEnd();
	glFlush();
}
void nightHighway()
{

	//main highway
	glBegin(GL_POLYGON);
            glColor3ub(125, 133, 128); //highway color
        glVertex2f(-1.1f, 0.34f);
        glVertex2f(1.1f, 0.34f);
        glVertex2f(1.1f, 0.24f);
        glVertex2f(-1.1f, 0.24f);
	glEnd();

	//highway label UP
	glBegin(GL_LINES);
            glColor3ub(119, 116, 113); //highway color
        glVertex2f(-1.1f, 0.34f);
        glVertex2f(1.1f, 0.34f);
	glEnd();
	//highway label DOWN
	glBegin(GL_LINES);
            glColor3ub(119, 116, 113); //highway color
        glVertex2f(-1.1f, 0.24f);
        glVertex2f(1.1f, 0.24f);
	glEnd();
	glFlush();

}

GLfloat ycar = 0.0f;
GLfloat speed0 = 0.012f;
void YcarPosition(int value)
{
    if(ycar <-1.8)
        ycar = 1.0f;

    ycar -= speed0;

	glutPostRedisplay();

	glutTimerFunc(100, YcarPosition, 0);
}


void yellowCarBodyCommonParts()
{
    //front side glass
	glBegin(GL_POLYGON);
            glColor3ub(151, 150, 140);
        glVertex2f(-0.37f, 0.335f);
        glVertex2f(-0.37f, 0.300f);
        glVertex2f(-0.343f, 0.300f);
        glVertex2f(-0.345f, 0.317f);
	glEnd();
	//middle side glass
	glBegin(GL_POLYGON);
            glColor3ub(151, 150, 140);
        glVertex2f(-0.372f, 0.336f);
        glVertex2f(-0.372f, 0.300f);
        glVertex2f(-0.432f, 0.300f);
        glVertex2f(-0.432f, 0.336f);
	glEnd();

	//back side glass
	glBegin(GL_POLYGON);
            glColor3ub(151, 150, 140);
        glVertex2f(-0.432f, 0.336f);
        glVertex2f(-0.432f, 0.300f);
        glVertex2f(-0.460f, 0.300f);
        glVertex2f(-0.455f, 0.311f);
        glVertex2f(-0.441f, 0.336f);
	glEnd();
	//glass divider - BACK
	glBegin(GL_LINES);
            glColor3ub(223, 219, 94);
        glVertex2f(-0.434f, 0.336f);
        glVertex2f(-0.434f, 0.300f);
	glEnd();
	//glass divider - FRONT
	glBegin(GL_LINES);
            glColor3ub(223, 219, 94);
        glVertex2f(-0.372f, 0.336f);
        glVertex2f(-0.372f, 0.300f);
	glEnd();
	//glass divider - MIDDLE
	glBegin(GL_LINES);
            glColor3ub(223, 219, 94);
        glVertex2f(-0.404f, 0.336f);
        glVertex2f(-0.404f, 0.300f);
	glEnd();


	//left wheel
    int iman3;

	GLfloat xman3=-.44f; GLfloat yman3=.265f; GLfloat radiusman3 =.01280f;
	int triangleAmountman3 = 20; //# of triangles used to draw circle

	GLfloat twicePiman3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //tyre color
		glVertex2f(xman3, yman3); // center of circle
		for(iman3 = 0; iman3 <= triangleAmountman3;iman3++) {
			glVertex2f(
		            xman3 + (radiusman3 * cos(iman3 *  twicePiman3 / triangleAmountman3)),
			    yman3 + (radiusman3 * sin(iman3 * twicePiman3 / triangleAmountman3))
			);
		}
	glEnd();
    //left wheel center
    int iman33;

	GLfloat xman33=-.44f; GLfloat yman33=.265f; GLfloat radiusman33 =.00760f;
	int triangleAmountman33 = 20; //# of triangles used to draw circle

	GLfloat twicePiman33 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(203, 205, 184); //tyre center color
		glVertex2f(xman33, yman33); // center of circle
		for(iman33 = 0; iman33 <= triangleAmountman33; iman33++) {
			glVertex2f(
		            xman33 + (radiusman33 * cos(iman33 *  twicePiman33 / triangleAmountman33)),
			    yman33 + (radiusman33 * sin(iman33 * twicePiman33 / triangleAmountman33))
			);
		}
	glEnd();
    //left wheel mini center
    int iman333;

	GLfloat xman333=-.44f; GLfloat yman333=.265f; GLfloat radiusman333 =.00280f;
	int triangleAmountman333 = 20; //# of triangles used to draw circle

	GLfloat twicePiman333 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //mini center
		glVertex2f(xman333, yman333); // center of circle
		for(iman333 = 0; iman333 <= triangleAmountman333;iman333++) {
			glVertex2f(
		            xman333 + (radiusman333 * cos(iman333 *  twicePiman333 / triangleAmountman333)),
			    yman333 + (radiusman333 * sin(iman333 * twicePiman333 / triangleAmountman333))
			);
		}
	glEnd();



    //right wheel
    int iman4;

	GLfloat xman4=-.35f; GLfloat yman4=.265f; GLfloat radiusman4 =.01280f;
	int triangleAmountman4 = 20; //# of triangles used to draw circle

	GLfloat twicePiman4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //tyre color
		glVertex2f(xman4, yman4); // center of circle
		for(iman4 = 0; iman4 <= triangleAmountman4;iman4++) {
			glVertex2f(
		            xman4 + (radiusman4 * cos(iman4 *  twicePiman4 / triangleAmountman4)),
			    yman4 + (radiusman4 * sin(iman4 * twicePiman4 / triangleAmountman4))
			);
		}
	glEnd();
    //right wheel center
    int iman44;

	GLfloat xman44=-.35f; GLfloat yman44=.265f; GLfloat radiusman44 =.00760f;
	int triangleAmountman44 = 20; //# of triangles used to draw circle

	GLfloat twicePiman44 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(203, 205, 184); //tyre centre color
		glVertex2f(xman44, yman44); // center of circle
		for(iman44 = 0; iman44 <= triangleAmountman44;iman44++) {
			glVertex2f(
		            xman44 + (radiusman44 * cos(iman44 *  twicePiman44 / triangleAmountman44)),
			    yman44 + (radiusman44 * sin(iman44 * twicePiman44 / triangleAmountman44))
			);
		}
	glEnd();
    //right wheel mini center
    int iman444;

	GLfloat xman444=-.35f; GLfloat yman444=.265f; GLfloat radiusman444 =.00280f;
	int triangleAmountman444 = 20; //# of triangles used to draw circle

	GLfloat twicePiman444 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //tyre centre color
		glVertex2f(xman444, yman444); // center of circle
		for(iman444 = 0; iman444 <= triangleAmountman444;iman444++) {
			glVertex2f(
		            xman444 + (radiusman444 * cos(iman444 *  twicePiman444 / triangleAmountman444)),
			    yman444 + (radiusman444 * sin(iman444 * twicePiman444 / triangleAmountman444))
			);
		}
	glEnd();
	glFlush();
}


void yellowCarDay()
{
    glPushMatrix();
    glTranslatef(-ycar, 0.0f, 0.0f);
       //main body
	glBegin(GL_POLYGON);
            glColor3ub(223, 219, 94); //Light Yellow
        glVertex2f(-0.48f, 0.26f);
        glVertex2f(-0.48f, 0.28f);
        glVertex2f(-0.46f, 0.30f);
        glVertex2f(-0.45f, 0.31f);
        glVertex2f(-0.448f, 0.331f);
        glVertex2f(-0.44f, 0.337f);
        glVertex2f(-0.37f, 0.337f);
        glVertex2f(-0.34f, 0.315f);
        glVertex2f(-0.32f, 0.312f);
        glVertex2f(-0.31f, 0.304f);
        glVertex2f(-0.300f, 0.27f);
        glVertex2f(-0.302f, 0.26f);
	glEnd();

	yellowCarBodyCommonParts(); //calling function

	glPopMatrix();
	glFlush();
}
void yellowCarNight()
{
    glPushMatrix();
    glTranslatef(-ycar, 0.0f, 0.0f);
       //main body
	glBegin(GL_POLYGON);
            glColor3ub(252, 248, 2); //Light Yellow
        glVertex2f(-0.48f, 0.26f);
        glVertex2f(-0.48f, 0.28f);
        glVertex2f(-0.46f, 0.30f);
        glVertex2f(-0.45f, 0.31f);
        glVertex2f(-0.448f, 0.331f);
        glVertex2f(-0.44f, 0.337f);
        glVertex2f(-0.37f, 0.337f);
        glVertex2f(-0.34f, 0.315f);
        glVertex2f(-0.32f, 0.312f);
        glVertex2f(-0.31f, 0.304f);
        glVertex2f(-0.300f, 0.27f);
        glVertex2f(-0.302f, 0.26f);
	glEnd();

	yellowCarBodyCommonParts(); //calling function

	glPopMatrix();
	glFlush();
}



GLfloat rcar = 0.0f;
GLfloat speed1 = 0.03f;
void RcarPosition(int value)
{
    if(rcar <-1.9)
        rcar = 1.0f;

    rcar -= speed1;

	glutPostRedisplay();

	glutTimerFunc(100, RcarPosition, 0);
}

void redCarBodyCommonParts()
{
    //front side glass
	glBegin(GL_POLYGON);
            glColor3ub(215, 219, 221);
        glVertex2f(-0.87f, 0.335f);
        glVertex2f(-0.87f, 0.300f);
        glVertex2f(-0.843f, 0.300f);
        glVertex2f(-0.845f, 0.317f);
	glEnd();
	//middle side glass
	glBegin(GL_POLYGON);
            glColor3ub(215, 219, 221);
        glVertex2f(-0.872f, 0.336f);
        glVertex2f(-0.872f, 0.300f);
        glVertex2f(-0.932f, 0.300f);
        glVertex2f(-0.932f, 0.336f);
	glEnd();

	//back side glass
	glBegin(GL_POLYGON);
            glColor3ub(215, 219, 221);
        glVertex2f(-0.932f, 0.336f);
        glVertex2f(-0.932f, 0.300f);
        glVertex2f(-0.960f, 0.300f);
        glVertex2f(-0.955f, 0.311f);
        glVertex2f(-0.941f, 0.336f);
	glEnd();
	//glass divider - BACK
	glBegin(GL_LINES);
            glColor3ub(236, 112, 99);
        glVertex2f(-0.934f, 0.336f);
        glVertex2f(-0.934f, 0.300f);
	glEnd();
	//glass divider - FRONT
	glBegin(GL_LINES);
            glColor3ub(236, 112, 99);
        glVertex2f(-0.872f, 0.336f);
        glVertex2f(-0.872f, 0.300f);
	glEnd();
	//glass divider - MIDDLE
	glBegin(GL_LINES);
            glColor3ub(236, 112, 99);
        glVertex2f(-0.904f, 0.336f);
        glVertex2f(-0.904f, 0.300f);
	glEnd();



	//left wheel
    int iman1;

	GLfloat xman1=-.94f; GLfloat yman1=.265f; GLfloat radiusman1 =.01280f;
	int triangleAmountman1 = 20; //# of triangles used to draw circle

	GLfloat twicePiman1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //tyre color
		glVertex2f(xman1, yman1); // center of circle
		for(iman1 = 0; iman1 <= triangleAmountman1;iman1++) {
			glVertex2f(
		            xman1 + (radiusman1 * cos(iman1 *  twicePiman1 / triangleAmountman1)),
			    yman1 + (radiusman1 * sin(iman1 * twicePiman1 / triangleAmountman1))
			);
		}
	glEnd();
    //left wheel center
    int iman11;

	GLfloat xman11=-.94f; GLfloat yman11=.265f; GLfloat radiusman11 =.00760f;
	int triangleAmountman11 = 20; //# of triangles used to draw circle

	GLfloat twicePiman11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(203, 205, 184); //tyre center color
		glVertex2f(xman11, yman11); // center of circle
		for(iman11 = 0; iman11 <= triangleAmountman11;iman11++) {
			glVertex2f(
		            xman11 + (radiusman11 * cos(iman11 *  twicePiman11 / triangleAmountman11)),
			    yman11 + (radiusman11 * sin(iman11 * twicePiman11 / triangleAmountman11))
			);
		}
	glEnd();
    //left wheel mini center
    int iman111;

	GLfloat xman111=-.94f; GLfloat yman111=.265f; GLfloat radiusman111 =.00280f;
	int triangleAmountman111 = 20; //# of triangles used to draw circle

	GLfloat twicePiman111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //mini center
		glVertex2f(xman111, yman111); // center of circle
		for(iman111 = 0; iman111 <= triangleAmountman111;iman111++) {
			glVertex2f(
		            xman111 + (radiusman111 * cos(iman111 *  twicePiman111 / triangleAmountman111)),
			    yman111 + (radiusman111 * sin(iman111 * twicePiman111 / triangleAmountman111))
			);
		}
	glEnd();

    //right wheel
    int iman2;

	GLfloat xman2=-.85f; GLfloat yman2=.265f; GLfloat radiusman2 =.01280f;
	int triangleAmountman2 = 20; //# of triangles used to draw circle

	GLfloat twicePiman2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //tyre color
		glVertex2f(xman2, yman2); // center of circle
		for(iman2 = 0; iman2 <= triangleAmountman2;iman2++) {
			glVertex2f(
		            xman2 + (radiusman2 * cos(iman2 *  twicePiman2 / triangleAmountman2)),
			    yman2 + (radiusman2 * sin(iman2 * twicePiman2 / triangleAmountman2))
			);
		}
	glEnd();
    //right wheel center
    int iman22;

	GLfloat xman22=-.85f; GLfloat yman22=.265f; GLfloat radiusman22 =.00760f;
	int triangleAmountman22 = 20; //# of triangles used to draw circle

	GLfloat twicePiman22 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(203, 205, 184); //tyre centre color
		glVertex2f(xman22, yman22); // center of circle
		for(iman22 = 0; iman22 <= triangleAmountman22;iman22++) {
			glVertex2f(
		            xman22 + (radiusman22 * cos(iman22 *  twicePiman22 / triangleAmountman22)),
			    yman22 + (radiusman22 * sin(iman22 * twicePiman22 / triangleAmountman22))
			);
		}
	glEnd();
    //right wheel mini center
    int iman222;

	GLfloat xman222=-.85f; GLfloat yman222=.265f; GLfloat radiusman222 =.00280f;
	int triangleAmountman222 = 20; //# of triangles used to draw circle

	GLfloat twicePiman222 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(80, 80, 74); //tyre centre color
		glVertex2f(xman222, yman222); // center of circle
		for(iman222 = 0; iman222 <= triangleAmountman222;iman222++) {
			glVertex2f(
		            xman222 + (radiusman222 * cos(iman222 *  twicePiman222 / triangleAmountman222)),
			    yman222 + (radiusman222 * sin(iman222 * twicePiman222 / triangleAmountman222))
			);
		}
	glEnd();
	glFlush();
}
void redCarDay()
{
    glPushMatrix();
    glTranslatef(-rcar, 0.0f, 0.0f);
    	//main body
	glBegin(GL_POLYGON);
            glColor3ub(236, 112, 99); //light red
        glVertex2f(-0.98f, 0.26f);
        glVertex2f(-0.98f, 0.28f);
        glVertex2f(-0.96f, 0.30f);
        glVertex2f(-0.95f, 0.31f);
        glVertex2f(-0.948f, 0.331f);
        glVertex2f(-0.94f, 0.337f);
        glVertex2f(-0.87f, 0.337f);
        glVertex2f(-0.84f, 0.315f);
        glVertex2f(-0.82f, 0.312f);
        glVertex2f(-0.81f, 0.304f);
        glVertex2f(-0.800f, 0.27f);
        glVertex2f(-0.802f, 0.26f);
	glEnd();

	redCarBodyCommonParts();

	glPopMatrix();
	glFlush();
}
void redCarNight()
{
    glPushMatrix();
    glTranslatef(-rcar, 0.0f, 0.0f);
    	//main body
	glBegin(GL_POLYGON);
            glColor3ub(238, 81, 62); //light red
        glVertex2f(-0.98f, 0.26f);
        glVertex2f(-0.98f, 0.28f);
        glVertex2f(-0.96f, 0.30f);
        glVertex2f(-0.95f, 0.31f);
        glVertex2f(-0.948f, 0.331f);
        glVertex2f(-0.94f, 0.337f);
        glVertex2f(-0.87f, 0.337f);
        glVertex2f(-0.84f, 0.315f);
        glVertex2f(-0.82f, 0.312f);
        glVertex2f(-0.81f, 0.304f);
        glVertex2f(-0.800f, 0.27f);
        glVertex2f(-0.802f, 0.26f);
	glEnd();

	redCarBodyCommonParts();

	glPopMatrix();
	glFlush();
}

void houseLabelDay()
{
    //front floor_label
	glBegin(GL_POLYGON);
        glColor3ub(195, 170, 130);
        glVertex2f(-0.65f, -0.3f);
        glVertex2f(-0.5f, -0.3f);
            glColor3ub(144, 113, 64); //color mixing
        glVertex2f(-0.49f, -0.32f);
        glVertex2f(-0.65f, -0.32f);
	glEnd();
	//left floor_label
	glBegin(GL_POLYGON);
        glColor3ub(202, 181, 146);
        glVertex2f(-0.75f, -0.27f);
            glColor3ub(144, 113, 64); //color mixing
        glVertex2f(-0.76f, -0.29f);
            glColor3ub(144, 113, 94); //color mixing
        glVertex2f(-0.65f, -0.32f);
            glColor3ub(202, 181, 146); //color mixing
        glVertex2f(-0.65f, -0.3f);
	glEnd();
	glFlush();
}
void houseLabelNight()
{
    //front floor_label
	glBegin(GL_POLYGON);
            glColor3ub(153, 115, 68);
        glVertex2f(-0.65f, -0.3f);
        glVertex2f(-0.5f, -0.3f);
            glColor3ub(76, 44, 6); //color mixing
        glVertex2f(-0.49f, -0.32f);
        glVertex2f(-0.65f, -0.32f);
	glEnd();
	//left floor_label
	glBegin(GL_POLYGON);
            glColor3ub(153, 115, 68);
        glVertex2f(-0.75f, -0.27f);
            glColor3ub(98, 56, 6); //color mixing
        glVertex2f(-0.76f, -0.29f);
            glColor3ub(73, 43, 8); //color mixing
        glVertex2f(-0.65f, -0.32f);
            glColor3ub(153, 115, 68); //color mixing
        glVertex2f(-0.65f, -0.3f);
	glEnd();
	glFlush();
}
void HouseBodyCommonParts()
{
    //door
	glBegin(GL_POLYGON);
        glColor3ub(89, 102, 93);
        glVertex2f(-0.61f, -0.21f);
        glVertex2f(-0.55f, -0.21f);
        glVertex2f(-0.55f, -0.3f);
        glVertex2f(-0.61f, -0.3f);
	glEnd();
	//middle line of the door
	glBegin(GL_LINES);
        glColor3ub(48, 53, 50);
        glVertex2f(-0.58f, -0.3f);
        glVertex2f(-0.58f, -0.21f);
	glEnd();
	//door triangle___for looking the door is open...
	glBegin(GL_TRIANGLES);
        glColor3ub(48, 53, 50);
        glVertex2f(-0.55f, -0.21f);
        glVertex2f(-0.61f, -0.21f);
        glVertex2f(-0.58f, -0.22f);
	glEnd();

	//window borders
	glBegin(GL_POLYGON);
        glColor3ub(84, 81, 77);
        glVertex2f(-0.685f, -0.184f);
        glVertex2f(-0.723f, -0.184f);
        glVertex2f(-0.723f, -0.241f);
        glVertex2f(-0.685f, -0.241f);
	glEnd();
	//window
	glBegin(GL_POLYGON);
        glColor3ub(128,128,128);
        glVertex2f(-0.69f, -0.19f);
        glVertex2f(-0.72f, -0.19f);
        glVertex2f(-0.72f, -0.23f);
        glVertex2f(-0.69f, -0.23f);
	glEnd();
    glFlush();
}

void dayHouse()
{
    //right body
	glBegin(GL_POLYGON);
        glColor3ub(185, 129, 16);
        glVertex2f(-0.65f, -0.15f);
        glVertex2f(-0.5f, -0.15f);
        glVertex2f(-0.5f, -0.3f);
        glVertex2f(-0.65f, -0.3f);
	glEnd();

	//right shade
	glBegin(GL_POLYGON);
        glColor3ub(96, 89, 76);
        glVertex2f(-0.72f, -0.07f);
        glVertex2f(-0.55f, -0.07f);
        glVertex2f(-0.48f, -0.15f);
        glVertex2f(-0.65f, -0.15f);
	glEnd();

	//left body
	glBegin(GL_POLYGON);
        glColor3ub(220, 161, 53);
        glVertex2f(-0.72f, -0.07f);
        glVertex2f(-0.65f, -0.15f);
        glVertex2f(-0.65f, -0.30f);
        glVertex2f(-0.75f, -0.27f);
        glVertex2f(-0.75f, -0.15f);
	glEnd();

	//left small shade
	glBegin(GL_POLYGON);
        glColor3ub(96, 89, 76);
        glVertex2f(-0.72f, -0.07f);
        glVertex2f(-0.75f, -0.15f);
        glVertex2f(-0.77f, -0.15f);
        glVertex2f(-0.71f, -0.08f);
	glEnd();
    houseLabelDay();
	HouseBodyCommonParts();
	glFlush();
}
void nightHouse()
{
    //right body
	glBegin(GL_POLYGON);
        glColor3ub(125, 102, 8);
        glVertex2f(-0.65f, -0.15f);
        glVertex2f(-0.5f, -0.15f);
        glVertex2f(-0.5f, -0.3f);
        glVertex2f(-0.65f, -0.3f);
	glEnd();

	//right shade
	glBegin(GL_POLYGON);
        glColor3ub(23, 32, 42);
        glVertex2f(-0.72f, -0.07f);
        glVertex2f(-0.55f, -0.07f);
        glVertex2f(-0.48f, -0.15f);
        glVertex2f(-0.65f, -0.15f);
	glEnd();

	//left body
	glBegin(GL_POLYGON);
        glColor3ub(154, 125, 12);
        glVertex2f(-0.72f, -0.07f);
        glVertex2f(-0.65f, -0.15f);
        glVertex2f(-0.65f, -0.30f);
        glVertex2f(-0.75f, -0.27f);
        glVertex2f(-0.75f, -0.15f);
	glEnd();

	//left small shade
	glBegin(GL_POLYGON);
        glColor3ub(23, 32, 42);
        glVertex2f(-0.72f, -0.07f);
        glVertex2f(-0.75f, -0.15f);
        glVertex2f(-0.77f, -0.15f);
        glVertex2f(-0.71f, -0.08f);
	glEnd();
    houseLabelNight();
	HouseBodyCommonParts();
	glFlush();
}

void dayTree()
{
    //main body
	glBegin(GL_POLYGON);
            glColor3ub( 128, 98, 44); //dark brown
        glVertex2f(-0.82f, -0.35f);
        glVertex2f(-0.78f, -0.35f);
        glVertex2f(-0.79f, -0.1f);
            glColor3ub(120, 115, 10); //color mixing --- light green+red mixing effect
        glVertex2f(-0.77f, -0.08f);
        glVertex2f(-0.79f, -0.07f);
        glVertex2f(-0.80f, -0.09f);
        glVertex2f(-0.81f, -0.07f);
        glVertex2f(-0.83f, -0.08f);
        glVertex2f(-0.81f, -0.1f);
	glEnd();


	//left circle
	int cir1;
	GLfloat pcir1= -.85f; GLfloat qcir1= -.03f; GLfloat radiuscir1 =.06f;
	int triangleAmountcir1 = 20; //# of triangles used to draw circle

	GLfloat twicePicir1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(88, 204, 141);
		glVertex2f(pcir1, qcir1); // center of circle
		for(cir1 = 0; cir1 <= triangleAmountcir1; cir1++) {
			glVertex2f(
		            pcir1 + (radiuscir1 * cos(cir1 *  twicePicir1 / triangleAmountcir1)),
			    qcir1 + (radiuscir1* sin(cir1 * twicePicir1 / triangleAmountcir1))
			);
		}
	glEnd();

    //up---right___circle of the tree
	int cir3;
	GLfloat pcir3= -.76f; GLfloat qcir3= 0.04f; GLfloat radiuscir3 =.06f;
	int triangleAmountcir3 = 20; //# of triangles used to draw circle

	GLfloat twicePicir3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(88, 204, 141);
		glVertex2f(pcir3, qcir3); // center of circle
		for(cir3 = 0; cir3 <= triangleAmountcir3; cir3++) {
			glVertex2f(
		            pcir3 + (radiuscir3 * cos(cir3 *  twicePicir3 / triangleAmountcir3)),
			    qcir3 + (radiuscir3* sin(cir3 * twicePicir3 / triangleAmountcir3))
			);
		}
	glEnd();

    //up---left___circle of the tree
	int cir4;
	GLfloat pcir4= -.85f; GLfloat qcir4= 0.05f; GLfloat radiuscir4 =.07f;
	int triangleAmountcir4 = 20; //# of triangles used to draw circle

	GLfloat twicePicir4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(88, 204, 141);
		glVertex2f(pcir4, qcir4); // center of circle
		for(cir4 = 0; cir4 <= triangleAmountcir4; cir4++) {
			glVertex2f(
		            pcir4 + (radiuscir4 * cos(cir4 *  twicePicir4 / triangleAmountcir4)),
			    qcir4 + (radiuscir3* sin(cir4 * twicePicir4 / triangleAmountcir4))
			);
		}
	glEnd();

    //___AT THE TOP___CIRCLE
	int cir5;
	GLfloat pcir5= -.81f; GLfloat qcir5= 0.08f; GLfloat radiuscir5 =.07f;
	int triangleAmountcir5 = 20; //# of triangles used to draw circle

	GLfloat twicePicir5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(88, 204, 141);
		glVertex2f(pcir5, qcir5); // center of circle
		for(cir5 = 0; cir5 <= triangleAmountcir5; cir5++) {
			glVertex2f(
		            pcir5 + (radiuscir5 * cos(cir5 *  twicePicir5 / triangleAmountcir5)),
			    qcir5 + (radiuscir5* sin(cir5 * twicePicir5 / triangleAmountcir5))
			);
		}
	glEnd();

	//right circle of the tree
	int cir2;
	GLfloat pcir2= -.76f; GLfloat qcir2= -.03f; GLfloat radiuscir2 =.06f;
	int triangleAmountcir2 = 20; //# of triangles used to draw circle

	GLfloat twicePicir2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(88, 204, 141);
		glVertex2f(pcir2, qcir2); // center of circle
		for(cir2 = 0; cir2 <= triangleAmountcir2; cir2++) {
			glVertex2f(
		            pcir2 + (radiuscir2 * cos(cir2 *  twicePicir2 / triangleAmountcir2)),
			    qcir2 + (radiuscir2* sin(cir2 * twicePicir2 / triangleAmountcir2))
			);
		}
	glEnd();
	glFlush();
}

void nightTree()
{
    //main body
	glBegin(GL_POLYGON);
            glColor3ub(120, 66, 18); //dark brown
        glVertex2f(-0.82f, -0.35f);
        glVertex2f(-0.78f, -0.35f);
        glVertex2f(-0.79f, -0.1f);
        glVertex2f(-0.77f, -0.08f);
        glVertex2f(-0.79f, -0.07f);
        glVertex2f(-0.80f, -0.09f);
        glVertex2f(-0.81f, -0.07f);
        glVertex2f(-0.83f, -0.08f);
        glVertex2f(-0.81f, -0.1f);
	glEnd();


	//left circle
	int cir1;
	GLfloat pcir1= -.85f; GLfloat qcir1= -.03f; GLfloat radiuscir1 =.06f;
	int triangleAmountcir1 = 20; //# of triangles used to draw circle

	GLfloat twicePicir1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(14, 102, 85);
		glVertex2f(pcir1, qcir1); // center of circle
		for(cir1 = 0; cir1 <= triangleAmountcir1; cir1++) {
			glVertex2f(
		            pcir1 + (radiuscir1 * cos(cir1 *  twicePicir1 / triangleAmountcir1)),
			    qcir1 + (radiuscir1* sin(cir1 * twicePicir1 / triangleAmountcir1))
			);
		}
	glEnd();

    //up---right___circle of the tree
	int cir3;
	GLfloat pcir3= -.76f; GLfloat qcir3= 0.04f; GLfloat radiuscir3 =.06f;
	int triangleAmountcir3 = 20; //# of triangles used to draw circle

	GLfloat twicePicir3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(14, 102, 85);
		glVertex2f(pcir3, qcir3); // center of circle
		for(cir3 = 0; cir3 <= triangleAmountcir3; cir3++) {
			glVertex2f(
		            pcir3 + (radiuscir3 * cos(cir3 *  twicePicir3 / triangleAmountcir3)),
			    qcir3 + (radiuscir3* sin(cir3 * twicePicir3 / triangleAmountcir3))
			);
		}
	glEnd();

    //up---left___circle of the tree
	int cir4;
	GLfloat pcir4= -.85f; GLfloat qcir4= 0.05f; GLfloat radiuscir4 =.07f;
	int triangleAmountcir4 = 20; //# of triangles used to draw circle

	GLfloat twicePicir4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(14, 102, 85);
		glVertex2f(pcir4, qcir4); // center of circle
		for(cir4 = 0; cir4 <= triangleAmountcir4; cir4++) {
			glVertex2f(
		            pcir4 + (radiuscir4 * cos(cir4 *  twicePicir4 / triangleAmountcir4)),
			    qcir4 + (radiuscir3* sin(cir4 * twicePicir4 / triangleAmountcir4))
			);
		}
	glEnd();

    //___AT THE TOP___CIRCLE
	int cir5;
	GLfloat pcir5= -.81f; GLfloat qcir5= 0.08f; GLfloat radiuscir5 =.07f;
	int triangleAmountcir5 = 20; //# of triangles used to draw circle

	GLfloat twicePicir5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(14, 102, 85);
		glVertex2f(pcir5, qcir5); // center of circle
		for(cir5 = 0; cir5 <= triangleAmountcir5; cir5++) {
			glVertex2f(
		            pcir5 + (radiuscir5 * cos(cir5 *  twicePicir5 / triangleAmountcir5)),
			    qcir5 + (radiuscir5* sin(cir5 * twicePicir5 / triangleAmountcir5))
			);
		}
	glEnd();

	//right circle of the tree
	int cir2;
	GLfloat pcir2= -.76f; GLfloat qcir2= -.03f; GLfloat radiuscir2 =.06f;
	int triangleAmountcir2 = 20; //# of triangles used to draw circle

	GLfloat twicePicir2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(14, 102, 85);
		glVertex2f(pcir2, qcir2); // center of circle
		for(cir2 = 0; cir2 <= triangleAmountcir2; cir2++) {
			glVertex2f(
		            pcir2 + (radiuscir2 * cos(cir2 *  twicePicir2 / triangleAmountcir2)),
			    qcir2 + (radiuscir2* sin(cir2 * twicePicir2 / triangleAmountcir2))
			);
		}
	glEnd();
	glFlush();
}

void rainyTree()
{
    //main body
	glBegin(GL_POLYGON);
            glColor3ub(120, 66, 18); //dark brown
        glVertex2f(-0.82f, -0.35f);
        glVertex2f(-0.78f, -0.35f);
        glVertex2f(-0.79f, -0.1f);
        glVertex2f(-0.77f, -0.08f);
        glVertex2f(-0.79f, -0.07f);
        glVertex2f(-0.80f, -0.09f);
        glVertex2f(-0.81f, -0.07f);
        glVertex2f(-0.83f, -0.08f);
        glVertex2f(-0.81f, -0.1f);
	glEnd();


	//left circle
	int cir1;
	GLfloat pcir1= -.85f; GLfloat qcir1= -.03f; GLfloat radiuscir1 =.06f;
	int triangleAmountcir1 = 20; //# of triangles used to draw circle

	GLfloat twicePicir1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(30, 132, 73);
		glVertex2f(pcir1, qcir1); // center of circle
		for(cir1 = 0; cir1 <= triangleAmountcir1; cir1++) {
			glVertex2f(
		            pcir1 + (radiuscir1 * cos(cir1 *  twicePicir1 / triangleAmountcir1)),
			    qcir1 + (radiuscir1* sin(cir1 * twicePicir1 / triangleAmountcir1))
			);
		}
	glEnd();

    //up---right___circle of the tree
	int cir3;
	GLfloat pcir3= -.76f; GLfloat qcir3= 0.04f; GLfloat radiuscir3 =.06f;
	int triangleAmountcir3 = 20; //# of triangles used to draw circle

	GLfloat twicePicir3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(30, 132, 73);
		glVertex2f(pcir3, qcir3); // center of circle
		for(cir3 = 0; cir3 <= triangleAmountcir3; cir3++) {
			glVertex2f(
		            pcir3 + (radiuscir3 * cos(cir3 *  twicePicir3 / triangleAmountcir3)),
			    qcir3 + (radiuscir3* sin(cir3 * twicePicir3 / triangleAmountcir3))
			);
		}
	glEnd();

    //up---left___circle of the tree
	int cir4;
	GLfloat pcir4= -.85f; GLfloat qcir4= 0.05f; GLfloat radiuscir4 =.07f;
	int triangleAmountcir4 = 20; //# of triangles used to draw circle

	GLfloat twicePicir4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(30, 132, 73);
		glVertex2f(pcir4, qcir4); // center of circle
		for(cir4 = 0; cir4 <= triangleAmountcir4; cir4++) {
			glVertex2f(
		            pcir4 + (radiuscir4 * cos(cir4 *  twicePicir4 / triangleAmountcir4)),
			    qcir4 + (radiuscir3* sin(cir4 * twicePicir4 / triangleAmountcir4))
			);
		}
	glEnd();

    //___AT THE TOP___CIRCLE
	int cir5;
	GLfloat pcir5= -.81f; GLfloat qcir5= 0.08f; GLfloat radiuscir5 =.07f;
	int triangleAmountcir5 = 20; //# of triangles used to draw circle

	GLfloat twicePicir5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(30, 132, 73);
		glVertex2f(pcir5, qcir5); // center of circle
		for(cir5 = 0; cir5 <= triangleAmountcir5; cir5++) {
			glVertex2f(
		            pcir5 + (radiuscir5 * cos(cir5 *  twicePicir5 / triangleAmountcir5)),
			    qcir5 + (radiuscir5* sin(cir5 * twicePicir5 / triangleAmountcir5))
			);
		}
	glEnd();

	//right circle of the tree
	int cir2;
	GLfloat pcir2= -.76f; GLfloat qcir2= -.03f; GLfloat radiuscir2 =.06f;
	int triangleAmountcir2 = 20; //# of triangles used to draw circle

	GLfloat twicePicir2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(30, 132, 73);
		glVertex2f(pcir2, qcir2); // center of circle
		for(cir2 = 0; cir2 <= triangleAmountcir2; cir2++) {
			glVertex2f(
		            pcir2 + (radiuscir2 * cos(cir2 *  twicePicir2 / triangleAmountcir2)),
			    qcir2 + (radiuscir2* sin(cir2 * twicePicir2 / triangleAmountcir2))
			);
		}
	glEnd();
	glFlush();
}


void pondBorder()
{
    //POND_BORDER
	int cir2pond;
	GLfloat pcir2pond= .96f; GLfloat qcir2pond = -.7f; GLfloat radiuscir2pond =.46f;
	int triangleAmountcir2pond = 20; //# of triangles used to draw circle

	GLfloat twicePicir2pond = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(86, 101, 115); //darkish blue
		glVertex2f(pcir2pond, qcir2pond); // center of circle
		for(cir2pond = 0; cir2pond <= triangleAmountcir2pond; cir2pond++) {
			glVertex2f(
		            pcir2pond + (radiuscir2pond * cos(cir2pond *  twicePicir2pond / triangleAmountcir2pond)),
			    qcir2pond + (radiuscir2pond * sin(cir2pond * twicePicir2pond / triangleAmountcir2pond))
			);
		}
	glEnd();
	glFlush();
}

void dayPond()
{
    pondBorder();

    //POND_WATER
	int cir3pond;
	GLfloat pcir3pond= .97f; GLfloat qcir3pond = -.69f; GLfloat radiuscir3pond =.43f;
	int triangleAmountcir3pond = 20; //# of triangles used to draw circle

	GLfloat twicePicir3pond = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(45, 136, 199); //Light Blue
		glVertex2f(pcir3pond, qcir3pond); // center of circle
		for(cir3pond = 0; cir3pond <= triangleAmountcir3pond+1; cir3pond++) {
			glVertex2f(
		            pcir3pond + (radiuscir3pond * cos(cir3pond *  twicePicir3pond / triangleAmountcir3pond)),
			    qcir3pond + (radiuscir3pond * sin(cir3pond * twicePicir3pond / triangleAmountcir3pond))
			);
			glColor3ub(45, 198, 203);
		}
	glEnd();
	glFlush();
}
void nightPond()
{
    pondBorder();

    //POND_WATER
	int cir3pond;
	GLfloat pcir3pond= .97f; GLfloat qcir3pond = -.69f; GLfloat radiuscir3pond =.43f;
	int triangleAmountcir3pond = 20; //# of triangles used to draw circle

	GLfloat twicePicir3pond = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(52, 73, 94); //Light Blue
		glVertex2f(pcir3pond, qcir3pond); // center of circle
		for(cir3pond = 0; cir3pond <= triangleAmountcir3pond+1; cir3pond++) {
			glVertex2f(
		            pcir3pond + (radiuscir3pond * cos(cir3pond *  twicePicir3pond / triangleAmountcir3pond)),
			    qcir3pond + (radiuscir3pond * sin(cir3pond * twicePicir3pond / triangleAmountcir3pond))
			);
			glColor3ub(36, 113, 163);
		}
	glEnd();
	glFlush();
}

void rainyPond()
{
    pondBorder();

    //POND_WATER
	int cir3pond;
	GLfloat pcir3pond= .97f; GLfloat qcir3pond = -.69f; GLfloat radiuscir3pond =.43f;
	int triangleAmountcir3pond = 20; //# of triangles used to draw circle

	GLfloat twicePicir3pond = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(46, 134, 193); //Light Blue
		glVertex2f(pcir3pond, qcir3pond); // center of circle
		for(cir3pond = 0; cir3pond <= triangleAmountcir3pond+1; cir3pond++) {
			glVertex2f(
		            pcir3pond + (radiuscir3pond * cos(cir3pond *  twicePicir3pond / triangleAmountcir3pond)),
			    qcir3pond + (radiuscir3pond * sin(cir3pond * twicePicir3pond / triangleAmountcir3pond))
			);
			glColor3ub(36, 113, 166);
		}
	glEnd();
	glFlush();
}


void dayWindmillStand()
{
	glBegin(GL_POLYGON);
            glColor3ub(156, 100, 12); //color mixing---red priority high
        glVertex2f(-0.39f, -0.27f);
            glColor3ub(147, 81, 22); //color mixing---red priority high
        glVertex2f(-0.31f, -0.27f);
            glColor3ub(220, 118, 51); //color mixing---red priority high
        glVertex2f(-0.33f, 0.1f); //up points left
        glVertex2f(-0.35f, 0.14f);
        glVertex2f(-0.37f, 0.1f); //up points right
	glEnd();
	glFlush();
}
void nightWindmillStand()
{
	glBegin(GL_POLYGON);
            glColor3ub(52, 73, 94); //color mixing
        glVertex2f(-0.39f, -0.27f);
            glColor3ub(52, 73, 94); //color mixing
        glVertex2f(-0.31f, -0.27f);
            glColor3ub(144, 148, 151); //color mixing
        glVertex2f(-0.33f, 0.1f);
        glVertex2f(-0.35f, 0.14f);
        glVertex2f(-0.37f, 0.1f);
	glEnd();
	glFlush();
}

GLfloat e = 0.0f;
void WindmillFans()
{
	glPushMatrix();
	glTranslatef(-0.35, 0.07,0);
    glRotatef(-e,0,0,.4);//i=how many degree you want to rotate around an axis


	//up wing
	glBegin(GL_TRIANGLES);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(0.03f, 0.1f); //-0.32f, 0.17f
        glVertex2f(-0.03f, 0.1f); //-0.38f, 0.17f
	glEnd();
	//down wing
	glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(0.03f, -0.1f); //-0.32f, -0.03f
        glVertex2f(-0.03f, -0.1f); //-0.38f, -0.03f
	glEnd();
	//right wing
	glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(0.1f, 0.03f); //-0.25f, 0.1f
        glVertex2f(0.1f, -0.03f); //-0.25f, 0.04f
	glEnd();
    //left wing
	glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(-0.1f, 0.03f); //-0.45f, 0.1f
        glVertex2f(-0.1f, -0.03f); //-0.45f, 0.04f
	glEnd();


	glPopMatrix();
    e+=11.0f;
    glLoadIdentity();

    //center circle of the fan
	int fn;
	GLfloat p111= -.35f; GLfloat q111= .07f; GLfloat radius111 =.01f;
	int triangleAmount111 = 20; //# of triangles used to draw circle

	GLfloat twicePi111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.2f, 0.2f, 0.2f);//red
		glVertex2f(p111, q111); // center of circle
		for(fn = 0; fn <= triangleAmount111; fn++) {
			glVertex2f(
		            p111 + (radius111 * cos(fn *  twicePi111 / triangleAmount111)),
			    q111 + (radius111* sin(fn * twicePi111 / triangleAmount111))
			);
		}
	glEnd();

    glFlush();
}

void rainyWindmillFans()
{
	glPushMatrix();
	glTranslatef(-0.35, 0.07,0);
    glRotatef(-e,0,0,.4);//i=how many degree you want to rotate around an axis


	//up wing
	glBegin(GL_TRIANGLES);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(0.03f, 0.1f); //-0.32f, 0.17f
        glVertex2f(-0.03f, 0.1f); //-0.38f, 0.17f
	glEnd();
	//down wing
	glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(0.03f, -0.1f); //-0.32f, -0.03f
        glVertex2f(-0.03f, -0.1f); //-0.38f, -0.03f
	glEnd();
	//right wing
	glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(0.1f, 0.03f); //-0.25f, 0.1f
        glVertex2f(0.1f, -0.03f); //-0.25f, 0.04f
	glEnd();
    //left wing
	glBegin(GL_POLYGON);
        glColor3f(0.9f, 0.9f, 0.9f);
        glVertex2f(0.0f, 0.0f); //-0.35f, 0.07f
        glVertex2f(-0.1f, 0.03f); //-0.45f, 0.1f
        glVertex2f(-0.1f, -0.03f); //-0.45f, 0.04f
	glEnd();


	glPopMatrix();
    e+=40.0f;
    glLoadIdentity();

    //center circle of the fan
	int fn;
	GLfloat p111= -.35f; GLfloat q111= .07f; GLfloat radius111 =.01f;
	int triangleAmount111 = 20; //# of triangles used to draw circle

	GLfloat twicePi111 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.2f, 0.2f, 0.2f);//red
		glVertex2f(p111, q111); // center of circle
		for(fn = 0; fn <= triangleAmount111; fn++) {
			glVertex2f(
		            p111 + (radius111 * cos(fn *  twicePi111 / triangleAmount111)),
			    q111 + (radius111* sin(fn * twicePi111 / triangleAmount111))
			);
		}
	glEnd();

    glFlush();
}


void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);

	daySky();

	//##################################################################################################################
	//SUN
	//##################################################################################################################
	int i;
	GLfloat x=.7f; GLfloat y=.79f; GLfloat radius =.12f;
	int triangleAmount = 20; //# of triangles used to draw circle
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(235, 255, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    leftCloud();
	rightCloud();
	dayMountain();
	dayField();
	dayRoad();
	bird1();
	bird2();
	dayHighway();
	highwayWhiteBars();
	yellowCarDay();
	redCarDay();
	dayHouse();
	dayTree();
	dayPond();
	dayWindmillStand();
	WindmillFans();

	glFlush();  // Render now
}

void night()
{
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);

	nightSky();
	star();

	//##################################################################################################################
	//Moon
	//##################################################################################################################

	int i;
	GLfloat x=.6f; GLfloat y=.84f; GLfloat radius =0.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(217, 220, 222);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount+1;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
			glColor3ub(237, 241, 243);
		}
	glEnd();

    leftCloud();
	rightCloud();
	nightMountain();
	nightField();
	nightRoad();
	nightHighway();
	highwayWhiteBars();
	yellowCarNight();
	redCarNight();
	nightHouse();
	nightTree();
	nightPond();
    nightWindmillStand();
	WindmillFans();

	glFlush();  // Render now
}

GLfloat positionRain = 0.0f;
GLfloat speed110 = 0.8f;

void updateRain(int value) {

    if(positionRain >1.4)
        positionRain = -1.0f;

    positionRain += speed110;

	glutPostRedisplay();


	glutTimerFunc(100, updateRain, 0);
}

void displayRain(){

    glPushMatrix();
    glTranslatef(0.0f,-positionRain, 0.0f);

    //line1
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 1.0f);
	glVertex2f(-1.0f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 1.0f);
	glVertex2f(-0.8f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 1.0f);
	glVertex2f(-0.6f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 1.0f);
	glVertex2f(-0.4f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 1.0f);
	glVertex2f(-0.2f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 1.0f);
	glVertex2f(0.0f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 1.0f);
	glVertex2f(0.2f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 1.0f);
	glVertex2f(0.4f, 0.8f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 1.0f);
	glVertex2f(0.6f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 1.0f);
	glVertex2f(0.8f, 0.8f);

	//line2
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-1.0f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.8f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 0.7f);
	glVertex2f(-0.6f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 0.7f);
	glVertex2f(-0.4f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 0.7f);
	glVertex2f(-0.2f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.7f);
	glVertex2f(0.0f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.7f);
	glVertex2f(0.2f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 0.7f);
	glVertex2f(0.4f, 0.5f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.6f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 0.7f);
	glVertex2f(0.8f, 0.5f);


	//line3
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-1.0f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.8f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.6f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.4f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 0.4f);
	glVertex2f(-0.2f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.4f);
	glVertex2f(0.0f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.4f);
	glVertex2f(0.2f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 0.4f);
	glVertex2f(0.4f, 0.2f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.6f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.8f, 0.2f);


		//line4
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-1.0f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.8f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.6f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.4f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.2f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.2f,-0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.4f, -0.2f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 0.0f);
	glVertex2f(0.6f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 0.0f);
	glVertex2f(0.8f, -0.2f);

		//line4
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, -0.3f);
	glVertex2f(-1.0f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, -0.3f);
	glVertex2f(-0.8f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, -0.3f);
	glVertex2f(-0.6f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, -0.3f);
	glVertex2f(-0.4f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, -0.3f);
	glVertex2f(-0.2f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.0f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, -0.3f);
	glVertex2f(0.2f,-0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.4f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.6f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.8f, -0.5f);

    //line5
	glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, -0.6f);
	glVertex2f(-1.0f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, -0.6f);
	glVertex2f(-0.8f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.6f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.4f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.2f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.0f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, -0.6f);
	glVertex2f(0.2f,-0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, -0.6f);
	glVertex2f(0.4f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.6f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.8f, -0.8f);

	    //line6
	glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, -0.9f);
	glVertex2f(-1.0f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, -0.9f);
	glVertex2f(-0.8f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.6f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, -0.9f);
	glVertex2f(-0.4f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, -0.9f);
	glVertex2f(-0.2f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, -0.9f);
	glVertex2f(0.0f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.2f,-1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.4f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, -0.9f);
	glVertex2f(0.6f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, -0.9f);
	glVertex2f(0.8f, -1.0f);
	glEnd();

    glPopMatrix();

    glFlush();
}


void rainy()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);

    rainySky();
	rainyMountain();
	rainyField();
	rainyRoad();
	dayHighway();
	highwayWhiteBars();
	dayHouse();
	rainyTree();
	rainyPond();
	dayWindmillStand();
	rainyWindmillFans();
	displayRain();


    glFlush(); //render now
}



void handleKeypress(unsigned char key, int x, int y)
{
    //multiple scenario
	switch (key)
	{
    case 'd':
        glutDisplayFunc(day);
        //glutPostRedisplay();
        //Idle();
        break;

    case 'n':
        glutDisplayFunc(night);
        //glutPostRedisplay();
        //Idle();
        break;

    case 'r':
        glutDisplayFunc(rainy);
        //glutPostRedisplay();
        //Idle();
        break;
    }
}



/* Main function: GLUT runs as a console application starting at main()*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("MountainVillage"); // Create a window with the given title
	glutReshapeWindow(1230,650);   // Set the window's initial width & height

	glutInitWindowPosition(50,50);

	glutDisplayFunc(day); // Register display callback handler for window re-paint
	glutKeyboardFunc(handleKeypress);
	glutTimerFunc(100, CloudLeft, 0);
	glutTimerFunc(100, CloudRight, 0);
    glutTimerFunc(100, updateBird, 0);
    glutTimerFunc(100, updateBird2, 0);
	glutTimerFunc(100, YcarPosition, 0);
	glutTimerFunc(100, RcarPosition, 0);
	glutTimerFunc(100, updateRain, 0);

	//glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

