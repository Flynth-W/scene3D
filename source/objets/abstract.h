#pragma once


class ObjetAbs{
  public:
    virtual void Init( const char * vertexShader, const char * fragShader , float * vertices , unsigned int sizeVert, unsigned int * indices , unsigned int  sizeInd){};
    virtual void Buffer(){};
    virtual void Update(){};
    virtual void Render(){};
    virtual void Release(){};
    bool isRun;
};

class Objet{
  public:
    virtual void addShader();
    virtual void addBuffer();
    virtual void Init();
    virtual void Update();
    virtual void Renderer();
};
