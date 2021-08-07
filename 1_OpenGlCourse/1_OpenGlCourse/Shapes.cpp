#include "Shapes.h"
#include<iostream>
using std::cout;
//tiltAxis: 0 - x || 1 - y || 2 - z
void Shapes::fillCircleBuffers(GLfloat vertices[], GLuint indices[], GLint nVertices, GLfloat cx, GLfloat cy, GLfloat cz, GLfloat radius, Color color)
{
										
	GLfloat step = glm::radians(360 / (float)nVertices); //Rotational step

	//Center point
	vertices[0] = cx;
	vertices[1] = cy;
	vertices[2] = cz;
	vertices[3] = color.r;
	vertices[4] = color.g;
	vertices[5] = color.b;
	vertices[6] = 0.0;
	vertices[7] = 0.0;


	GLfloat rotation = 0.0;

	//Creating cooridnates for all vertices
	for (int i = 0; i < nVertices; i++)
	{

		GLfloat x = radius * glm::cos(rotation);
		GLfloat y = radius * glm::sin(rotation);
		GLfloat z = cz;

		int index = (i + 1) * 8;
		cout << index << "\n";
		//Coordinates
		vertices[index] = x;
		vertices[index + 1] = y;
		vertices[index + 2] = z;

		//Color
		vertices[index + 3] = color.r;
		vertices[index + 4] = color.g;
		vertices[index + 5] = color.b;


		//texCoords
		vertices[index + 6] = 0.0;
		vertices[index + 7] = 0.0;

		rotation += step; 
	}


	//Creating triangles using vertices
	for (int i = 0; i < nVertices - 1; i++)
	{
		indices[i * 3] = 0;
		indices[i * 3 + 1] = i + 1;
		indices[i * 3 + 2] = i + 2;
	}

	indices[nVertices * 3 - 3] = 0;
	indices[nVertices * 3 - 2] = 1;
	indices[nVertices * 3 - 1] = nVertices;
}