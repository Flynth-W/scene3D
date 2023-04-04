#pragma once
#include "../abstract.h"
#include "../../utils/handleShader/headerShader.h"
#include "../../utils/buffer/buff.h"
// shader class
#include "./../Shader/Shader.h"


class Triangle: public Objet{

  public:
    void addShader(const char * vertexShader, const char * fragShader) override ;
    void addBuffer(float * vertices , unsigned int sizeVert, unsigned int * indices , unsigned int  sizeInd) override ;
    void Init()      override ;
    void Update()    override ;
    void Renderer()  override ;
  private:
    Shader * shader;
    unsigned int VBO, VAO, EBO;
};
