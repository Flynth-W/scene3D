#include "app/app.h"
using namespace std;

int main() {
  App app;
  colorWin color;
  color.red=0.0f;
  color.green=0.2f;
  color.blue=0.4f;
  color.alpha=1;
  app.Init(1000,1000,"ProWin",color);


// triangle 
  //float vertices[] = { -0.5f, -0.5f, 0.0f, 0.5f, -0.5f, 0.0f,   0.0f,  0.5f, 0.0f};  
  //_buffer bff ;
  //bff.Init();
  //bff.add(vertices);
  
  while( app.isRun() ){
    app.Event();
    //glBindVertexArray(bff.VAO);
    //glDrawArrays(GL_TRIANGLES,0,3);
    //bff.use();
    app.Update();
    app.Render();
  }
  app.Release();
}

