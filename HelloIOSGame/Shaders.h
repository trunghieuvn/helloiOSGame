#pragma once

#ifdef _WIN32
#include "ogles_sys.h"
using namespace glm;
#else
#import <OpenGLES/ES2/glext.h>

extern FILE* getFile(const char* file);
#endif

class Shaders
{
public:
	GLuint program, vertexShader, fragmentShader;
	char fileVS[260];
	char fileFS[260];
	GLint positionAttribute;

	Shaders();
	~Shaders();

	GLint Init(char* vertexShaderFilePath, char* fragmentShaderFilePath);

private:
	GLuint LoadShader(GLuint type, char* filePath);
	GLuint LoadProgram(GLuint vertexShader, GLuint fragmentShader);
};

