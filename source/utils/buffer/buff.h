#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>


class _buffer{
  public:
    _buffer(){};
    ~_buffer(){};
    void Init();
    void add( float vertc[], int size );
    void set();
    void use();
    unsigned int VBO, VAO, EBO;
    float *vertices ;  
};
