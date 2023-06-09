#include "one.h"


void One::Init(){
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
       0.6f,  0.2f, 0.0f,   1.0f, 1.0f, // top right
       0.6f, -0.2f, 0.0f,   1.0f, 0.0f, // bottom right
       0.2f, -0.2f, 0.0f,   0.0f, 0.0f, // bottom left
       0.2f,  0.2f, 0.0f,   0.0f, 1.0f  // top left 
  };
  unsigned int indices[] = {
      0, 1, 3, // first triangle
      1, 2, 3  // second triangle
  };
  
  obj1 = new Triangle();
  obj1->addShader("./shader/vertex.frag", "./shader/frag.frag");
  obj1->addBuffer(vertices, sizeof(vertices), indices, sizeof(indices) ) ;
  float vertices2[] = { 
      -0.2f,  0.2f, 0.0f,   1.0f, 1.0f, // top right
      -0.2f, -0.2f, 0.0f,   1.0f, 0.0f, // bottom right
      -0.6f, -0.2f, 0.0f,   0.0f, 0.0f, // bottom left
      -0.6f,  0.2f, 0.0f,   0.0f, 1.0f  // top left 
      } ;

  obj2 = new Triangle();
  obj2->addShader("./shader/vertex.frag", "./shader/frag2.frag");
  obj2->addBuffer(vertices2, sizeof(vertices2), indices, sizeof(indices) ) ;
  // cube

    float vertices3[] = {
        -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
         0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
         0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
         0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
         0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
         0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
         0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
        -0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

        -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
        -0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
        -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

         0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
         0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
         0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
         0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
         0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
         0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
         0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
         0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
         0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
         0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
         0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
         0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
        -0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f
    };
    cube1 = new Cube();
    cube1->addShader("./shader/vertex.frag", "./shader/frag.frag") ;
    cube1->addBuffer(vertices3, sizeof(vertices3), 0,0) ;
};
void One::Update(){

};
void One::Render(){
  obj1->Renderer();
  obj2->Renderer();
  cube1->Renderer();
};
void One::Release(){};

