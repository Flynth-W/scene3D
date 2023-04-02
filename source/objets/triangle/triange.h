#pragma once
#include "../abstract.h"
#include "../../utils/handleShader/headerShader.h"
#include "../../utils/buffer/buff.h"

class Trinagle : public ObjetAbs {
  public: 
    void Init( const char * vertexShader, const char * fragShader , float * vertices , unsigned int sizeVert, unsigned int * indices , unsigned int  sizeInd)override;
    void Update() override;
    void Render() override;
    void Release() override;
    bool isRun ;
  private:
    ShaderUtil * shader;
    unsigned int VBO, VAO, EBO;
};
