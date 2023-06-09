#version 330 core

uniform vec4 ourColor;
uniform vec2 u_resolution;
uniform float u_time;

in vec4 vertexColor;
out vec4 FragColor;

mat2 scale(vec2 scale){
	return mat2(scale.x, 0.0, 0.0, scale.y);
}
float circleshape(vec2 position, float radius){
  return step(radius, length(position - vec2(0.5)));
}
void main()
{
	vec2 coord = gl_FragCoord.xy / u_resolution;
	vec3 color = vec3(0.0);

	coord = scale(vec2(sin(u_time) + 2.0)) * coord;

	color += vec3(circleshape(coord, 0.3));
  
  FragColor = vec4(0.9,0.4,0.5,1.0);
}
