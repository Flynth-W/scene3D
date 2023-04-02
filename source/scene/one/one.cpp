#include "one.h"


void One::Init(){
  obj = new Trinagle();
  float vertices[] = {
      // positions          // texture coords
      // 0.2f,  0.2f, 0.0f,   1.0f, 1.0f, // top right
      // 0.2f, -0.2f, 0.0f,   1.0f, 0.0f, // bottom right
      //-0.2f, -0.2f, 0.0f,   0.0f, 0.0f, // bottom left
      //-0.2f,  0.2f, 0.0f,   0.0f, 1.0f  // top left 
      // left
      //-0.2f,  0.2f, 0.0f,   1.0f, 1.0f, // top right
      //-0.2f, -0.2f, 0.0f,   1.0f, 0.0f, // bottom right
      //-0.6f, -0.2f, 0.0f,   0.0f, 0.0f, // bottom left
      //-0.6f,  0.2f, 0.0f,   0.0f, 1.0f  // top left 
      //  right
       0.4f,  0.2f, 0.0f,   1.0f, 1.0f, // top right
       0.4f, -0.2f, 0.0f,   1.0f, 0.0f, // bottom right
       0.0f, -0.2f, 0.0f,   0.0f, 0.0f, // bottom left
       0.0f,  0.2f, 0.0f,   0.0f, 1.0f  // top left 
  };
  unsigned int indices[] = {
      0, 1, 3, // first triangle
      1, 2, 3  // second triangle
  };
  obj->Init("./shader/vertex.frag", "./shader/frag.frag", vertices, sizeof(vertices) , indices , sizeof(indices) );
  obj->Render();
  obj2->Init("./shader/vertex.frag", "./shader/frag.frag", vertices, sizeof(vertices) , indices , sizeof(indices) );
  obj2->Render();

};
void One::Update(){
  obj->Update();
};
void One::Render(){
};
void One::Release(){};

