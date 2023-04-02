#pragma once


class ObjetAbs{
  public:
    virtual void Init( const char * vertexShader, const char * fragShader , float * vertices , unsigned int sizeVert, unsigned int * indices , unsigned int  sizeInd){};
    virtual void Update(){};
    virtual void Render(){};
    virtual void Release(){};
    bool isRun;
};
