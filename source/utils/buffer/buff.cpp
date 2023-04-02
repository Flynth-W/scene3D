#include "buff.h"
#include <iostream>
using namespace  std ;
void _buffer::Init(){
  glGenVertexArrays(1, &VAO);
  glGenBuffers(1, &VBO);
  glGenBuffers(1, &EBO);

  glBindVertexArray(VAO);
}
void _buffer::add(float  vertc[], int size){
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  //glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  //glEnableVertexAttribArray(0);
  //glBindBuffer(GL_ARRAY_BUFFER, 0); 
  //glBindVertexArray(0);
  
  // position attribute
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  //// color attribute
  //glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  //glEnableVertexAttribArray(1);

};
void _buffer::set(){
}
void _buffer::use(){
  
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES,0,3);
}
