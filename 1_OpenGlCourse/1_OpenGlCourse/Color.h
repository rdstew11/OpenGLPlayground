
#ifndef COLOR_CLASS_H
#define COLOR_CLASS_H
#include <GLFW/glfw3.h>

class Color {
public:
	Color(GLfloat rVal, GLfloat gVal, GLfloat bVal);
	GLfloat r, g, b;
};

#endif