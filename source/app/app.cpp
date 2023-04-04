#include "app.h"

void App::Init(unsigned int height, unsigned int width, const char* title, colorWin __color){
  if(!glfwInit()){
    return;
  }
  window = glfwCreateWindow(height,width, title, NULL, NULL);
  if(!window)
  {
    glfwTerminate();
    return ;
  }
  glfwMakeContextCurrent(window);
  GLenum err = glewInit();
  if(GLEW_OK != err)
  {
    cout << "error" << endl;
  }
  _color = __color ;
  sceneMain.Init();
}
void App::Event(){
  
  glfwPollEvents();   
  // warning :: investige and remove
}
void App::Update(){
   
  sceneMain.Update();
}
void App::Render(){
  sceneMain.Render();
  glfwSwapBuffers(window);
  glClear(GL_COLOR_BUFFER_BIT );
  glClearColor(_color.red,_color.green,_color.blue,_color.alpha);
}
void App::Release(){
  sceneMain.Release();
  glfwDestroyWindow(window);
  glfwTerminate();

}
bool App::isRun(){
  return (!glfwWindowShouldClose(window) ) ;
}
