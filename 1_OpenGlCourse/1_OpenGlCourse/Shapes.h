#ifndef SHAPE_H
#define SHAPE_H
#include<glm/glm.hpp>
#include <GLFW/glfw3.h>
#include "Color.h"

class Shapes{
public:
	static void fillCircleBuffers(GLfloat vertices[], GLuint indices[], GLint nVertices, GLfloat cx, GLfloat cy, GLfloat cz, GLfloat radius, Color color);
};



#endif