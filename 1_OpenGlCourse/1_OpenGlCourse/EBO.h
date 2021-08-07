#ifndef EBO_CLASS_H
#define EBO_CLASS_H

#include <glad/glad.h>
#include <vector>
class EBO
{
public:
	GLuint ID;
	EBO(std::vector<GLuint> indices);

	void bind();
	void unbind();
	void Delete();

};
#endif 
