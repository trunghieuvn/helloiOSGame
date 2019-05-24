#include <stdio.h>
#include "Shaders.h"

Shaders pShader;
GLfloat vertexData[9] = {0.0f, 0.5f, 0.0f,
                        0.5f, -0.5f, -0.0f,
                        -0.5f, -0.5f, 0.0f};
void game_init()
{
    pShader.Init("TriangleShaderVS.vs", "TriangleShaderFS.fs");
    
}

void game_update()
{
    
}

void game_render()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glUseProgram(pShader.program);

    if (pShader.positionAttribute != -1)
    {
        glEnableVertexAttribArray(pShader.positionAttribute);
        glVertexAttribPointer(pShader.positionAttribute, 3, GL_FLOAT, GL_FALSE, 0, vertexData);
    }
    
    glDrawArrays(GL_TRIANGLES, 0, 3);
}

void game_exit()
{
    
}
