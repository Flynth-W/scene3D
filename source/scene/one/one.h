#pragma once
#include "../../objets/abstract.h"
#include "../../objets/triangle/triange.h"
#include "../../objets/cube/cube.h"

class One{
  public:
    One(){};
    ~One(){};
    void Init();
    void Update();
    void Render();
    void Release();
    bool isRun;
  private:
    Objet * obj1 ;
    Objet * obj2 ;
    Objet * cube1;
};

