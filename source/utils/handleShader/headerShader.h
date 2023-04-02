#pragma once
#include <iostream>
#include <fstream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <math.h>
class ShaderUtil{
  public:
    // basic
    ShaderUtil(){};
    ~ShaderUtil(){};
    void Load(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);
    void use();
    unsigned int shaderProgram=glCreateProgram();
  private:
    bool isColor=true;
    
};

